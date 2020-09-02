#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"*****List********"<<endl;
    list <string> nam{"pk","jkfd","karl","shar"};
        cout<<nam.front()<<endl;
        cout<<nam.back();
        cout<<endl;
        for_each(nam.begin(),nam.end(),[](string x){cout<<x<<" ";});
        cout<<endl;
        nam.push_back("23");
        nam.push_front("11");
        for_each(nam.begin(),nam.end(),[](string x){cout<<x<<" ";});
        cout<<endl;
        auto x = find(nam.begin(),nam.end(),"11");
        cout<<"found:"<<*x<<endl;
        for_each(nam.begin(),nam.end(),[](string x){cout<<x<<" ";});
        
        }