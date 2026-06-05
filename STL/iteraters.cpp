#include <iostream>
#include <vector>
#include <list>
#include <iterator> // Required for std::next, std::prev, std::back_inserter
#include <algorithm>

using namespace std;

// ==========================================
// 1. BASIC ITERATION & CONST CORRECTNESS
// ==========================================
void demo_basics() {
    cout << "\n--- Basic Iteration & Const Correctness ---" << endl;
    vector<int> vec = {10, 20, 30, 40, 50};

    // 1. Standard Iterator (Read/Write)
    cout << "Standard: ";
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        *it += 1; // We can modify the element
        cout << *it << " ";
    }
    cout << endl;

    // 2. Const Iterator (Read-Only) - ALWAYS prefer this if not modifying
    // Interview Tip: Use cbegin() and cend() to force a const_iterator
    cout << "Const: ";
    for (auto it = vec.cbegin(); it != vec.cend(); ++it) {
        // *it += 1; // ERROR: Cannot modify through const_iterator
        cout << *it << " ";
    }
    cout << endl;

    // 3. Reverse Iterator
    cout << "Reverse: ";
    for (auto it = vec.rbegin(); it != vec.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

// ==========================================
// 2. ITERATOR MOVEMENT (MODERN C++)
// ==========================================
void demo_movement() {
    cout << "\n--- Iterator Movement (std::next, std::prev) ---" << endl;
    list<int> myList = {1, 2, 3, 4, 5}; // Bidirectional, NOT Random Access

    auto it = myList.begin();
    
    // std::advance modifies the iterator in place
    advance(it, 2); 
    cout << "After advance(2): " << *it << endl; // Points to 3

    // std::next and std::prev return a NEW iterator, leaving original unchanged
    auto next_it = next(it, 1);
    auto prev_it = prev(it, 1);
    
    cout << "Current: " << *it << " | Next: " << *next_it << " | Prev: " << *prev_it << endl;
}

// ==========================================
// 3. ITERATOR ADAPTERS (INSERTERS)
// ==========================================
void demo_adapters() {
    cout << "\n--- Iterator Adapters ---" << endl;
    vector<int> src = {1, 2, 3};
    vector<int> dest;

    // Interview Tip: std::copy requires the destination to have enough space.
    // Using std::back_inserter safely calls push_back() under the hood.
    copy(src.begin(), src.end(), back_inserter(dest));
    
    cout << "Destination size after back_inserter: " << dest.size() << endl;
}

// ==========================================
// MAIN FUNCTION
// ==========================================
int main() {
    cout << "=== C++ Iterators Revision ===" << endl;
    demo_basics();
    demo_movement();
    demo_adapters();
    return 0;
}