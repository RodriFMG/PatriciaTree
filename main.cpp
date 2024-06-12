#include "PatriciaTree.h"



int main() {
    PatriciaTree tree;

    tree.insert("star");
    tree.insert("start");
    tree.insert("stark");
    tree.insert("starry");
    tree.insert("stardust");
    tree.insert("starlet");
    tree.insert("stardom");
    tree.insert("starfish");
    tree.insert("starlight");
    tree.insert("starvation");
    tree.insert("starboard");
    tree.insert("starchy");
    tree.insert("starving");
    tree.insert("stargazer");
    tree.insert("stargazing");
    tree.insert("starship");
    tree.insert("starstruck");
    tree.insert("stardrive");
    tree.insert("starburst");
    tree.insert("starving");

// Eliminar 10 palabras
    tree.remove("star");
    tree.remove("stark");
    tree.remove("stardust");
    tree.remove("starfish");
    tree.remove("starlight");
    tree.remove("starvation");
    tree.remove("starchy");
    tree.remove("stargazer");
    tree.remove("starburst");
    tree.remove("starving");

// Realizar búsquedas de todas las palabras insertadas
    cout << "star: " << tree.search("star") << endl; // Output: 0
    cout << "start: " << tree.search("start") << endl; // Output: 1
    cout << "stark: " << tree.search("stark") << endl; // Output: 0
    cout << "starry: " << tree.search("starry") << endl; // Output: 1
    cout << "stardust: " << tree.search("stardust") << endl; // Output: 0
    cout << "starlet: " << tree.search("starlet") << endl; // Output: 1
    cout << "stardom: " << tree.search("stardom") << endl; // Output: 1
    cout << "starfish: " << tree.search("starfish") << endl; // Output: 0
    cout << "starlight: " << tree.search("starlight") << endl; // Output: 0
    cout << "starvation: " << tree.search("starvation") << endl; // Output: 0
    cout << "starboard: " << tree.search("starboard") << endl; // Output: 1
    cout << "starchy: " << tree.search("starchy") << endl; // Output: 0
    cout << "starving: " << tree.search("starving") << endl; // Output: 0
    cout << "stargazer: " << tree.search("stargazer") << endl; // Output: 0
    cout << "stargazing: " << tree.search("stargazing") << endl; // Output: 0
    cout << "starship: " << tree.search("starship") << endl; // Output: 1
    cout << "starstruck: " << tree.search("starstruck") << endl; // Output: 1
    cout << "stardrive: " << tree.search("stardrive") << endl; // Output: 1
    cout << "starburst: " << tree.search("starburst") << endl; // Output: 0
    cout << "starving: " << tree.search("starving") << endl; // Output: 0



}
