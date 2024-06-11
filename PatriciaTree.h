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
                    word.erase(0, 1);
                    node->cadena.erase(0, 1);
                    --i;
                } else break;
                ++i;
            }

            if (node->cadena.empty()) {
                node->cadena = str;
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


#endif //PATRICIATREE_PATRICIATREE_H
