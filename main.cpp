#include "PatriciaTree.h"

int main() {
    PatriciaTree tree;

// 50 inserciones
    tree.insert("proactive");
    tree.insert("probability");
    tree.insert("probable");
    tree.insert("probably");
    tree.insert("probe");
    tree.insert("problem");
    tree.insert("procedure");
    tree.insert("process");
    tree.insert("processor");
    tree.insert("proclaim");
    tree.insert("procure");
    tree.insert("produce");
    tree.insert("product");
    tree.insert("production");
    tree.insert("productive");
    tree.insert("productivity");
    tree.insert("profession");
    tree.insert("professional");
    tree.insert("professor");
    tree.insert("profile");
    tree.insert("profit");
    tree.insert("profound");
    tree.insert("program");
    tree.insert("programmer");
    tree.insert("progress");
    tree.insert("progressive");
    tree.insert("prohibit");
    tree.insert("project");
    tree.insert("projection");
    tree.insert("prolific");
    tree.insert("prolong");
    tree.insert("prominent");
    tree.insert("promise");
    tree.insert("promote");
    tree.insert("promotion");
    tree.insert("prompt");
    tree.insert("pronounce");
    tree.insert("proof");
    tree.insert("propel");
    tree.insert("proper");
    tree.insert("property");
    tree.insert("proportion");
    tree.insert("proposal");
    tree.insert("propose");
    tree.insert("prospect");
    tree.insert("prosper");
    tree.insert("protect");
    tree.insert("protection");
    tree.insert("protest");
    tree.insert("protocol");

// 49 eliminaciones en el mismo orden de inserción


    tree.remove("proactive");
    tree.remove("programmer");
    tree.remove("proposal");
    tree.remove("proper");
    tree.remove("property");
    tree.remove("probability");
    tree.remove("pronounce");
    tree.remove("prospect");
    tree.remove("process");
    tree.remove("project");
    tree.remove("problem");
    tree.remove("proof");
    tree.remove("probable");
    tree.remove("prosper");
    tree.remove("product");
    tree.remove("progress");
    tree.remove("progressive");
    tree.remove("productive");
    tree.remove("productivity");
    tree.remove("protect");
    tree.remove("proclaim");
    tree.remove("procure");
    tree.remove("produce");
    tree.remove("profession");
    tree.remove("professional");
    tree.remove("professor");
    tree.remove("profit");
    tree.remove("profound");
    tree.remove("production");
    tree.remove("probably");
    tree.remove("probe");
    tree.remove("proportion");
    tree.remove("procedure");
    tree.remove("prohibit");
    tree.remove("processor");
    tree.remove("program");
    tree.remove("propel");
    tree.remove("projection");
    tree.remove("prolific");
    tree.remove("prolong");
    tree.remove("prominent");
    tree.remove("promise");
    tree.remove("promote");
    tree.remove("promotion");
    tree.remove("prompt");
    tree.remove("propose");
    tree.remove("protection");
    tree.remove("protest");
    tree.remove("profile");

// Búsquedas
    std::cout << tree.search("proactive") << std::endl;       // Output: 0 (false)
    std::cout << tree.search("probability") << std::endl;     // Output: 0 (false)
    std::cout << tree.search("probable") << std::endl;        // Output: 0 (false)
    std::cout << tree.search("probably") << std::endl;        // Output: 0 (false)
    std::cout << tree.search("probe") << std::endl;           // Output: 0 (false)
    std::cout << tree.search("problem") << std::endl;         // Output: 0 (false)
    std::cout << tree.search("procedure") << std::endl;       // Output: 0 (false)
    std::cout << tree.search("process") << std::endl;         // Output: 0 (false)
    std::cout << tree.search("processor") << std::endl;       // Output: 0 (false)
    std::cout << tree.search("proclaim") << std::endl;        // Output: 0 (false)
    std::cout << tree.search("procure") << std::endl;         // Output: 0 (false)
    std::cout << tree.search("produce") << std::endl;         // Output: 0 (false)
    std::cout << tree.search("product") << std::endl;         // Output: 0 (false)
    std::cout << tree.search("production") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("productive") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("productivity") << std::endl;    // Output: 0 (false)
    std::cout << tree.search("profession") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("professional") << std::endl;    // Output: 0 (false)
    std::cout << tree.search("professor") << std::endl;       // Output: 0 (false)
    std::cout << tree.search("profile") << std::endl;         // Output: 0 (false)
    std::cout << tree.search("profit") << std::endl;          // Output: 0 (false)
    std::cout << tree.search("profound") << std::endl;        // Output: 0 (false)
    std::cout << tree.search("program") << std::endl;         // Output: 0 (false)
    std::cout << tree.search("programmer") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("progress") << std::endl;        // Output: 0 (false)
    std::cout << tree.search("progressive") << std::endl;     // Output: 0 (false)
    std::cout << tree.search("prohibit") << std::endl;        // Output: 0 (false)
    std::cout << tree.search("project") << std::endl;         // Output: 0 (false)
    std::cout << tree.search("projection") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("prolific") << std::endl;        // Output: 0 (false)
    std::cout << tree.search("prolong") << std::endl;         // Output: 0 (false)
    std::cout << tree.search("prominent") << std::endl;       // Output: 0 (false)
    std::cout << tree.search("promise") << std::endl;         // Output: 0 (false)
    std::cout << tree.search("promote") << std::endl;         // Output: 0 (false)
    std::cout << tree.search("promotion") << std::endl;       // Output: 0 (false)
    std::cout << tree.search("prompt") << std::endl;          // Output: 0 (false)
    std::cout << tree.search("pronounce") << std::endl;       // Output: 0 (false)
    std::cout << tree.search("proof") << std::endl;           // Output: 0 (false)
    std::cout << tree.search("propel") << std::endl;          // Output: 0 (false)
    std::cout << tree.search("proper") << std::endl;          // Output: 0 (false)
    std::cout << tree.search("property") << std::endl;        // Output: 0 (false)
    std::cout << tree.search("proportion") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("proposal") << std::endl;        // Output: 0 (false)
    std::cout << tree.search("propose") << std::endl;         // Output: 0 (false)
    std::cout << tree.search("prospect") << std::endl;        // Output: 0 (false)
    std::cout << tree.search("prosper") << std::endl;         // Output: 0 (false)
    std::cout << tree.search("protect") << std::endl;         // Output: 0 (false)
    std::cout << tree.search("protection") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("protest") << std::endl;         // Output: 1 (true)
    std::cout << tree.search("protocol") << std::endl;        // Output: 1 (true)

    cout<<"\n--------\n";

    auto* boleano = tree.get_root();
    cout<<boleano->hash->solo_un_hijo()<<endl;


    boleano = boleano->hash->search(boleano->hash->encontrar_unico_hijo());
    cout<<boleano->hash->solo_un_hijo()<<endl;
    cout<<boleano->cadena<<endl;


}