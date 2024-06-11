#include "PatriciaTree.h"



int main() {

    PatriciaTree tree;
    tree.insert("apple");
    tree.insert("app");
    tree.insert("apricot");




    cout << tree.search("apple") << endl;   // Output: 1 (true)
    cout << tree.search("app") << endl;     // Output: 1 (true)
    cout << tree.search("apricot") << endl; // Output: 1 (true)
    cout << tree.search("aple") << endl;      // Output: 0 (false)
}
