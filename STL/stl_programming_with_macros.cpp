#include <iostream>
#include <string>

using namespace std;

// ==========================================
// 1. THE OLD WAY: MACROS (Discouraged)
// ==========================================
// Macros are literal text substitution done before compilation.
// They have no concept of scope, types, or namespaces.
#define PI_MACRO 3.14

// TRAP 1: Missing parentheses around the entire expression
#define SQUARE_MACRO(a) a * a 

// Best practice for macros is to wrap EVERY argument in parentheses...
#define MAX_MACRO(a, b) ((a) > (b) ? (a) : (b))
// ...but even then, they are not completely safe!


// ==========================================
// 2. THE MODERN WAY: CONSTEXPR & TEMPLATES
// ==========================================
// constexpr guarantees compile-time evaluation WITH type safety
constexpr double PI_MODERN = 3.14159;

// Templates provide type flexibility but maintain strict type checking
template <typename T>
inline constexpr T safe_max(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T>
inline constexpr T safe_square(T a) {
    return a * a;
}

// ==========================================
// DEMONSTRATION
// ==========================================
void demo_macro_traps() {
    cout << "\n--- The Dangers of Macros ---" << endl;
    
    // TRAP 1: The Operator Precedence Bug (Your excellent 2020 example)
    // Expands to: 100 / 5 * 5 = 20 * 5 = 100 (Wrong!)
    cout << "SQUARE_MACRO: 100 / square(5) = " << 100 / SQUARE_MACRO(5) << endl;
    
    // TRAP 2: The Double Evaluation Bug
    int x = 5;
    int y = 10;
    // Expands to: ((++x) > (y) ? (++x) : (y))
    // If x was larger, ++x would be executed TWICE!
    int max_val = MAX_MACRO(++x, y); 
    cout << "MAX_MACRO with ++x: x is now " << x << " (Unexpected behavior!)" << endl;
}

void demo_modern_cpp() {
    cout << "\n--- Modern C++ Solutions ---" << endl;
    
    // Safe evaluation, strictly typed, behaves like normal math
    cout << "safe_square: 100 / safe_square(5) = " << 100 / safe_square(5) << " (Correct!)" << endl;

    int a = 10, b = 20;
    string g = "pankaj", h = "PANKAJ";
    
    // Safe template expansion, evaluates arguments exactly once
    cout << "safe_max (int): " << safe_max(a, b) << endl;
    
    // Safe template expansion for strings
    // Note: 'p' (lowercase) has a higher ASCII value than 'P' (uppercase)
    cout << "safe_max (string): " << safe_max(g, h) << endl;
}

// ==========================================
// MAIN FUNCTION
// ==========================================
int main() {
    cout << "=== C++ Macros vs Modern Features ===" << endl;
    
    demo_macro_traps();
    demo_modern_cpp();
    
    return 0;
}