#include<bits/stdc++.h>
using namespace std;

template < typename T >                                     //  declaration of template. We can also use class in place of typename.
T max1(T a, T b){
    return (a<b)?b:a;
}

template < typename T1, typename T2 >                       //   we can declare template typename as much we want.
void tell(T1 a, T2 b){
    cout<<"first: "<<a<<"\tsecond: "<<b<<endl;
}

//creating a structure of type Person.
struct Person{
    string name;
    int age;
    bool operator<(const Person &rhs)const{         //  we have to overload operator here. because max would be confuse to what to compare
        return this->age < rhs.age;
    }
};

// creating same template as pair in stl.
template < typename T1, typename T2 >
struct my_pairs{
    T1 first;
    T2 second;
};

template < typename T1, typename T2, typename T3 >
struct triplets{
    T1 first;
    T2 second;
    T3 third;
};
void stl1(){
    int a=4, b=5;
    float c=2.3, d=2.3;
    cout<<"Max of "<<a<<" and "<<b<<" is "<<max1(a, b)<<endl;
    cout<<"Max of "<<a<<" and "<<b<<" is "<<max1<int>(a, b)<<endl;  //  same as previous function call.
    cout<<"Max of "<<c<<" and "<<d<<" is "<<max1(c, d)<<endl;
    
    tell(a, c);
    tell<int, float>(b, d);
    
//    Person p1{"pankaj", 21}, p2{"neeraj", 11};
//    Person p3 = max1(p1, p3);
//    cout<<"maximum age is of "p3.age<<endl;
}

void stl2(){
//    decalring pairs.
    my_pairs < string, int > p1;                //  declaring pairs of string and int.
    p1.first = "pankaj";
    p1.second = 12;
    cout<<p1.first<<"\t"<<p1.second<<endl;
    
    vector < my_pairs < string, int > >v1{};    //  declaring pairs of vectors here.
    v1.push_back(p1);
    cout<<v1[0].first<<endl;
//    declaring triplets
    triplets < string, int, float > t1;
    t1.first = "pankaj";
    t1.second = 21;
    t1.third = 95.5;
    cout<<"name: "<<t1.first<<"\t age: "<<t1.second<<"\t percentage: "<<t1.third<<endl;
}
int main(){
//    stl1();
    stl2();
    return 0;
}