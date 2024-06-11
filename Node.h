//
// Created by RODRIGO on 9/06/2024.
//

#ifndef PATRICIATREE_NODE_H
#define PATRICIATREE_NODE_H

#include <iostream>
using namespace std;

/* Declaración circular
 * Lo enseñaron en progra 2 xd, permite tener una clase dentro de otra y viceversa, lo cual
 * ambas podrán funcionar y declarar métodos de las mismas de manera consisntete.
 * Esto lo hago para que cada nodo tenga una función hash independiente.
 */

struct Node;

class ArrayHash {
private:
    Node* node;

public:
    explicit ArrayHash(Node* node1);

    Node* root();

    Node* search(char enlace);

    void insert(char enlace, Node* elm);

    bool esta_o_no(char enlace);

    void replace(char enlace);

    static int ind(char caracter);

    void KillSelf();
};

struct Node {
    bool is_word;
    string cadena;
    bool leaf;
    ArrayHash* hash;
    Node** children;

    Node* padre;

    Node();

    ~Node();
};

Node::Node() {
    is_word = false;
    cadena = "";
    leaf = true;
    children = new Node*[26];
    padre = nullptr;
    for (int i = 0; i < 26; ++i) {
        children[i] = nullptr;
    }

    hash = new ArrayHash(this);
}

Node::~Node() {
    delete hash;
    delete[] children;
}

ArrayHash::ArrayHash(Node* node1) : node(node1) {}

Node* ArrayHash::root() {
    return node;
}

Node* ArrayHash::search(char enlace) {
    int ind = enlace - 'a';
    return node->children[ind];
}

void ArrayHash::insert(char enlace, Node* elm) {
    int ind = enlace - 'a';
    node->children[ind] = elm;
}

bool ArrayHash::esta_o_no(char enlace) {
    int ind = enlace - 'a';
    return (node->children[ind] != nullptr);
}

void ArrayHash::KillSelf() {
    for(int i = 0; i < 26; ++i) delete node->children[i];
    delete[] node->children;
    delete[] node;
}

int ArrayHash::ind(char caracter) {
    return caracter - 'a';
}

void ArrayHash::replace(char enlace) {
    int ind = enlace - 'a';
    node->children[ind] = nullptr;
}

#endif //PATRICIATREE_NODE_H
