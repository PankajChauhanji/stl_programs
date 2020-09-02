#include<bits/stdc++.h>
//  macros are defined at top of program as they are preprocessed.
#define pi 3.14                                                     //  pi is replaced by 3.14 in program 
#define max1(a, b) ( (a>b) ? a : b )                                //  max(a, b) is subtituted by ((a>b)?a:b)
                                                                    //  it does not do any computation or any operation it just replace it where it encounter it.
                                                                    //  no semicolons are required here.
#define square(a) a*a
using namespace std;

void macros1(){
    int a = 10, b = 20;
    long double c = 2.12301, d = 2.12302;
    char e = 'v', f = 'k';
    string g = "pankaj", h = "PANKAJ";
    float f1 = 2.03, f2 = 10.34;
    cout<<"from ("<<a<<", "<<b<<") "<<max1(a,b)<<" is bigger."<<endl;
    cout<<"from ("<<c<<", "<<d<<") "<<max1(c,d)<<" is bigger."<<endl;
    cout<<"from ("<<e<<", "<<f<<") "<<max1(e,f)<<" is bigger."<<endl;
    cout<<"from ("<<g<<", "<<h<<") "<<max1(g,h)<<" is bigger."<<endl;
    cout<<"from ("<<f1<<", "<<f2<<") "<<max1(f1,f2)<<" is bigger."<<endl;

        
}
void macros2(){
    cout<<"square of 5: "<<square(5)<<endl;                      //    result is 25
    cout<<"100/square(5): "<<100/square(5)<<endl;                //    actual result should be 4 but we get 100 because it is same as 100/5*5
    cout<<"100/square(5): "<<100/(square(5))<<endl               //    we get 4 because it is same as 100/(5*5)
}
int main(){
    cout<<"PROGRAMMING WITH MACROS."<<endl;
    macros1();
    macros2();
    return 0;
}