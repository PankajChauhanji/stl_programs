#include <iostream>
#include <array>
#include <algorithm>
#include <numeric> // Required for std::accumulate
#include <string>

using namespace std;

// Helper template function to print arrays of any size
template<size_t N>
void print_array(const string& label, const array<int, N>& arr) {
    cout << label << ": ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

// ==========================================
// 1. PROPERTIES & ELEMENT ACCESS
// ==========================================
void demo_access_and_properties() {
    cout << "\n--- Properties & Access ---" << endl;
    
    // std::array size must be known at compile time
    array<int, 5> ar = {1, 2, 3, 4, 5};
    print_array("Initial array", ar);

    // Capacity checks
    cout << "Size(): " << ar.size() << endl;
    cout << "Is empty(): " << (ar.empty() ? "true" : "false") << endl;

    // Access methods
    cout << "front(): " << ar.front() << endl;
    cout << "back(): " << ar.back() << endl;
    
    // Interview Tip: .at() performs bounds checking and throws std::out_of_range.
    // The [] operator does NOT perform bounds checking (faster, but less safe).
    cout << "at(1): " << ar.at(1) << endl; 
}

// ==========================================
// 2. MODIFICATIONS
// ==========================================
void demo_modifications() {
    cout << "\n--- Modifications ---" << endl;
    
    array<int, 5> ar1; // Uninitialized array, contains garbage values
    
    // fill: Replaces all elements with the specified value
    ar1.fill(12);
    print_array("After fill(12)", ar1);
}

// ==========================================
// 3. STL ALGORITHMS ON STD::ARRAY
// ==========================================
void demo_algorithms() {
    cout << "\n--- STL Algorithms ---" << endl;
    
    array<int, 5> ar = {15, 2, 37, 4, 5};
    print_array("Target array", ar);

    // min_element / max_element return iterators, so we must dereference (*) them
    cout << "min_element(): " << *min_element(ar.begin(), ar.end()) << endl;
    cout << "max_element(): " << *max_element(ar.begin(), ar.end()) << endl;

    // accumulate: Third parameter (0) is the initial sum. 
    // It also dictates the return type (e.g., use 0.0 for double)
    int sum = accumulate(ar.begin(), ar.end(), 0);
    cout << "accumulate() sum: " << sum << endl;
}

// ==========================================
// MAIN FUNCTION
// ==========================================
int main() {
    cout << "=== C++ std::array Revision ===" << endl;
    
    demo_access_and_properties();
    demo_modifications();
    demo_algorithms();

    return 0;
}