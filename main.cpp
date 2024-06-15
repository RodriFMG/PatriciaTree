#include "PatriciaTree.h"

int main() {

    PatriciaTree tree;

    // Inserciones
    tree.insert("transact");
    tree.insert("transaction");
    tree.insert("transcend");
    tree.insert("transcendental");
    tree.insert("transcontinental");
    tree.insert("transcript");
    tree.insert("transcription");
    tree.insert("transducer");
    tree.insert("transduce");
    tree.insert("transept");
    tree.insert("transfer");
    tree.insert("transference");
    tree.insert("transfiguration");
    tree.insert("transfix");
    tree.insert("transform");
    tree.insert("transformation");
    tree.insert("transfuse");
    tree.insert("transfusion");
    tree.insert("transgress");
    tree.insert("transgression");
    tree.insert("transistor");
    tree.insert("transit");
    tree.insert("transition");
    tree.insert("transitory");
    tree.insert("translate");
    tree.insert("translation");
    tree.insert("translucent");
    tree.insert("transmit");
    tree.insert("transmission");
    tree.insert("transmute");

    // Eliminaciones
    tree.remove("transact");
    tree.remove("transaction");
    tree.remove("transcend");
    tree.remove("transcendental");
    tree.remove("transmute");
    tree.remove("transcript");
    tree.remove("transcription");
    tree.remove("transducer");
    tree.remove("transduce");
    tree.remove("transept");
    tree.remove("transfer");
    tree.remove("transference");
    tree.remove("transfiguration");
    tree.remove("transfix");
    tree.remove("transform");
    tree.remove("transformation");
    tree.remove("transfuse");
    tree.remove("transfusion");
    tree.remove("transgress");
    tree.remove("transgression");
    tree.remove("transistor");
    tree.remove("transit");
    tree.remove("transition");
    tree.remove("transitory");
    tree.remove("translate");
    tree.remove("translation");
    tree.remove("translucent");
    tree.remove("transmit");
    tree.remove("transmission");


    // Búsquedas
    std::cout << tree.search("transact") << std::endl;       // Output: 0 (false)
    std::cout << tree.search("transaction") << std::endl;    // Output: 0 (false)
    std::cout << tree.search("transcend") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("transcendental") << std::endl; // Output: 0 (false)
    std::cout << tree.search("transcontinental") << std::endl; // Output: 0 (false)
    std::cout << tree.search("transcript") << std::endl;     // Output: 0 (false)
    std::cout << tree.search("transcription") << std::endl;  // Output: 0 (false)
    std::cout << tree.search("transducer") << std::endl;     // Output: 0 (false)
    std::cout << tree.search("transduce") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("transept") << std::endl;       // Output: 0 (false)
    std::cout << tree.search("transfer") << std::endl;       // Output: 0 (false)
    std::cout << tree.search("transference") << std::endl;   // Output: 0 (false)
    std::cout << tree.search("transfiguration") << std::endl; // Output: 0 (false)
    std::cout << tree.search("transfix") << std::endl;       // Output: 0 (false)
    std::cout << tree.search("transform") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("transformation") << std::endl; // Output: 0 (false)
    std::cout << tree.search("transfuse") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("transfusion") << std::endl;    // Output: 0 (false)
    std::cout << tree.search("transgress") << std::endl;     // Output: 0 (false)
    std::cout << tree.search("transgression") << std::endl;  // Output: 0 (false)
    std::cout << tree.search("transistor") << std::endl;     // Output: 0 (false)
    std::cout << tree.search("transit") << std::endl;        // Output: 0 (false)
    std::cout << tree.search("transition") << std::endl;     // Output: 0 (false)
    std::cout << tree.search("transitory") << std::endl;     // Output: 0 (false)
    std::cout << tree.search("translate") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("translation") << std::endl;    // Output: 0 (false)
    std::cout << tree.search("translucent") << std::endl;    // Output: 0 (false)
    std::cout << tree.search("transmit") << std::endl;       // Output: 0 (false)
    std::cout << tree.search("transmission") << std::endl;   // Output: 0 (false)
    std::cout << tree.search("transmute") << std::endl;      // Output: 1 (true)

    cout<<"\n--------\n";

    auto* boleano = tree.get_root();
    cout<<boleano->hash->solo_un_hijo()<<endl;


    boleano = boleano->hash->search(boleano->hash->encontrar_unico_hijo());

    cout<<boleano->cadena<<endl;


}