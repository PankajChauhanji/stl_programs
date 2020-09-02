#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Set:"<<endl;
    set <int> s1{1,4,2,6,3};
    for_each(s1.begin(),s1.end(),[](int x){cout<<x<<" ";});
    s1.insert(67);
    s1.insert(45);
    s1.insert(8);
    cout<<endl;
    for_each(s1.begin(),s1.end(),[](int x){cout<<x<<" ";});
    cout<<endl;
    cout<<"find"<<endl;
    auto it = s1.find(4);
    if (it!=s1.end()){
        cout<<"found"<<endl;
    }
    cout<<"count"<<endl;
    auto in = s1.count(1);
    cout<<in<<endl;
}
