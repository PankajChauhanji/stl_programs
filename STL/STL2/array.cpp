#include<bits/stdc++.h>
using namespace std;
int main(){
    array <int,5> ar{1,2,3,4,5};
    cout<<" "<<endl;
    for_each(ar.begin(),ar.end(),[](int s){cout<<s<<" ";});
    cout<<"size(): "<<ar.size()<<endl;
    cout<<"front(): "<<ar.front()<<endl;
    cout<<"back(): "<<ar.back()<<endl;
    cout<<"at(index): "<<ar.at(1)<<endl;
    cout<<"empty: "<<ar.empty()<<endl;
    array <int,5> ar1{1,2,3,4,5};
    ar1.fill(12);
    cout<<"fill: "<<endl;
    for_each(ar1.begin(),ar1.end(),[](int s){cout<<s<<" ";});
    cout<<endl;
    cout<<"min_element(): "<<*(min_element(ar.begin(),ar.end()))<<endl;
    cout<<"max_element(): "<<*(max_element(ar.begin(),ar.end()))<<endl;
    cout<<"accumulate for finding sum:"<<endl;
    cout<<"sum: "<<accumulate(ar.begin(),ar.end(),0)<<endl;
}