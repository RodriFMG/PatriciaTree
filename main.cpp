#include "PatriciaTree.h"



int main() {

    auto* patriciaTree = new PatriciaTree();

    patriciaTree->insert("test");
    patriciaTree->insert("toaster");
    patriciaTree->insert("toasted");
    patriciaTree->insert("tasting");
    patriciaTree->insert("slow");
    patriciaTree->insert("slowly");
    patriciaTree->insert("testimony");
    patriciaTree->insert("testament");
    patriciaTree->insert("slowest");


    cout<<boolalpha<<patriciaTree->search("testament");
}
