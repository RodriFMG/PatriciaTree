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

    void insert(const string& word);

    void RecursiveInsert(char prefijo, string word, Node* node);
};


void PatriciaTree::insert(const std::string &word) {

}

void PatriciaTree::RecursiveInsert(char prefijo, std::string word, Node* node) {


}



#endif //PATRICIATREE_PATRICIATREE_H
