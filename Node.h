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

    Node* search(char enlace);

    void insert(char enlace, Node* elm);

    bool esta_o_no(char enlace);


    static int ind(char caracter);

    bool solo_un_hijo();

    char encontrar_unico_hijo();
};

struct Node {
    bool is_word;
    string cadena;
    bool leaf;
    ArrayHash* hash;
    Node** children;

    Node();

    ~Node();
};

Node::Node() {
    is_word = false;
    cadena = "";
    leaf = true;
    children = new Node*[26];
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

int ArrayHash::ind(char caracter) {
    return caracter - 'a';
}

bool ArrayHash::solo_un_hijo() {
    int ind{};
    for(int i=0; i<26; ++i){
        if(node->children[i]) ++ind;
        if(ind==2) {
            return false;
        }
    }

    if(ind==0) {
        cout<<"No tiene hijos."<<endl;
        return false;
    }

    return true;
}

char ArrayHash::encontrar_unico_hijo() {
    if(!solo_un_hijo()){
        cout<<"esta mal pe"<<endl;
        return 'a';
    }

    for(int i=0; i < 26; ++i)
        if(node->children[i]){
            return node->children[i]->cadena[0];
        }
}


#endif //PATRICIATREE_NODE_H
