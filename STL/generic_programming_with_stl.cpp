#include <iostream>
#include <string>
#include <vector>

using namespace std;

// ==========================================
// 1. FUNCTION TEMPLATES
// ==========================================

// Standard Template Declaration
template <typename T>
T get_max(T a, T b) {
    return (a < b) ? b : a;
}

// Multiple Template Parameters
template <typename T1, typename T2>
void display_pair(T1 a, T2 b) {
    cout << "First: " << a << " | Second: " << b << endl;
}

// ==========================================
// 2. TEMPLATES WITH CUSTOM TYPES
// ==========================================
struct Person {
    string name;
    int age;

    // To use generic functions like get_max or std::sort, 
    // the custom type MUST overload the operators used inside the template.
    bool operator<(const Person& rhs) const {         
        return this->age < rhs.age;
    }
};

void demo_function_templates() {
    cout << "\n--- Function Templates ---" << endl;
    int a = 4, b = 5;
    float c = 2.3f, d = 4.8f;
    
    // The compiler deduces the type automatically
    cout << "Max (int): " << get_max(a, b) << endl;
    cout << "Max (float): " << get_max(c, d) << endl;
    
    // You can also explicitly specify the types
    display_pair<int, float>(a, c);
    
    // Testing the custom Person struct (Fixed from 2020 notes)
    Person p1{"Pankaj Chauhan", 28}, p2{"Neeraj", 25};
    Person older_person = get_max(p1, p2);
    cout << "The older person is: " << older_person.name << " (" << older_person.age << ")" << endl;
}

// ==========================================
// 3. STRUCT / CLASS TEMPLATES
// ==========================================

// Replicating std::pair
template <typename T1, typename T2>
struct MyPair {
    T1 first;
    T2 second;
    
    // Interview Tip: Adding constructors makes usage much cleaner
    MyPair(T1 f, T2 s) : first(f), second(s) {}
};

// Custom Triplet
template <typename T1, typename T2, typename T3>
struct Triplet {
    T1 first;
    T2 second;
    T3 third;
    
    Triplet(T1 f, T2 s, T3 t) : first(f), second(s), third(t) {}
};

void demo_struct_templates() {
    cout << "\n--- Struct/Class Templates ---" << endl;
    
    // Because of the constructor, we can initialize this in one clean line
    MyPair<string, int> p1("Pankaj Chauhan", 12);
    cout << "MyPair: " << p1.first << " -> " << p1.second << endl;
    
    // Vectors holding custom template types
    vector<MyPair<string, int>> v1;
    v1.push_back(p1);
    // Modern C++ emplace_back avoids creating a temporary object
    v1.emplace_back("Neeraj", 15); 
    
    // Triplet usage
    Triplet<string, int, float> t1("Pankaj Chauhan", 28, 95.5f);
    cout << "Triplet: Name: " << t1.first 
         << " | Age: " << t1.second 
         << " | Score: " << t1.third << endl;
}

// ==========================================
// MAIN FUNCTION
// ==========================================
int main() {
    cout << "=== C++ Generic Programming (Templates) Revision ===" << endl;
    
    demo_function_templates();
    demo_struct_templates();
    
    return 0;
}