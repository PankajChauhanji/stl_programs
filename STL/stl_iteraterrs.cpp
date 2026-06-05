#include <iostream>
#include <vector>
#include <string>
#include <string_view>
#include <deque>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <numeric>

using namespace std;

// ==========================================
// 1. VECTOR (The Default C++ Container)
// ==========================================
void demo_vector() {
    cout << "\n--- std::vector & Memory Management ---" << endl;
    
    // Initialization
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2(10, 2); // Size 10, all elements initialized to 2
    
    // INTERVIEW TIP: reserve() vs resize()
    // resize() changes the actual number of elements (constructs them).
    // reserve() only allocates memory in advance to prevent expensive reallocations.
    vector<int> v3;
    v3.reserve(100); // Highly recommended before a loop of push_backs
    
    v3.push_back(7);
    v3.emplace_back(8); // emplace_back constructs in-place, slightly faster
    
    // 2D Vectors (Matrix)
    cout << "\n2D Vectors:" << endl;
    vector<vector<int>> matrix(3, vector<int>(4, 1)); // 3 rows, 4 cols, initialized to 1
    cout << "Matrix size: " << matrix.size() << "x" << matrix[0].size() << endl;

    // Fast erasure idiom (O(1) time if order doesn't matter)
    // Swap the element to remove with the last element, then pop_back.
    if (!v1.empty()) {
        swap(v1[1], v1.back()); // Want to remove index 1
        v1.pop_back();
    }
}

// ==========================================
// 2. STRINGS & STRING_VIEW (Modern C++)
// ==========================================
void demo_string() {
    cout << "\n--- std::string & std::string_view ---" << endl;
    string s1 = "Pankaj Chauhan";
    
    // Substrings
    string s2 = s1.substr(0, 6); // "Pankaj"
    
    // INTERVIEW TIP: C++17 std::string_view
    // If you only need to READ a substring or pass a string to a function, 
    // use string_view. It is just a pointer and a length (no heap allocation/copying).
    string_view sv(s1.c_str(), 6); 
    cout << "String View: " << sv << " (Zero-copy substring!)" << endl;
}

// ==========================================
// 3. DEQUE (Double-Ended Queue)
// ==========================================
void demo_deque() {
    cout << "\n--- std::deque ---" << endl;
    // std::deque is NOT contiguous memory like a vector. It's a list of fixed-size arrays.
    // It provides O(1) insertions/deletions at BOTH ends.
    deque<int> dq = {2, 3, 4};
    
    dq.push_front(1);
    dq.push_back(5);
    
    cout << "Deque Front: " << dq.front() << " | Back: " << dq.back() << endl;
}

// ==========================================
// 4. PAIRS & TUPLES
// ==========================================
void demo_pairs() {
    cout << "\n--- std::pair & Structured Bindings ---" << endl;
    
    // Older C++ way
    pair<string, string> p1 = make_pair("Pankaj", "Chauhan");
    
    // Modern C++ way (Direct initialization)
    pair<string, string> p2{"Senior", "Engineer"};
    
    // Vector of pairs
    vector<pair<string, string>> personnel = {
        {"Pankaj", "Chauhan"},
        {"Sunil", "Panwar"},
        {"Dolly", "Panwar"}
    };

    // INTERVIEW TIP: Always use const auto& in range-based for loops 
    // to avoid accidentally copying large objects like strings/pairs.
    // Using C++17 Structured Bindings [first, last] for clean access.
    cout << "Personnel List:" << endl;
    for (const auto& [first, last] : personnel) {
        cout << "  " << first << " " << last << endl;
    }
}

// ==========================================
// 5. UNORDERED CONTAINERS (Hash Tables)
// ==========================================
void demo_unordered() {
    cout << "\n--- std::unordered_map & std::unordered_set ---" << endl;
    
    // Unordered variants use Hash Tables instead of Red-Black Trees.
    // Time Complexity: O(1) average, O(N) worst-case (if hash collisions occur).
    unordered_map<string, int> umap = {
        {"Dehradun", 248001},
        {"Delhi", 110001}
    };
    
    // Accessing elements
    umap["Mumbai"] = 400001; 

    // C++20 .contains()
    if (umap.contains("Dehradun")) {
        cout << "Dehradun PIN is: " << umap.at("Dehradun") << endl;
    }

    // unordered_set - Fast O(1) lookups for deduplication
    unordered_set<int> unique_ids = {101, 102, 101, 103}; // Duplicates dropped
    cout << "Unique IDs count: " << unique_ids.size() << endl;
}

// ==========================================
// MAIN FUNCTION
// ==========================================
int main() {
    cout << "=== C++ Core Containers Revision ===" << endl;
    
    demo_vector();
    demo_string();
    demo_deque();
    demo_pairs();
    demo_unordered();

    return 0;
}