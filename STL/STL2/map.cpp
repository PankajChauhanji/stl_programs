#include<bits/stdc++.h>
using namespace std;
int main(){
    map <string, int> m1{{"a",1},{"b",4}};
    cout<<m1["a"]<<endl;
    m1.insert({"nn",45});
    cout<<m1["nn"]<<endl;
    m1.insert(make_pair("hell",34));
    cout<<m1["hell"]<<endl;
    
}