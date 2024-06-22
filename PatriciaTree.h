//
// Created by RODRIGO on 9/06/2024.
//

#ifndef PATRICIATREE_PATRICIATREE_H
#define PATRICIATREE_PATRICIATREE_H

#include "Node.h"
#include "Queue.h"

class PatriciaTree{
private:

    Node* root;

public:
    PatriciaTree(){
        root = new Node[26];
    };

    void insert(string word);
    bool search(const string& word);
    void remove(string word);


    Node* get(char pe){
        return root->hash->search(pe);
    }

    Node* get_root(){
        return root;
    }

};


void PatriciaTree::insert(string word) {
    auto *node = root;


    while (!word.empty()) {
        string str{};

        if (node->hash->esta_o_no(word[0])) {
            node = node->hash->search(word[0]);

            if (word == node->cadena) {
                node->is_word = true;
                break;
            }

            int i{};
            while (!word.empty() && !node->cadena.empty()) {
                if (word[i] == node->cadena[i]) {
                    str += word[i];
                    word.erase(0, 1);

                    node->cadena.erase(0, 1);
                    --i;
                } else break;
                ++i;
            }

            if (node->cadena.empty()) {
                node->cadena = str;
                if (!word.empty() && node->leaf) node->leaf = false;

                continue;
            }

            auto* new_node = new Node[26];
            new_node->cadena = node->cadena;
            new_node->is_word = node->is_word;
            new_node->leaf = node->leaf;

            if(!node->leaf){
                for (int j = 0; j < 26; ++j) {
                    if (node->children[j]) {
                        new_node->children[j] = node->children[j];
                        node->children[j] = nullptr;
                    }
                }
            }

            node->hash->insert(new_node->cadena[0], new_node);

            if (!word.empty()) node->is_word = false;
            else node->is_word = true;

            node->leaf = false;
            node->cadena = str;

        }
        else{
            auto* new_node = new Node[26];
            new_node->cadena = word;
            new_node->leaf = true;
            new_node->is_word = true;
            node->hash->insert(word[0], new_node);
            break;
        }
    }
}


bool PatriciaTree::search(const std::string& word) {

    auto* node = root;
    auto* queue_word = new Queue(word);

    while(!queue_word->empty()){
        if(node->hash->esta_o_no(queue_word->first_element())){
            node = node->hash->search(queue_word->first_element());

            if(node->is_word && node->cadena == queue_word->cadena_rango()) return true;

            int j{};
            while(!queue_word->empty() && !node->cadena.empty()){
                if(queue_word->first_element() == node->cadena[j]) {
                    queue_word->pop();
                }
                else break;
                j++;
            }


        }
        else{
            break;
        }
    }

    return false;

}

// Ver el único caso que falla.
void PatriciaTree::remove(std::string word) {


    if(!search(word)) return;

    auto* node = root;

    if(root->hash->search(word[0])->leaf) {
        root->children[word[0] - 'a'] = nullptr;
        return;
    }

    auto* queue_word = new Queue(word);

    while(!queue_word->empty()){
        if(node->hash->esta_o_no(queue_word->first_element())){
            node = node->hash->search(queue_word->first_element());

            int j{};
            while(!queue_word->empty()){
                if(queue_word->first_element() == node->cadena[j]) queue_word->pop();
                else break;
                ++j;
            }

            if(!node->is_word && queue_word->empty()) break;

            if(node->hash->solo_un_hijo() && node->is_word){
                if(queue_word->empty()){

                    char unico_enlace = node->hash->encontrar_unico_hijo();

                    auto* merge = node->hash->search(unico_enlace);

                    node->cadena += merge->cadena;

                    if(!merge->leaf){
                        for (int k = 0; k < 26; ++k) {
                            if (merge->children[k]) {
                                node->children[k] = merge->children[k];
                                merge->children[k] = nullptr;
                            }
                        }
                        node->is_word = false;
                    }
                    else {
                        node->is_word = true;
                        node->leaf = true;
                    }

                    node->children[node->hash->ind(unico_enlace)] = nullptr;

                }
                else{

                    auto* merge = node->hash->search(queue_word->first_element());

                    if(merge->cadena == queue_word->cadena_rango()) {

                        if(merge->leaf) node->leaf = true;
                        else if(merge->is_word){
                            for (int k = 0; k < 26; ++k) {
                                if (merge->children[k]) {
                                    merge->children[k]->cadena = merge->cadena + merge->children[k]->cadena;
                                    node->children[k] = merge->children[k];
                                    merge->children[k] = nullptr;
                                }
                            }
                            node->is_word = true;
                        }

                        node->children[queue_word->first_element() - 'a'] = nullptr;

                    }
                    else continue;
                }

                break;
            }
            else if(queue_word->empty() && node->is_word && !node->hash->solo_un_hijo()) {
                node->is_word = false;
                break;
            }
                /* En caso tenga 2 hijos y justo el hijo que voy a borrar es hoja, pues re ajusto
                 * el hijo del otro lado con el nodo actual. (Sus enlaces del nodo de importan
                 * porque se irán junto con el padre arriba.)*/

                // Esta bien.

             if(!node->hash->solo_un_hijo() && node->hash->search(queue_word->first_element())->leaf){

                node->children[node->hash->ind(queue_word->first_element())] = nullptr;

                if(node->hash->solo_un_hijo()){


                    if(!node->is_word){

                        char unico_enlace = node->hash->encontrar_unico_hijo();

                        auto* merge = node->hash->search(unico_enlace);

                        //cout<<node->cadena<<" 1\n";
                        node->cadena += merge->cadena;
                        //cout<<node->cadena<<" 2\n";

                        if(!merge->leaf){
                            bool repetido = false;
                            for (int k = 0; k < 26; ++k) {
                                if (merge->children[k]) {
                                    if(node->children[k]){
                                        if(node->children[k]->cadena[0] == merge->children[k]->cadena[0]) repetido = true;
                                    }
                                    node->children[k] = merge->children[k];
                                    merge->children[k] = nullptr;
                                }
                            }

                            if(repetido) {

                                if(merge->is_word) node->is_word = true;
                                else node->is_word = false;

                                if(merge->leaf) node->leaf = true;
                                else node->leaf = false;

                                break;
                            }
                        }

                        if(merge->is_word) node->is_word = true;
                        else node->is_word = false;

                        if(merge->leaf) node->leaf = true;
                        else node->leaf = false;

                        node->children[node->hash->ind(unico_enlace)] = nullptr;
                    }

                }


                break;

            }



            /// Puede que no sea necesario.
            if(!word.empty() && !node->is_word && node->hash->encontrar_mas_de_2_hijos() && node->hash->search(queue_word->first_element())->leaf){

                node->children[queue_word->first_element()] = nullptr;
                 break;
            }


        }
        else break;

    }


}


#endif //PATRICIATREE_PATRICIATREE_H
