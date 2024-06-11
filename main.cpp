#include "PatriciaTree.h"

int main() {
    auto* patriciaTree = new PatriciaTree();

    patriciaTree->insert("abc");
    patriciaTree->insert("cd");
    patriciaTree->insert("d");


    cout<<boolalpha<<patriciaTree->search("d");
}
