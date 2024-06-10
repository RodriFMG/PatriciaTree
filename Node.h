//
// Created by RODRIGO on 9/06/2024.
//

#ifndef PATRICIATREE_NODE_H
#define PATRICIATREE_NODE_H

#include <iostream>
using namespace std;


struct Node{

    bool is_word{};
    string cadena;
    bool leaf{};

    Node(){
        is_word = false;
        cadena = "";

        /*Si leaf es true significa que es nodo hoja. */
        leaf = true;
    }

};


#endif //PATRICIATREE_NODE_H
