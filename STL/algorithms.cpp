#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

// ==========================================
// 1. ITERATION & LAMBDAS
// ==========================================
void demo_iteration() {
    cout << "\n--- Iteration (for_each) ---" << endl;
    vector<int> nums = {1, 2, 3, 4, 5};

    // Using a lambda function directly inside for_each
    // []  : Capture clause (empty means no external variables captured)
    // (int x) : Parameter
    cout << "Squares: ";
    for_each(nums.begin(), nums.end(), [](int x) { 
        cout << x * x << " "; 
    });
    cout << endl;
}

// ==========================================
// 2. SEARCHING & COUNTING
// ==========================================
void demo_searching_counting() {
    cout << "\n--- Searching & Counting ---" << endl;
    vector<int> t = {1, 2, 3, 4, 5, 6, 1, 5, 2, 3, 1};

    // find: Returns an iterator to the first matching element
    auto it = find(t.begin(), t.end(), 3);
    if (it != t.end()) {
        // Use std::distance to find the actual index, not the memory address (&it)
        cout << "Element 3 found at index: " << distance(t.begin(), it) << endl;
    }

    // count: Exact match counting
    cout << "Number 1 occurs " << count(t.begin(), t.end(), 1) << " times." << endl;

    // count_if: Counting based on a condition (Predicate)
    int evens = count_if(t.begin(), t.end(), [](int x) { return x % 2 == 0; });
    int greater_than_5 = count_if(t.begin(), t.end(), [](int x) { return x > 5; });
    
    cout << "Even numbers found: " << evens << endl;
    cout << "Numbers > 5 found: " << greater_than_5 << endl;
}

// ==========================================
// 3. MODIFYING ALGORITHMS
// ==========================================
void demo_modifying() {
    cout << "\n--- Modifying (replace, transform) ---" << endl;
    vector<int> na = {1, 2, 7, 8, 1, 5, 6};

    // replace: Modifies the container in-place
    replace(na.begin(), na.end(), 1, 100);
    cout << "After replacing 1 with 100: ";
    for (int x : na) cout << x << " "; // Range-based for loop is cleaner than for_each here
    cout << endl;

    // transform: Applies an operation to all elements and stores the result
    string s1 = "hello my name is pankaj";
    
    // ::toupper requires the global scope resolution operator
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    cout << "Transformed string: " << s1 << endl;
}

// ==========================================
// 4. CONDITION CHECKS
// ==========================================
void demo_condition_checks() {
    cout << "\n--- Condition Checks (all_of, any_of, none_of) ---" << endl;
    vector<int> na = {10, 20, 30, 40, 50};

    // all_of: Returns true if ALL elements satisfy the condition
    if (all_of(na.begin(), na.end(), [](int x) { return x < 200; })) {
        cout << "Result: All elements are < 200" << endl;
    }

    // any_of: Returns true if AT LEAST ONE element satisfies the condition
    if (any_of(na.begin(), na.end(), [](int x) { return x < 15; })) {
        cout << "Result: At least one element is < 15" << endl;
    }
}

// ==========================================
// MAIN FUNCTION
// ==========================================
int main() {
    cout << "=== C++ STL Algorithms Revision ===" << endl;
    
    demo_iteration();
    demo_searching_counting();
    demo_modifying();
    demo_condition_checks();

    return 0;
}