#include <iostream>
#include <set>
#include <string>

using namespace std;

// Helper function for clean printing
void print_set(const string& label, const set<int>& s) {
    cout << label << ": ";
    // Range-based for loop is the standard way to iterate over sets
    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;
}

// ==========================================
// 1. BASICS: SORTING & UNIQUE ELEMENTS
// ==========================================
void demo_set_basics() {
    cout << "\n--- Basics: Sorting & Uniqueness ---" << endl;
    
    // std::set is implemented as a Red-Black Tree.
    // Time complexity for Access/Insert/Delete: O(\log N)
    set<int> s1 = {1, 4, 2, 6, 3};
    
    // Notice the output is automatically sorted in ascending order!
    print_set("Initial set", s1);

    // std::set only stores UNIQUE elements. Duplicates are silently ignored.
    s1.insert(4); 
    s1.insert(4);
    print_set("After trying to insert duplicate '4'", s1);
}

// ==========================================
// 2. INSERTION & THE RETURN VALUE TRAP
// ==========================================
void demo_insertion() {
    cout << "\n--- Insertion & Checking Success ---" << endl;
    set<int> s1 = {10, 20, 30};

    // INTERVIEW TRAP: insert() returns a std::pair<iterator, bool>.
    // The boolean tells you if the element was actually inserted (true) 
    // or if it already existed (false).
    
    // Using C++17 Structured Bindings to cleanly capture the result:
    auto [it, success] = s1.insert(20); 
    
    if (!success) {
        cout << "Failed to insert 20: Element already exists." << endl;
    } else {
        cout << "Successfully inserted!" << endl;
    }
}

// ==========================================
// 3. SEARCHING & ERASING
// ==========================================
void demo_search_and_erase() {
    cout << "\n--- Searching & Erasing ---" << endl;
    set<int> s1 = {8, 45, 67, 100};

    // 1. C++20 contains() - The modern, cleanest way to check for existence
    if (s1.contains(45)) {
        cout << "45 is in the set." << endl;
    }

    // 2. count() - In a std::set, count() can only ever return 1 or 0
    cout << "Count of 99: " << s1.count(99) << endl;

    // 3. Erasing by value
    // erase() returns the number of elements removed (again, 1 or 0)
    size_t erased_count = s1.erase(67);
    cout << "Successfully erased " << erased_count << " element(s)." << endl;
    print_set("After erase", s1);
}

// ==========================================
// MAIN FUNCTION
// ==========================================
int main() {
    cout << "=== C++ std::set Revision ===" << endl;
    
    demo_set_basics();
    demo_insertion();
    demo_search_and_erase();

    return 0;
}