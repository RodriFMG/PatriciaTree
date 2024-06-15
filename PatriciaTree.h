//
// Created by RODRIGO on 9/06/2024.
//

#ifndef PATRICIATREE_PATRICIATREE_H
#define PATRICIATREE_PATRICIATREE_H

#include "Node.h"

class PatriciaTree{
private:

    Node* root;

public:
    PatriciaTree(){
        root = new Node[26];
    };

    void insert(string word);
    bool search(string word);
    void remove(string word);


    Node* get(char pe){
        return root->hash->search(pe);
    }

    Node* get_root(){
        return root;
    }

};


void PatriciaTree::insert(string word) {
    auto* node = root;

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
                    word.erase(0, 1); // Intentar cambiar el .erase(), por una función y otro porque esto
                    // le aumenta un buen de complejidad.

                    node->cadena.erase(0, 1);
                    --i;
                } else break;
                ++i;
            }

            if (node->cadena.empty()) {
                node->cadena = str;
                if (!word.empty()) node->leaf = false;

                continue;
            }

            auto* new_node = new Node[26];
            new_node->cadena = node->cadena;
            new_node->is_word = node->is_word;
            new_node->leaf = node->leaf;


            for (int j = 0; j < 26; ++j) {
                if (node->children[j]) {
                    new_node->children[j] = node->children[j];
                    node->children[j] = nullptr;
                }
            }

            node->hash->insert(new_node->cadena[0], new_node);

            if (!word.empty()) node->is_word = false;
            else node->is_word = true;

            node->leaf = false;
            node->cadena = str;

        } else {
            auto* new_node = new Node[26];
            new_node->cadena = word;
            new_node->leaf = true;
            new_node->is_word = true;
            node->hash->insert(word[0], new_node);
            break;
        }
    }
}


bool PatriciaTree::search(std::string word) {

    auto* node = root;

    while(!word.empty()){
        if(node->hash->esta_o_no(word[0])){
            node = node->hash->search(word[0]);

            if(node->is_word && node->cadena == word) return true;

            int i{},j{};
            while(!word.empty() && !node->cadena.empty()){
                if(word[i] == node->cadena[j]) {
                    word.erase(0, 1);
                    --i;
                }
                else break;
                ++i;
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

    auto* node = root;


    if(root->hash->search(word[0])->leaf) {
        root->children[word[0] - 'a'] = nullptr;
        return;
    }

    while(!word.empty()){
        if(node->hash->esta_o_no(word[0])){
            node = node->hash->search(word[0]);

            int i{};
            int j{};
            while(!word.empty()){
                if(word[i] == node->cadena[j]){

                    // mejorar esto
                    word.erase(0,1);

                    --i;
                }
                else break;
                ++i;
                ++j;
            }

            cout<<"\n------\n";
            cout<<word<<" - "<<node->cadena<<"\n";




            /* Si la palabra es parte de un nodo que tiene más hijos que son palabras.
             * Se pone solamente ese hijo, de ser palabra a ya no serlo.*/


            if(node->hash->solo_un_hijo() && node->is_word){
                if(word.empty()){
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
                    }


                    node->leaf = true;
                    node->children[node->hash->ind(unico_enlace)] = nullptr;

                }
                else{
                    auto* ultimo = node->hash->search(word[0]);

                    if(ultimo->cadena == word) {

                        if(ultimo->leaf) node->leaf = true;

                        node->children[word[0] - 'a'] = nullptr;

                    }
                }

                break;
            }
            else if(word.empty() && node->is_word && !node->hash->solo_un_hijo()) {
                node->is_word = false;
            }
                /* En caso tenga 2 hijos y justo el hijo que voy a borrar es hoja, pues re ajusto
                 * el hijo del otro lado con el nodo actual. (Sus enlaces del nodo de importan
                 * porque se irán junto con el padre arriba.)*/

                // Esta bien.
            else if(node->hash->encontrar_2_hijos() && node->hash->search(word[0])->leaf){

                node->children[node->hash->ind(word[0])] = nullptr;


                if(node->hash->solo_un_hijo()){

                    char unico_enlace = node->hash->encontrar_unico_hijo();

                    auto* merge = node->hash->search(unico_enlace);

                    if(!node->is_word){

                        node->cadena += merge->cadena;

                        for (int k = 0; k < 26; ++k) {
                            if (merge->children[k]) {
                                node->children[k] = merge->children[k];
                                merge->children[k] = nullptr;
                            }
                        }

                        if(merge->is_word) node->is_word = true;
                        else node->is_word = false;

                        if(merge->leaf) node->leaf = true;

                        node->children[node->hash->ind(unico_enlace)] = nullptr;

                    }

                }


                break;

            }
            else if(!node->is_word && word.empty()) break;


            /// Puede que no sea necesario.
            //if(!word.empty() && !node->is_word && node->hash->encontrar_mas_de_2_hijos() && node->hash->search(word[0])->leaf){

              //  node->children[word[0]] = nullptr;
                // break;
            // }

        }
        else break;

    }


}


#endif //PATRICIATREE_PATRICIATREE_H
