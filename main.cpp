#include "PatriciaTree.h"
#include "chrono"
#include "random"
#include <unordered_set>

void ejemplo1_100_words(){
    PatriciaTree trie;

    std::vector<std::string> words = {
            "combination", "combine", "comparable", "compare", "compass", "compatible", "compel", "compensate", "competence", "competent", "competition", "competitive", "competitor", "complain", "complete", "completion", "complex", "complexity", "compliance", "complicate", "complication", "complicity", "compliment", "component", "compose", "composition", "compound", "comprehensive", "compress", "compression", "comprise", "compromise", "compute", "computer", "comrade", "comprehensive", "comprehend", "compressor", "compulsion", "compulsive", "compunction", "comptroller", "comeback", "comedian", "comedy", "comet", "comfort", "comfortable", "comic", "command", "commander", "commence", "commencement", "commend", "comment", "commerce", "commercial", "commission", "commit", "commitment", "committee", "commodity", "common", "communal", "communicate", "communication", "communion", "communist", "community", "commute", "compact", "companion", "company", "comparison", "compartment", "compatible", "compel", "compensate", "competence", "competent", "competition", "competitive", "competitor", "complain", "complaint", "complete", "completion", "complex", "complexity", "comply", "component", "compose", "composition", "compound", "compress", "compression", "compromise", "compute", "computer", "comrade"
    };

    std::unordered_set<std::string> unique_words_set(words.begin(), words.end());
    std::vector<std::string> unique_words(unique_words_set.begin(), unique_words_set.end());

    for(const auto& word : unique_words){
        trie.insert(word);
    }

    // Mezclar el vector de palabras para remover en orden aleatorio
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(unique_words.begin(), unique_words.end(), g);

    // Eliminar todas menos una
    for(size_t i = 0; i < unique_words.size() - 20; ++i) {
        trie.remove(unique_words[i]);
    }


    // Realizar búsquedas para todas las palabras
    for(const auto& word : unique_words) {
        std::cout << word << ": " << (trie.search(word) ? "true" : "false") << std::endl;
    }

    cout<<"\n--------\n";

    trie.print_by_lvl();

}

void ejemplo2_100_words(){

    PatriciaTree tree;

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

    std::vector<std::string> words = {
            "submarine", "submerge", "substantial", "substitute", "subdivide", "subdue", "subject", "subjugate", "sublime", "submarine", "submit", "subordinate", "subscribe", "subsequent", "subservient", "subside", "subsidiary", "subsidize", "subsist", "subsoil", "subsonic", "substance", "substantial", "substantiate", "substation", "substitute", "substitution", "subtitle", "subtle", "subtly", "subtotal", "subtract", "subtraction", "subtropical", "suburb", "suburban", "suburbia", "subvention", "subversion", "subversive", "subvert", "subway", "subzero", "subterfuge", "subterranean", "subtext", "subtend", "subgenre", "subclavian", "subconscious", "subcritical", "subculture", "subcutaneously", "subfamily", "subhuman", "subjection", "subjoin", "subjugation", "sublease", "subliterate", "subluxation", "subnormal", "suborder", "subpopulation", "subprogram", "subregion", "subroutine", "subsample", "subscale", "subsection", "subsegment", "subsentence", "subsequences", "subservience", "subshell", "subsidization", "substandard", "subsumption", "subtenant", "subterminal", "subthalamic", "subtheme", "subthreshold", "subtitle", "suburbia", "subvariety", "subvocalization", "subwoofer", "subzone", "subaqueous", "sUbAraChNoi", "subatomic", "subbranch", "subbasement", "subcommittee", "subcontract", "subdivide", "subduable", "subfield", "subfix", "subgraph"
    };

    std::unordered_set<std::string> unique_words_set(words.begin(), words.end());
    std::vector<std::string> unique_words(unique_words_set.begin(), unique_words_set.end());

    // Mezclar el vector de palabras para remover en orden aleatorio
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(unique_words.begin(), unique_words.end(), g);

    // Eliminar todas menos una
    for(size_t i = 0; i < unique_words.size() - 1; ++i) {
        tree.remove(unique_words[i]);
    }


    // Realizar búsquedas para todas las palabras
    for(const auto& word : unique_words) {
        std::cout << word << ": " << (tree.search(word) ? "true" : "false") << std::endl;
    }

    cout<<"\n--------\n";

    tree.print_by_lvl();
}

void Print_Patricia_Tree(){



    PatriciaTree tree;

    std::vector<std::string> words = {
            "apple", "application", "applied", "apply", "apt", "ant", "antenna", "angel", "anger", "angle",
            "banana", "band", "bandage", "bank", "bark", "barrel", "base", "basket", "bat", "batch"
    };

    std::random_device rd;
    std::default_random_engine rng(rd());
    std::shuffle(words.begin(), words.end(), rng);

    for (const auto& word : words) {
        tree.insert(word);
    }

    cout<<"\n--------\n";

    tree.print_by_lvl();

}

