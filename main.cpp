#include "PatriciaTree.h"
#include "chrono"

int main() {

    auto start = std::chrono::high_resolution_clock::now();

    PatriciaTree tree;

    // Inserciones
    tree.insert("apple");
    tree.insert("apply");
    tree.insert("applying");
    tree.insert("appetite");
    tree.insert("applaud");

// Eliminaciones
    tree.remove("apple");
    tree.remove("apply");
    tree.remove("applying");
    tree.remove("appetite");

// Búsquedas
    std::cout << tree.search("apple") << std::endl;    // Output: 0 (false)
    std::cout << tree.search("apply") << std::endl;    // Output: 0 (false)
    std::cout << tree.search("applying") << std::endl; // Output: 0 (false)
    std::cout << tree.search("appetite") << std::endl; // Output: 0 (false)
    std::cout << tree.search("applaud") << std::endl;  // Output: 1 (true)
    cout<<"\n--------\n";

//    auto* booleano = tree.get('s');
//
//
//    cout<<booleano->cadena<<endl;

    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> duration = end - start;

    std::cout << "Tiempo de ejecución: " << duration.count() << " segundos" << std::endl;



}