//
// Created by RODRIGO on 10/06/2024.
//

#ifndef PATRICIATREE_ARRAY_H
#define PATRICIATREE_ARRAY_H

#include "Node.h"

class ArrayHash{
private:
    Node** hash;
public:
    ArrayHash(){
        hash = new Node*[26];
        for (int i = 0; i < 26; ++i) {
            hash[i] = nullptr;
        }
    }

    Node* search(char enlace){
        int ind = enlace - 'a';
        return hash[ind];
    }

    void insert(char enlace, Node* elm){
        int ind = enlace - 'a';
        hash[ind] = elm;
    }

    bool esta_o_no(char enlace){
        int ind = enlace - 'a';
        return (hash[ind] == nullptr);
    }

    void KillSelf(){
        for(int i=0; i<26; ++i) delete hash[i];
        delete[] hash;
    }

};


#endif //PATRICIATREE_ARRAY_H
