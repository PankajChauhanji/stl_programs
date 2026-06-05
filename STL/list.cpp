#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

// Helper function to print lists cleanly using const reference to avoid copying
void print_list(const string& label, const list<string>& lst) {
    cout << label << ": ";
    for (const auto& x : lst) {
        cout << x << " ";
    }
    cout << endl;
}

// ==========================================
// 1. BASIC ACCESS & INSERTION (O(1) Time)
// ==========================================
void demo_list_basics() {
    cout << "\n--- Basics (Front/Back Operations) ---" << endl;
    list<string> nam = {"pk", "jkfd", "karl", "shar"};
    print_list("Initial list", nam);

    // Accessing ends
    cout << "Front element: " << nam.front() << endl;
    cout << "Back element: " << nam.back() << endl;

    // Fast O(1) insertions at both ends (Doubly-Linked List advantage)
    nam.push_front("11");
    nam.push_back("23");
    print_list("After push_front and push_back", nam);
    
    // Fast O(1) deletions at both ends
    nam.pop_front();
    nam.pop_back();
    print_list("After pop_front and pop_back", nam);
}

// ==========================================
// 2. SEARCHING, INSERTING & ERASING (O(N) Time)
// ==========================================
void demo_insert_erase() {
    cout << "\n--- Modifying the Middle ---" << endl;
    list<string> nam = {"pk", "jkfd", "karl", "shar"};

    // Find returns an iterator. 
    auto it = find(nam.begin(), nam.end(), "karl");
    
    if (it != nam.end()) {
        cout << "Found: " << *it << endl;
        
        // Insert places the new element BEFORE the iterator
        nam.insert(it, "NEW_GUY");
        print_list("After insertion before 'karl'", nam);
        
        // Erase removes the element at the iterator and returns the next valid iterator
        // Note: 'it' still points to "karl"
        it = nam.erase(it); 
        print_list("After erasing 'karl'", nam);
    }
}

// ==========================================
// 3. LIST-SPECIFIC ALGORITHMS
// ==========================================
void demo_list_algorithms() {
    cout << "\n--- List-Specific Algorithms ---" << endl;
    list<string> nam = {"zebra", "apple", "mango", "apple"};

    // INTERVIEW TRAP: You CANNOT use std::sort(nam.begin(), nam.end())
    // std::list iterators are not Random Access. You MUST use the member function.
    nam.sort();
    print_list("After sort()", nam);

    // reverse() is also built-in and highly efficient for lists by swapping pointers
    nam.reverse();
    print_list("After reverse()", nam);

    // unique() removes consecutive duplicates (always sort first if you want all duplicates gone)
    nam.unique();
    print_list("After unique()", nam);
}

// ==========================================
// MAIN FUNCTION
// ==========================================
int main() {
    cout << "=== C++ std::list Revision ===" << endl;
    
    demo_list_basics();
    demo_insert_erase();
    demo_list_algorithms();

    return 0;
}