void ejemplo3_50_words(){
    PatriciaTree trie;

    // Insertar palabras
    trie.insert("combustion");
    trie.insert("combustible");
    trie.insert("comburent");
    trie.insert("combinate");
    trie.insert("combinator");
    trie.insert("combative");
    trie.insert("combatant");
    trie.insert("combusting");
    trie.insert("combination");
    trie.insert("combated");
    trie.insert("combiner");
    trie.insert("combings");
    trie.insert("combers");
    trie.insert("combfish");
    trie.insert("combating");
    trie.insert("combattery");
    trie.insert("combusted");
    trie.insert("combattive");
    trie.insert("combless");
    trie.insert("combry");
    trie.insert("combinational");
    trie.insert("combatedly");
    trie.insert("combater");
    trie.insert("combatedness");
    trie.insert("combatingly");
    trie.insert("combing");
    trie.insert("comblike");
    trie.insert("combolden");
    trie.insert("combatted");
    trie.insert("combbed");
    trie.insert("comband");
    trie.insert("combow");
    trie.insert("combearing");
    trie.insert("combplay");
    trie.insert("combvent");
    trie.insert("combgate");
    trie.insert("combgrove");
    trie.insert("combmantle");
    trie.insert("combtrap");
    trie.insert("combreform");
    trie.insert("combgrass");
    trie.insert("combguard");
    trie.insert("combhunt");
    trie.insert("combnet");
    trie.insert("combroot");
    trie.insert("combsand");
    trie.insert("combtoy");
    trie.insert("combvow");
    trie.insert("combwind");

    // Eliminar palabras en orden aleatorio
    std::vector<std::string> words = {
            "combustion", "combustible", "comburent", "combinate", "combinator",
            "combative", "combatant", "combusting", "combination", "combated",
            "combiner", "combings", "combers", "combfish", "combating", "combattery",
            "combusted", "combattive", "combless", "combry", "combinational",
            "combatedly", "combater", "combatedness", "combatingly", "combing",
            "comblike", "combolden", "combatted", "combbed", "comband", "combow",
            "combearing", "combplay", "combvent", "combgate", "combgrove", "combmantle",
            "combtrap", "combreform", "combgrass", "combguard", "combhunt", "combnet",
            "combroot", "combsand", "combtoy", "combvow", "combwind"
    };

    // Mezclar el vector de palabras para remover en orden aleatorio
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(words.begin(), words.end(), g);

    // Eliminar todas menos una
    for(size_t i = 0; i < words.size() - 1; ++i) {
        trie.remove(words[i]);
    }


    // Realizar búsquedas para todas las palabras
    for(const auto& word : words) {
        std::cout << word << ": " << (trie.search(word) ? "true" : "false") << std::endl;
    }

    cout<<"\n--------\n";

    trie.print_by_lvl();

}

void ejemplo_4_100_words(){
    PatriciaTree trie;
    std::vector<std::string> words = {
            "apple", "apricot", "banana", "bandana", "cherry", "chocolate", "date", "dandelion", "elderberry", "elephant",
            "fig", "filament", "grape", "grapefruit", "honeydew", "honey", "kiwi", "kite", "lemon", "leopard",
            "mango", "mangrove", "nectarine", "nectar", "orange", "orangutan", "papaya", "paper", "quince", "quilt",
            "raspberry", "rasp", "strawberry", "straw", "tangerine", "tango", "ugli", "umbrella", "vanilla", "van",
            "watermelon", "water", "xigua", "xylophone", "yellowfruit", "yellow", "zucchini", "zebra", "aardvark", "avocado",
            "blueberry", "blackberry", "coconut", "cranberry", "dragonfruit", "durian", "eggplant", "elderflower", "figs",
            "grapes", "greenapple", "huckleberry", "jackfruit", "kiwifruit", "lemonade", "lime", "mandarin", "mulberry",
            "olive", "oranges", "passionfruit", "peach", "pear", "persimmon", "pineapple", "plum", "pomegranate",
            "raspberries", "redcurrant", "starfruit", "sugarapple", "tomato", "watercress", "yams", "yambean", "yucca",
            "ziziphus", "zapote", "zinfandel", "cherries", "soursop", "salmonberry", "longan", "loquat"
    };

    std::unordered_set<std::string> unique_words_set(words.begin(), words.end());
    std::vector<std::string> unique_words(unique_words_set.begin(), unique_words_set.end());

    // Insert all unique words into the trie
    for (const auto &word : unique_words) {
        trie.insert(word);
    }


    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(unique_words.begin(), unique_words.end(), g);

    // Remove 99 words randomly
    for (size_t i = 0; i < unique_words.size() - 1; ++i) {
        trie.remove(unique_words[i]);
    }

    // Search for each word to confirm insertion and removal
    for (const auto &word : unique_words) {
        std::cout << "Word: " << word << " (search: " << (trie.search(word) ? "true" : "false") << ")\n";
    }

    cout<<"\n--------\n";

    trie.print_by_lvl();

}

int main() {


    auto start = std::chrono::high_resolution_clock::now();

    ejemplo1_100_words();


    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> duration = end - start;

    std::cout << "Tiempo de ejecución: " << duration.count() << " segundos" << std::endl;



}