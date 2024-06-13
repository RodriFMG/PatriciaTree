#include "PatriciaTree.h"


/* Falta de revisar el tema de los enlaces y maybe un caso posible más (Funciona para
 * todos los casos excepto uno extremadamente raro ;-;). Apartir de este código
 * lo único que faltaría sería mejorarlo, ponerlo ordenado y quitarle complejidad si se puede.
 * Tambien falta mejorar el tema de las eliminaciones y enlaces. (eso nomas es fijarme en el código
 * y ver los lugares en los cuales me olvido poner nullptr). El search e insert funcionan al 100% (creo xd)
 * solo falta ver más que todo el remove. */
int main() {
    PatriciaTree tree;

    // Inserts
    tree.insert("zygomatic");
    tree.insert("zygomaticus");
    tree.insert("zygomorphic");
    tree.insert("zygomorphous");
    tree.insert("zygote");
    tree.insert("zygotes");
    tree.insert("zygotic");
    tree.insert("zygotically");
    tree.insert("zygous");
    tree.insert("zymase");
    tree.insert("zymases");
    tree.insert("zyme");
    tree.insert("zymes");
    tree.insert("zymogen");
    tree.insert("zymogenic");
    tree.insert("zymogens");
    tree.insert("zymogram");
    tree.insert("zymograms");
    tree.insert("zymologies");
    tree.insert("zymology");

    // Removes
    tree.remove("zygomatic");
    tree.remove("zymases");
    tree.remove("zyme");
    tree.remove("zymes");
    tree.remove("zymogen");
    tree.remove("zymogenic");
    tree.remove("zymogens");
    tree.remove("zymogram");
    tree.remove("zymograms");
    tree.remove("zymologies");
    tree.remove("zygomaticus");
    tree.remove("zygomorphic");
    tree.remove("zygomorphous");
    tree.remove("zygote");
    tree.remove("zygotes");
    tree.remove("zygotes");tree.remove("zygotes");tree.remove("zygotes");tree.remove("zygotes");
    tree.remove("zygotic");
    tree.remove("zygotically");
    tree.remove("zygous");
    tree.remove("zymase");


    // Searches
    std::cout << "Search results:\n";
    std::cout << "zygomatic: " << (tree.search("zygomatic") ? "Found" : "Not found") << std::endl;
    std::cout << "zygomaticus: " << (tree.search("zygomaticus") ? "Found" : "Not found") << std::endl;
    std::cout << "zygomorphic: " << (tree.search("zygomorphic") ? "Found" : "Not found") << std::endl;
    std::cout << "zygomorphous: " << (tree.search("zygomorphous") ? "Found" : "Not found") << std::endl;
    std::cout << "zygote: " << (tree.search("zygote") ? "Found" : "Not found") << std::endl;
    std::cout << "zygotes: " << (tree.search("zygotes") ? "Found" : "Not found") << std::endl;
    std::cout << "zygotic: " << (tree.search("zygotic") ? "Found" : "Not found") << std::endl;
    std::cout << "zygotically: " << (tree.search("zygotically") ? "Found" : "Not found") << std::endl;
    std::cout << "zygous: " << (tree.search("zygous") ? "Found" : "Not found") << std::endl;
    std::cout << "zymase: " << (tree.search("zymase") ? "Found" : "Not found") << std::endl;
    std::cout << "zymases: " << (tree.search("zymases") ? "Found" : "Not found") << std::endl;
    std::cout << "zyme: " << (tree.search("zyme") ? "Found" : "Not found") << std::endl;
    std::cout << "zymes: " << (tree.search("zymes") ? "Found" : "Not found") << std::endl;
    std::cout << "zymogen: " << (tree.search("zymogen") ? "Found" : "Not found") << std::endl;
    std::cout << "zymogenic: " << (tree.search("zymogenic") ? "Found" : "Not found") << std::endl;
    std::cout << "zymogens: " << (tree.search("zymogens") ? "Found" : "Not found") << std::endl;
    std::cout << "zymogram: " << (tree.search("zymogram") ? "Found" : "Not found") << std::endl;
    std::cout << "zymograms: " << (tree.search("zymograms") ? "Found" : "Not found") << std::endl;
    std::cout << "zymologies: " << (tree.search("zymologies") ? "Found" : "Not found") << std::endl;
    std::cout << "zymology: " << (tree.search("zymology") ? "Found" : "Not found") << std::endl;


    tree.insert("zygomatic");
    tree.insert("zygomaticus");
    tree.insert("zygomorphic");
    tree.insert("zygomorphous");
    tree.insert("zygote");
    tree.insert("zygotes");
    tree.insert("zygotic");
    tree.insert("zygotically");
    tree.insert("zygous");
    tree.insert("zymase");
    tree.insert("zymases");
    tree.insert("zyme");

    std::cout << "Search results:\n";
    std::cout << "zygomatic: " << (tree.search("zygomatic") ? "Found" : "Not found") << std::endl;
    std::cout << "zygomaticus: " << (tree.search("zygomaticus") ? "Found" : "Not found") << std::endl;
    std::cout << "zygomorphic: " << (tree.search("zygomorphic") ? "Found" : "Not found") << std::endl;
    std::cout << "zygomorphous: " << (tree.search("zygomorphous") ? "Found" : "Not found") << std::endl;
    std::cout << "zygote: " << (tree.search("zygote") ? "Found" : "Not found") << std::endl;
    std::cout << "zygotes: " << (tree.search("zygotes") ? "Found" : "Not found") << std::endl;
    std::cout << "zygotic: " << (tree.search("zygotic") ? "Found" : "Not found") << std::endl;
    std::cout << "zygotically: " << (tree.search("zygotically") ? "Found" : "Not found") << std::endl;
    std::cout << "zygous: " << (tree.search("zygous") ? "Found" : "Not found") << std::endl;
    std::cout << "zymase: " << (tree.search("zymase") ? "Found" : "Not found") << std::endl;
    std::cout << "zymases: " << (tree.search("zymases") ? "Found" : "Not found") << std::endl;
    std::cout << "zyme: " << (tree.search("zyme") ? "Found" : "Not found") << std::endl;

    // Removes
    tree.remove("zygomatic");
    tree.remove("zygomaticus");
    tree.remove("zygomorphic");
    tree.remove("zygomorphous");
    tree.remove("zygotes");
    tree.remove("zygotic");
    tree.remove("zygotically");
    tree.remove("zygous");
    tree.remove("zymase");
    tree.remove("zymases");
    tree.remove("zyme");

    std::cout << "zygomatic: " << (tree.search("zygomatic") ? "Found" : "Not found") << std::endl;
    std::cout << "zygomaticus: " << (tree.search("zygomaticus") ? "Found" : "Not found") << std::endl;
    std::cout << "zygomorphic: " << (tree.search("zygomorphic") ? "Found" : "Not found") << std::endl;
    std::cout << "zygomorphous: " << (tree.search("zygomorphous") ? "Found" : "Not found") << std::endl;
    std::cout << "zygote: " << (tree.search("zygote") ? "Found" : "Not found") << std::endl;
    std::cout << "zygotes: " << (tree.search("zygotes") ? "Found" : "Not found") << std::endl;
    std::cout << "zygotic: " << (tree.search("zygotic") ? "Found" : "Not found") << std::endl;
    std::cout << "zygotically: " << (tree.search("zygotically") ? "Found" : "Not found") << std::endl;
    std::cout << "zygous: " << (tree.search("zygous") ? "Found" : "Not found") << std::endl;
    std::cout << "zymase: " << (tree.search("zymase") ? "Found" : "Not found") << std::endl;
    std::cout << "zymases: " << (tree.search("zymases") ? "Found" : "Not found") << std::endl;
    std::cout << "zyme: " << (tree.search("zyme") ? "Found" : "Not found") << std::endl;


    return 0;
}
