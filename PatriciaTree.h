//
// Created by RODRIGO on 9/06/2024.
//

#ifndef PATRICIATREE_PATRICIATREE_H
#define PATRICIATREE_PATRICIATREE_H

#define WIN32_LEAN_AND_MEAN //Lo que permite dar el color.
#include "Node.h"
#include "Queue.h"
#include <queue>
#include <Windows.h>
#include <algorithm>

enum ConsoleColors {
    Color_Default = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
    Color_Red = FOREGROUND_RED | FOREGROUND_INTENSITY,
    Color_Green = FOREGROUND_GREEN | FOREGROUND_INTENSITY
};

class PatriciaTree{
private:

    Node* root;

public:
    PatriciaTree(){
        root = new Node[26];
    };

    void insert(const string& word);
    bool search(const string& word);
    void remove(string word);


    [[maybe_unused]] Node* get(char pe){
        return root->hash->search(pe);
    }

    [[maybe_unused]] Node* root_get(){
        return root;
    }

    void print_by_lvl();
    void print_by_lvl_recursive(Node* node);

};


void PatriciaTree::insert(const string& word) {

    if(search(word)) return;

    auto *node = root;
    auto* queue_word = new Queue(word);

    while (!queue_word->empty()) {
        string str{};

        if (node->hash->esta_o_no(queue_word->first_element())) {
            node = node->hash->search(queue_word->first_element());

            if (queue_word->cadena_rango() == node->cadena) {
                node->is_word = true;
                break;
            }

            auto* node_queue = new Queue(node->cadena);

            while (!queue_word->empty() && !node_queue->empty()) {
                if (queue_word->first_element() == node_queue->first_element()) {

                    str += queue_word->first_element();
                    queue_word->pop();
                    node_queue->pop();

                } else break;

            }

            if (node_queue->empty()) {
                node->cadena = str;
                if(!queue_word->empty() && node->leaf) node->leaf = false;

                continue;
            }

            auto* new_node = new Node[26];
            new_node->cadena = node_queue->cadena_rango();
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

            if (!queue_word->empty()) node->is_word = false;
            else node->is_word = true;

            node->leaf = false;
            node->cadena = str;

        }
        else{
            auto* new_node = new Node[26];
            new_node->cadena = queue_word->cadena_rango();
            new_node->leaf = true;
            new_node->is_word = true;
            node->hash->insert(queue_word->first_element(), new_node);
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

            int i{};
            while(!queue_word->empty() && !node->cadena.empty()){

                if(queue_word->first_element() == node->cadena[i]) queue_word->pop();
                else break;

                i++;
            }


        }
        else break;

    }

    return false;

}

void PatriciaTree::remove(std::string word) {

    if(!search(word)) return;

    if(root->hash->search(word[0])->leaf) {
        root->children[word[0] - 'a'] = nullptr;
        return;
    }

    auto* queue_word = new Queue(word);
    auto* node = root;
    bool entry_conditional = false;

    while(!queue_word->empty()){
        if(node->hash->esta_o_no(queue_word->first_element())){
            node = node->hash->search(queue_word->first_element());

            int i{};
            while (!queue_word->empty() && i < node->cadena.size()) {
                if (queue_word->first_element() == node->cadena[i]) queue_word->pop();
                else break;
                ++i;
            }

            if(!node->is_word && queue_word->empty()) entry_conditional = true;
            else if(node->hash->solo_un_hijo() && node->is_word){
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

                        if(merge->leaf) {
                            node->leaf = true;
                            node->children[queue_word->first_element() - 'a'] = nullptr;
                        }
                        else node->hash->search(queue_word->first_element())->is_word = false;


                    }
                    else continue;
                }
                entry_conditional = true;
            }
            else if(queue_word->empty() && node->is_word && !node->hash->solo_un_hijo()) {
                node->is_word = false;
                entry_conditional = true;
            }
            else if(!node->hash->solo_un_hijo() && node->hash->search(queue_word->first_element())->leaf){

                node->children[node->hash->ind(queue_word->first_element())] = nullptr;

                if(node->hash->solo_un_hijo()){
                    if(!node->is_word){

                        char unico_enlace = node->hash->encontrar_unico_hijo();
                        auto* merge = node->hash->search(unico_enlace);

                        node->cadena += merge->cadena;

                        bool repetido = false;
                        if(!merge->leaf){
                            for (int k = 0; k < 26; ++k) {
                                if (merge->children[k]) {
                                    if(node->children[k]){
                                        if(node->children[k]->cadena[0] == merge->children[k]->cadena[0]) repetido = true;
                                    }
                                    node->children[k] = merge->children[k];
                                    merge->children[k] = nullptr;
                                }
                            }
                        }

                        node->leaf = merge->leaf;
                        node->is_word = merge->is_word;

                        if(!repetido) node->children[node->hash->ind(unico_enlace)] = nullptr;

                    }

                }
                entry_conditional = true;
            }

            if(entry_conditional) break;


            /*
            /// Puede que no sea necesario.
            if(!word.empty() && !node->is_word && node->hash->encontrar_mas_de_2_hijos() && node->hash->search(queue_word->first_element())->leaf){

                node->children[queue_word->first_element()] = nullptr;
                 break;
            }
            */


        }
        else break;

    }


}

void PatriciaTree::print_by_lvl() {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    cout<<"Palabra color";
    SetConsoleTextAttribute(hConsole, Color_Green);
    cout<<" verde";
    SetConsoleTextAttribute(hConsole, Color_Default);
    cout<<": is_word"<<endl;


    cout<<"Palabra color";
    SetConsoleTextAttribute(hConsole, Color_Red);
    cout<<" rojo";
    SetConsoleTextAttribute(hConsole, Color_Default);
    cout<<": no_word"<<endl<<endl;

    print_by_lvl_recursive(root);

    cout<<endl;

}

void PatriciaTree::print_by_lvl_recursive(Node *node) {
    if (!node) return;

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    if (node != root) {
        if (node->is_word) {
            SetConsoleTextAttribute(hConsole, Color_Green);
            std::cout << node->cadena;
        } else {
            SetConsoleTextAttribute(hConsole, Color_Red);
            std::cout << node->cadena;
        }
        SetConsoleTextAttribute(hConsole, Color_Default);

        if(!node->leaf) cout<<"(";
        else cout<<" ";

    }

    for (int i = 0; i < 26; ++i) {
        if (node->children[i]) print_by_lvl_recursive(node->children[i]);
    }

    if (node != root && !node->leaf) std::cout << ")";
}


#endif //PATRICIATREE_PATRICIATREE_H
