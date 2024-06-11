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

};


void PatriciaTree::insert(string word) {

    string str{};
    auto* node = root;

    while(!word.empty()){
        if(node->hash->esta_o_no(word[0])){
            node = node->hash->search(word[0]);
            word.erase(0,1); //puede q no vaya.

            if(word == node->cadena) break;

            for(int i=0; i< node->cadena.size(); ++i){
                if(word[i] == node->cadena[i]) {
                    str += word[i];
                    node->cadena.erase(0,1);
                    word.erase(0,1);
                }
                else break;
            }

            if(node->cadena.empty()){
                node->cadena = str;
                continue;
            }

            auto* new_node = new Node();
            new_node->is_word = true;
            new_node->leaf = true;
            new_node->cadena = node->cadena;

            node->hash->insert(node->cadena[0],new_node);

            node->is_word = false;
            node->leaf = false;
            node->cadena = str;
        }
        else{
            auto* new_node = new Node();
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
        if (!node->hash->esta_o_no(word[0])) return false;

        node = node->hash->search(word[0]);

        if (node->leaf) return (word == node->cadena);

        for (size_t i = 0; i < node->cadena.size() && i < word.size(); ++i) {
            if (word[i] != node->cadena[i]) {
                return false;
            }
        }

        word.erase(0, node->cadena.size());

        if (node->is_word && node->cadena == word) return true;


    }

    return false;

}


#endif //PATRICIATREE_PATRICIATREE_H
