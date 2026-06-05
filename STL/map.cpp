#include <iostream>
#include <map>
#include <string>

using namespace std;

// ==========================================
// 1. BASICS & THE [] OPERATOR TRAP
// ==========================================
void demo_map_basics() {
    cout << "\n--- Basics & Access ---" << endl;
    
    // std::map is implemented as a Red-Black Tree.
    // Keys are ALWAYS sorted automatically. Time complexity: O(log N)
    map<string, int> m1 = {{"a", 1}, {"b", 4}};

    // 1. Safe access using .at()
    // Throws std::out_of_range if key doesn't exist. Always prefer this for read-only access.
    cout << "Value of 'b': " << m1.at("b") << endl;

    // 2. The Array Index Operator [] (INTERVIEW TRAP!)
    // If the key exists, it returns the value.
    // If the key DOES NOT exist, it INSERTS it with a default value (0 for int)!
    cout << "Value of 'a': " << m1["a"] << endl;
    
    // This silently inserts "missing_key" into the map with value 0
    int val = m1["missing_key"]; 
    cout << "Accidentally inserted 'missing_key': " << val << endl;
}

// ==========================================
// 2. INSERTION (MODERN C++)
// ==========================================
void demo_map_insertion() {
    cout << "\n--- Modern Insertions ---" << endl;
    map<string, int> m1;

    // Standard insertions (Older C++)
    m1.insert({"nn", 45});
    m1.insert(make_pair("hell", 34)); 

    // C++17: insert_or_assign 
    // Safely updates the value if the key exists, or inserts it if it doesn't.
    m1.insert_or_assign("nn", 100); 

    // C++17: try_emplace
    // Highly optimized. It prevents the unnecessary construction of the value object 
    // if the key already exists in the map.
    m1.try_emplace("new_key", 50);
}

// ==========================================
// 3. SEARCHING & ITERATION
// ==========================================
void demo_map_search_and_iterate() {
    cout << "\n--- Searching & Iteration ---" << endl;
    map<string, int> m1 = {{"zebra", 5}, {"apple", 3}, {"mango", 8}};

    // Searching (C++20 style)
    // .contains() is the cleanest way to check for existence.
    // In older C++, you had to use: if (m1.find("apple") != m1.end())
    if (m1.contains("apple")) {
        cout << "'apple' exists in the map!" << endl;
    }

    // Iteration using C++17 Structured Bindings
    // Notice how the output is automatically sorted alphabetically by key!
    cout << "\nMap contents (Always sorted by key):" << endl;
    for (const auto& [key, value] : m1) {
        cout << "  " << key << " => " << value << endl;
    }
}

// ==========================================
// MAIN FUNCTION
// ==========================================
int main() {
    cout << "=== C++ std::map Revision ===" << endl;
    
    demo_map_basics();
    demo_map_insertion();
    demo_map_search_and_iterate();

    return 0;
}