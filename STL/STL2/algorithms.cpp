#include<bits/stdc++.h>
#include<cctype>
using namespace std;
void square(int num){
    cout<<"square of "<<num<<": "<<num*num<<endl;
}
void print(int x){
    cout<<x<<" ";
}
int main(){
    cout<<"Algorithms:"<<endl;
    vector <int> t{1,2,3,4,5,6,1,5,2,3,1};
    
    cout<<"using for_each:"<<endl;
    for_each(t.begin(),t.end(),square);
    
    cout<<"::::::::Using find  ::::::::::"<<endl;
    auto f = find(t.begin(),t.end(),3);
    if (f!=t.end()){
        cout<<"element found"<<"and at: "<<&f<<endl;
    }
    
    
    cout<<"Using Lambda functions: "<<endl;
    for_each(t.begin(),t.end(),[](int x){cout<<"square: "<<x*x<<endl;});
    cout<<"Use of count:"<<endl;
    int c = count(t.begin(),t.end(),1);
    cout<<" 1 occours: "<<c<<"times."<<endl;
    c = count(t.begin(),t.end(),2);
    cout<<" 2 occours: "<<c<<"times."<<endl;
    
    vector <int> na{1,2,7,8,9,5,6};
    cout<<"Use of count_if:"<<endl;
    cout<<"To find how many even number is there"<<endl;
    int n1 = count_if(na.begin(),na.end(),[](int x){return x%2==0;});
    cout<<n1<<" even number found"<<endl;
    
    cout<<"To find how many odd number is there"<<endl;
    int n2 = count_if(na.begin(),na.end(),[](int x){return x%2!=0;});
    cout<<n2<<" odd number found"<<endl;
    
    cout<<"To find how many number is greater than 5:"<<endl;
    int n3 = count_if(na.begin(),na.end(),[](int x){return x>5;});
    cout<<n2<<" numbers greater than 5"<<endl;
    
    cout<<"Use of replace:"<<endl;
    cout<<"replace will change that with provided:"<<endl;
    cout<<"to replace 1 in vector with 100:"<<endl;
    cout<<"before replacement"<<endl;
    for_each(na.begin(),na.end(),print);
    cout<<"after replacement"<<endl;
    replace(na.begin(),na.end(),1,100);
    for_each(na.begin(),na.end(),[](int x){cout<<x<<" ";});
    
    cout<<"Use of all_of:"<<endl;
    cout<<"it will check if all of them follow given condition or not:"<<endl;
    if(all_of(na.begin(),na.end(),[](int x){return x<200;})){
        cout<<"all are smaller than 200."<<endl;
    }
    
    cout<<"Use of any_of:"<<endl;
    cout<<"it will check if any of them follow given condition or not:"<<endl;
    if(any_of(na.begin(),na.end(),[](int x){return x<4;})){
        cout<<"yes there is smaller than 4."<<endl;
    }
    
    cout<<"Use of transform:"<<endl;
    cout<<"To change all smaller to capital letters:"<<endl;
    string s1{"hello my name is pankaj"};
    cout<<"Before transform:"<<endl;
    cout<<s1<<endl;
    transform(s1.begin(),s1.end(),s1.begin(),::toupper); //we should also use scope resolution operator to use global;
    cout<<"after transform:"<<endl;
    cout<<s1<<endl;
}