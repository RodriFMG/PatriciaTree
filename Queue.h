//
// Created by RODRIGO on 21/06/2024.
//

#ifndef PATRICIATREE_QUEUE_H
#define PATRICIATREE_QUEUE_H

#include <iostream>
#include <cctype> // por si falla el shuffle(), del main.

struct NodeQueue{
    NodeQueue* next;
    char element{};

    explicit NodeQueue(char elm = '\0') : next(nullptr), element(elm) {}
};

class Queue{
private:
    NodeQueue* root;
public:

    explicit Queue(const std::string& cad = "") : root(nullptr) {
        if (cad.empty()) return;


        root = new NodeQueue(static_cast<char>(tolower(cad[0])));
        NodeQueue* temp = root;

        for (size_t i = 1; i < cad.size(); ++i) {
            temp->next = new NodeQueue(static_cast<char>(tolower(cad[i])));
            temp = temp->next;
        }
    }

    virtual ~Queue(){
        while (!empty()) pop();
        delete root;
    }


    bool empty(){
        return root == nullptr;
    }


    void pop(){
        if (empty()) return;
        NodeQueue* temp = root;
        root = root->next;
        delete temp;
    }

    std::string cadena_rango() {
        if (empty()) return {};

        std::string cadena{};
        auto* temp = root;

        while(temp){
            cadena += temp->element;
            temp = temp->next;
        }

        return cadena;
    }

    char first_element(){
        return root->element;
    }

};

#endif //PATRICIATREE_QUEUE_H
