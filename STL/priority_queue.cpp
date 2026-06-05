#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;

// Changed class to struct since all members are public anyway
struct Person {
    string name;
    int age;

    // METHOD 1: Operator Overloading (Default for Max-Heap)
    // std::priority_queue uses std::less by default. 
    // It puts the "largest" element at the top.
    bool operator<(const Person& other) const {
        return age < other.age; 
    }
};

// METHOD 2: Custom Functor (Used for Min-Heap or alternative sorting)
// Useful if you want the youngest person on top instead!
struct CompareYoungest {
    bool operator()(const Person& p1, const Person& p2) const {
        // Return true if p1 should be placed LOWER than p2
        return p1.age > p2.age; 
    }
};

// ==========================================
// 1. MAX-HEAP (Using internal operator<)
// ==========================================
void demo_max_heap() {
    cout << "\n--- Max-Heap (Oldest First) ---" << endl;
    
    // Uses the operator< defined inside the Person struct
    priority_queue<Person> max_pq;
    
    // C++ Tip: Use {} initialization directly in push/emplace
    max_pq.push({"Pankaj Chauhan", 21});
    max_pq.push({"Amit", 16});
    max_pq.push({"Dolly", 14});
    max_pq.push({"Hulk", 50});

    while (!max_pq.empty()) {
        cout << max_pq.top().name << " (" << max_pq.top().age << ")" << endl;
        max_pq.pop();
    }
}

// ==========================================
// 2. MIN-HEAP (Using Custom Functor)
// ==========================================
void demo_min_heap() {
    cout << "\n--- Min-Heap (Youngest First) ---" << endl;
    
    // Pass the custom comparator struct as the third template argument
    priority_queue<Person, vector<Person>, CompareYoungest> min_pq;
    
    min_pq.push({"Pankaj Chauhan", 21});
    min_pq.push({"Amit", 16});
    min_pq.push({"Dolly", 14});
    min_pq.push({"Hulk", 50});

    while (!min_pq.empty()) {
        cout << min_pq.top().name << " (" << min_pq.top().age << ")" << endl;
        min_pq.pop();
    }
}

// ==========================================
// 3. THE MODERN C++ WAY (Lambdas)
// ==========================================
void demo_lambda_comparator() {
    cout << "\n--- Custom Sorting via Lambda (Alphabetical) ---" << endl;
    
    // Define the lambda
    auto comp = [](const Person& p1, const Person& p2) {
        return p1.name > p2.name; // Sort alphabetically (Min-Heap style)
    };

    // Use decltype to pass the lambda's type to the template, 
    // and pass the lambda instance to the constructor.
    priority_queue<Person, vector<Person>, decltype(comp)> alpha_pq(comp);

    alpha_pq.push({"Pankaj Chauhan", 21});
    alpha_pq.push({"Amit", 16});
    alpha_pq.push({"Dolly",