#include<bits/stdc++.h>
using namespace std;
class Person{
public:
    string name;
    int age;
};

void stl_priority_queue(){
    priority_queue < Person > pq1{};
    pq1.push({"pankaj", 21});
    pq1.push({"ankaj", 16});
    pq1.push({"dolly", 14});
    pq1.push({"neeraj", 10});
    pq1.push({"hulk", 50});
}

int main(){
    stl_priority_queue();
    return 0;
}
