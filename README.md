# C++ Notes

A highly optimized, modern C++ (C++17 / C++20) reference guide and code repository designed for senior backend engineering interview preparation. 

This repository upgrades standard 2020-era C++ practices to modern standards, focusing on memory safety, cache locality, and algorithmic efficiency.

## 📌 Core Topics Covered

* **STL Algorithms:** `std::for_each`, `std::count_if`, `std::replace`, `std::transform`, `std::all_of`.
* **Sequential Containers:** `std::array`, `std::vector`, `std::list`, `std::deque`.
* **Associative & Hash Containers:** `std::map`, `std::set`, `std::unordered_map`, `std::unordered_set`.
* **Container Adapters:** `std::stack`, `std::queue`, `std::priority_queue` (Min-Heaps & Max-Heaps with Custom Comparators).
* **Generic Programming:** Function Templates, Struct Templates, and Operator Overloading.
* **Modernization:** Replacing preprocessor Macros with `constexpr` and `inline` templates, C++17 Structured Bindings, and `std::string_view`.

## 🚀 How to Run

These examples utilize modern C++ features. To compile and run any of the files from your terminal, ensure your compiler supports at least C++17 (C++20 is recommended).

Using GCC/G++:
```bash
# Compile the file
g++ -std=c++20 filename.cpp -o output_name

# Run the compiled binary (Linux/macOS)
./output_name

# Run the compiled binary (Windows)
output_name.exe