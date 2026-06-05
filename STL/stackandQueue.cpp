#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <string>

using namespace std;

// ==========================================
// 1. STACK (LIFO - Last In, First Out)
// ==========================================
void demo_stack() {
    cout << "\n--- std::stack (LIFO) ---" << endl;
    stack<int> s;

    // push: Copies/moves the element to the top
    s.push(10);
    
    // emplace: Constructs the element in-place (slightly faster for objects)
    s.emplace(20); 
    s.emplace(30);

    cout << "Stack size: " << s.size() << endl;

    // INTERVIEW TRAP: s.pop() returns void! 
    // You must read the top element FIRST, then pop it.
    cout << "Popping elements: ";
    while (!s.empty()) {
        cout << s.top() << " "; // Read top
        s.pop();                // Remove top
    }
    cout << endl;
}

// ==========================================
// 2. QUEUE (FIFO - First In, First Out)
// ==========================================
void demo_queue() {
    cout << "\n--- std::queue (FIFO) ---" << endl;
    queue<string> q;

    q.push("first");
    q.push("second");
    q.emplace("third");

    // Queues allow access to both the front and the back
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    cout << "Processing queue: ";
    while (!q.empty()) {
        cout << q.front() << " "; // Read front
        q.pop();                  // Remove front
    }
    cout << endl;
}

// ==========================================
// 3. PRIORITY QUEUE (Heaps)
// ==========================================
void demo_priority_queue() {
    cout << "\n--- std::priority_queue (Heaps) ---" << endl;

    // 1. Default Priority Queue is a MAX-HEAP (Largest element on top)
    priority_queue<int> max_heap;
    max_heap.push(10);
    max_heap.push(50);
    max_heap.push(20);
    
    cout << "Max-Heap top: " << max_heap.top() << " (Should be 50)" << endl;

    // 2. MIN-HEAP Syntax (Memorize this for interviews!)
    // Requires <vector> and <functional> (included in <queue>)
    priority_queue<int, vector<int>, greater<int>> min_heap;
    min_heap.push(10);
    min_heap.push(50);
    min_heap.push(20);

    cout << "Min-Heap top: " << min_heap.top() << " (Should be 10)" << endl;
}

// ==========================================
// MAIN FUNCTION
// ==========================================
int main() {
    cout << "=== C++ Stack, Queue & Heaps Revision ===" << endl;
    
    demo_stack();
    demo_queue();
    demo_priority_queue();

    return 0;
}