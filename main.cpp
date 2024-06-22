#include "PatriciaTree.h"
#include "chrono"

void ejemplo_100_words(){
    PatriciaTree tree;

// Inserciones
    tree.insert("submarine");
    tree.insert("submerge");
    tree.insert("substantial");
    tree.insert("substitute");
    tree.insert("subdivide");
    tree.insert("subdue");
    tree.insert("subject");
    tree.insert("subjugate");
    tree.insert("sublime");
    tree.insert("submarine");
    tree.insert("submit");
    tree.insert("subordinate");
    tree.insert("subscribe");
    tree.insert("subsequent");
    tree.insert("subservient");
    tree.insert("subside");
    tree.insert("subsidiary");
    tree.insert("subsidize");
    tree.insert("subsist");
    tree.insert("subsoil");
    tree.insert("subsonic");
    tree.insert("substance");
    tree.insert("substantial");
    tree.insert("substantiate");
    tree.insert("substation");
    tree.insert("substitute");
    tree.insert("substitution");
    tree.insert("subtitle");
    tree.insert("subtle");
    tree.insert("subtly");
    tree.insert("subtotal");
    tree.insert("subtract");
    tree.insert("subtraction");
    tree.insert("subtropical");
    tree.insert("suburb");
    tree.insert("suburban");
    tree.insert("suburbia");
    tree.insert("subvention");
    tree.insert("subversion");
    tree.insert("subversive");
    tree.insert("subvert");
    tree.insert("subway");
    tree.insert("subzero");
    tree.insert("subterfuge");
    tree.insert("subterranean");
    tree.insert("subtext");
    tree.insert("subtend");
    tree.insert("subgenre");
    tree.insert("subclavian");
    tree.insert("subconscious");
    tree.insert("subcritical");
    tree.insert("subculture");
    tree.insert("subcutaneously");
    tree.insert("subfamily");
    tree.insert("subhuman");
    tree.insert("subjection");
    tree.insert("subjoin");
    tree.insert("subjugation");
    tree.insert("sublease");
    tree.insert("subliterate");
    tree.insert("subluxation");
    tree.insert("subnormal");
    tree.insert("suborder");
    tree.insert("subpopulation");
    tree.insert("subprogram");
    tree.insert("subregion");
    tree.insert("subroutine");
    tree.insert("subsample");
    tree.insert("subscale");
    tree.insert("subsection");
    tree.insert("subsegment");
    tree.insert("subsentence");
    tree.insert("subsequences");
    tree.insert("subservience");
    tree.insert("subshell");
    tree.insert("subsidization");
    tree.insert("substandard");
    tree.insert("subsumption");
    tree.insert("subtenant");
    tree.insert("subterminal");
    tree.insert("subthalamic");
    tree.insert("subtheme");
    tree.insert("subthreshold");
    tree.insert("subtitle");
    tree.insert("suburbia");
    tree.insert("subvariety");
    tree.insert("subvocalization");
    tree.insert("subwoofer");
    tree.insert("subzone");
    tree.insert("subaqueous");
    tree.insert("sUbAraChNoi");
    tree.insert("subatomic");
    tree.insert("subbranch");
    tree.insert("subbasement");
    tree.insert("subcommittee");
    tree.insert("subcontract");
    tree.insert("subdivide");
    tree.insert("subduable");
    tree.insert("subfield");
    tree.insert("subfix");
    tree.insert("subgraph");

// Eliminaciones

    tree.remove("substantial");
    tree.remove("substitute");
    tree.remove("subdivide");
    tree.remove("subdue");
    tree.remove("subject");
    tree.remove("subside");
    tree.remove("subsidiary");
    tree.remove("subsidize");
    tree.remove("subsist");
    tree.remove("subsoil");
    tree.remove("subsonic");
    tree.remove("substance");
    tree.remove("substantial");
    tree.remove("substantiate");
    tree.remove("subbasement");
    tree.remove("subcommittee");
    tree.remove("subversive");
    tree.remove("subvert");
    tree.remove("subway");
    tree.remove("substation");
    tree.remove("subtotal");
    tree.remove("subtract");
    tree.remove("subtraction");
    tree.remove("subjugate");
    tree.remove("sublime");
    tree.remove("submarine");
    tree.remove("submerge");
    tree.remove("submit");
    tree.remove("subzero");
    tree.remove("subterfuge");
    tree.remove("subterranean");
    tree.remove("subordinate");
    tree.remove("subscribe");
    tree.remove("subsequent");
    tree.remove("subtropical");
    tree.remove("suburb");
    tree.remove("suburban");
    tree.remove("suburbia");
    tree.remove("subvention");
    tree.remove("subversion");
    tree.remove("subjoin");
    tree.remove("substitute");
    tree.remove("subroutine");
    tree.remove("subsample");
    tree.remove("subscale");
    tree.remove("subsection");
    tree.remove("subsegment");
    tree.remove("substitution");
    tree.remove("subterminal");
    tree.remove("subthalamic");
    tree.remove("subtitle");
    tree.remove("subzone");
    tree.remove("subaqueous");
    tree.remove("subservient");
    tree.remove("subjugation");
    tree.remove("subtheme");
    tree.remove("subthreshold");
    tree.remove("suburbia");
    tree.remove("subarachnoid");
    tree.remove("subatomic");
    tree.remove("subbranch");
    tree.remove("subtle");
    tree.remove("subtly");
    tree.remove("subvariety");
    tree.remove("subvocalization");
    tree.remove("subsumption");
    tree.remove("subtenant");
    tree.remove("subwoofer");
    tree.remove("subtext");
    tree.remove("subtend");
    tree.remove("subgenre");
    tree.remove("subclavian");
    tree.remove("subconscious");
    tree.remove("subcritical");
    tree.remove("subculture");
    tree.remove("subcutaneously");
    tree.remove("subfamily");
    tree.remove("subhuman");
    tree.remove("subjection");
    tree.remove("subcontract");
    tree.remove("subdivide");
    tree.remove("subduable");
    tree.remove("subfield");
    tree.remove("subfix");
    tree.remove("sublease");
    tree.remove("subliterate");
    tree.remove("subluxation");
    tree.remove("subnormal");
    tree.remove("suborder");
    tree.remove("subpopulation");
    tree.remove("subprogram");
    tree.remove("subregion");
    tree.remove("subsentence");
    tree.remove("subsequences");
    tree.remove("subservience");
    tree.remove("subshell");
    tree.remove("subsidization");
    tree.remove("substandard");
    tree.remove("subarachnoi");

// Búsquedas
    std::cout << tree.search("submarine") << std::endl;     // Output: 0 (false)
    std::cout << tree.search("submerge") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("substantial") << std::endl;   // Output: 0 (false)
    std::cout << tree.search("substitute") << std::endl;    // Output: 0 (false)
    std::cout << tree.search("subdivide") << std::endl;     // Output: 0 (false)
    std::cout << tree.search("subdue") << std::endl;        // Output: 0 (false)
    std::cout << tree.search("subject") << std::endl;       // Output: 0 (false)
    std::cout << tree.search("subjugate") << std::endl;     // Output: 0 (false)
    std::cout << tree.search("sublime") << std::endl;       // Output: 0 (false)
    std::cout << tree.search("submit") << std::endl;        // Output: 0 (false)
    std::cout << tree.search("subordinate") << std::endl;   // Output: 0 (false)
    std::cout << tree.search("subscribe") << std::endl;     // Output: 0 (false)
    std::cout << tree.search("subsequent") << std::endl;    // Output: 0 (false)
    std::cout << tree.search("subservient") << std::endl;   // Output: 0 (false)
    std::cout << tree.search("subside") << std::endl;       // Output: 0 (false)
    std::cout << tree.search("subsidiary") << std::endl;    // Output: 0 (false)
    std::cout << tree.search("subsidize") << std::endl;     // Output: 0 (false)
    std::cout << tree.search("subsist") << std::endl;       // Output: 0 (false)
    std::cout << tree.search("subsoil") << std::endl;       // Output: 0 (false)
    std::cout << tree.search("subsonic") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("substance") << std::endl;     // Output: 0 (false)
    std::cout << tree.search("substantial") << std::endl;   // Output: 0 (false)
    std::cout << tree.search("substantiate") << std::endl;  // Output: 0 (false)
    std::cout << tree.search("substation") << std::endl;    // Output: 0 (false)
    std::cout << tree.search("substitute") << std::endl;    // Output: 0 (false)
    std::cout << tree.search("substitution") << std::endl;  // Output: 0 (false)
    std::cout << tree.search("subtitle") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("subtle") << std::endl;        // Output: 0 (false)
    std::cout << tree.search("subtly") << std::endl;        // Output: 0 (false)
    std::cout << tree.search("subtotal") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("subtract") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("subtraction") << std::endl;   // Output: 0 (false)
    std::cout << tree.search("subtropical") << std::endl;   // Output: 0 (false)
    std::cout << tree.search("suburb") << std::endl;        // Output: 0 (false)
    std::cout << tree.search("suburban") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("suburbia") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("subvention") << std::endl;    // Output: 0 (false)
    std::cout << tree.search("subversion") << std::endl;    // Output: 0 (false)
    std::cout << tree.search("subversive") << std::endl;    // Output: 0 (false)
    std::cout << tree.search("subvert") << std::endl;       // Output: 0 (false)
    std::cout << tree.search("subway") << std::endl;        // Output: 0 (false)
    std::cout << tree.search("subzero") << std::endl;       // Output: 0 (false)
    std::cout << tree.search("subterfuge") << std::endl;    // Output: 0 (false)
    std::cout << tree.search("subterranean") << std::endl;  // Output: 0 (false)
    std::cout << tree.search("subtext") << std::endl;       // Output: 0 (false)
    std::cout << tree.search("subtend") << std::endl;       // Output: 0 (false)
    std::cout << tree.search("subgenre") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("subclavian") << std::endl;    // Output: 0 (false)
    std::cout << tree.search("subconscious") << std::endl;  // Output: 0 (false)
    std::cout << tree.search("subcritical") << std::endl;   // Output: 0 (false)
    std::cout << tree.search("subculture") << std::endl;    // Output: 0 (false)
    std::cout << tree.search("subcutaneously") << std::endl;// Output: 0 (false)
    std::cout << tree.search("subfamily") << std::endl;     // Output: 0 (false)
    std::cout << tree.search("subhuman") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("subjection") << std::endl;    // Output: 0 (false)
    std::cout << tree.search("subjoin") << std::endl;       // Output: 0 (false)
    std::cout << tree.search("subjugation") << std::endl;   // Output: 0 (false)
    std::cout << tree.search("sublease") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("subliterate") << std::endl;   // Output: 0 (false)
    std::cout << tree.search("subluxation") << std::endl;   // Output: 0 (false)
    std::cout << tree.search("subnormal") << std::endl;     // Output: 0 (false)
    std::cout << tree.search("suborder") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("subpopulation") << std::endl; // Output: 0 (false)
    std::cout << tree.search("subprogram") << std::endl;    // Output: 0 (false)
    std::cout << tree.search("subregion") << std::endl;     // Output: 0 (false)
    std::cout << tree.search("subroutine") << std::endl;    // Output: 0 (false)
    std::cout << tree.search("subsample") << std::endl;     // Output: 0 (false)
    std::cout << tree.search("subscale") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("subsection") << std::endl;    // Output: 0 (false)
    std::cout << tree.search("subsegment") << std::endl;    // Output: 0 (false)
    std::cout << tree.search("subsentence") << std::endl;   // Output: 0 (false)
    std::cout << tree.search("subsentence") << std::endl;   // Output: 0 (false)
    std::cout << tree.search("subsequences") << std::endl;  // Output: 0 (false)
    std::cout << tree.search("subservience") << std::endl;  // Output: 0 (false)
    std::cout << tree.search("subshell") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("subsidization") << std::endl; // Output: 0 (false)
    std::cout << tree.search("subarachnoi") << std::endl; // Output: 0 (false)
    std::cout << tree.search("substandard") << std::endl;   // Output: 0 (false)
    std::cout << tree.search("subsumption") << std::endl;   // Output: 0 (false)
    std::cout << tree.search("subtenant") << std::endl;     // Output: 0 (false)
    std::cout << tree.search("subterminal") << std::endl;   // Output: 0 (false)
    std::cout << tree.search("subthalamic") << std::endl;   // Output: 0 (false)
    std::cout << tree.search("subtheme") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("subthreshold") << std::endl;  // Output: 0 (false)
    std::cout << tree.search("suburbia") << std::endl;      // Output: 0 (false)
    std::cout << tree.search("subvariety") << std::endl;    // Output: 0 (false)
    std::cout << tree.search("subvocalization") << std::endl;// Output: 0 (false)
    std::cout << tree.search("subwoofer") << std::endl;     // Output: 0 (false)
    std::cout << tree.search("subzone") << std::endl;       // Output: 0 (false)

// El último insert no se elimina, por lo tanto, su búsqueda debe devolver true
    std::cout << tree.search("subgraph") << std::endl;      // Output: 1 (true)
}



int main() {

    auto start = std::chrono::high_resolution_clock::now();

    PatriciaTree tree;

    tree.insert("a");
    tree.insert("ab");
    tree.insert("abc");
    tree.insert("abd");

    tree.remove("ab");

    cout<<"\n--------\n";

    auto* booleano = tree.get('a');
    booleano = booleano->hash->search('b');

    cout<<booleano->cadena<<endl;

    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> duration = end - start;

    std::cout << "Tiempo de ejecución: " << duration.count() << " segundos" << std::endl;



}