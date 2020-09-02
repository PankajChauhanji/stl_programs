#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int>num{1,2,3};
    num.pop_back();
    num.push_back(123);
    num.clear();
    num.push_back(23);
    auto it = num.begin();
    while(it!=num.end()){
        cout<<" "<<*it<<" "<<endl;
        it++;
    }
}