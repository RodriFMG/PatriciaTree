//
// Created by RODRIGO on 10/06/2024.
//

#ifndef PATRICIATREE_ARRAY_H
#define PATRICIATREE_ARRAY_H

#include "Node.h"

class ArrayHash{
private:
    Node* node;
public:
    ArrayHash(){
        node = new Node[26];
    }

    Node* root(){
        return node;
    }

    Node* search(char enlace){
        int ind = enlace - 'a';
        return node->children[ind];
    }

    void insert(char enlace, Node* elm){
        int ind = enlace - 'a';
        node->children[ind] = elm;
    }

    bool esta_o_no(char enlace){
        int ind = enlace - 'a';
        return (node->children[ind] == nullptr);
    }

    void KillSelf(){
        for(int i=0; i<26; ++i) delete node->children[i];
        delete[] node->children;
        delete[] node;
    }

};


#endif //PATRICIATREE_ARRAY_H
