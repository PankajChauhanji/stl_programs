#include<bits/stdc++.h>
#define all(a) a.begin(), a.end()           //  we can create many shortcuts if they are to be used many times.
#define pi 3.14
using namespace std;

//********* FUNCTIONS DECLARATIONS.
void stl_array();
void stl_vector();
void stl_string();
void stl_stack();
void stl_queue();
void stl_list();
void stl_forward_list();
void stl_deque();
void stl_pairs();
void stl_set();
void stl_multi_set();
void stl_unorderd_set();
void stl_unorderd_multi_set();
void stl_map();
void stl_multimap();
void stl_unordered_map();
void stl_unordered_multimap();
void stl_algorithm();
void stl_priority_queue();
void square();

//  ******* MAIN ******** 
int main(){
    cout<<"Series on STL:\n";
//    stl_array();
//    stl_vector();
//    stl_string();
//    stl_stack();
//    stl_queue();
//    stl_list();
//    stl_forward_list();
//    stl_deque();
//    stl_pairs();
//    stl_set();
//    stl_multi_set();
//    stl_unorderd_set();
//    stl_unorderd_multi_set();
//    stl_map();
//    stl_multimap();
//    stl_unordered_map();
//    stl_unordered_multimap();
//    stl_algorithm();
//    stl_priority_queue();
    return 0;
}

//  ******* FUNCTIONS DEFINATION **********
void square(int x){
    cout<<x*x<<" ";
}

void stl_array(){
//    this stl array provide many stl algorithms.they have same properties as raw array.
    array < int, 5 > ar1{1, 2, 3, 4, 5};     //  array declarations. size is also required to declare at initialize time.
    array < int, 5 > ar2{};
    ar2 = {1, 3, 5, 7, 9};
    //  some algorithms we can use in array are. We can use many more.
    //  more algorithms can be found in stl_algorithms function.
    cout<<ar2.size()<<endl;
    cout<<ar2.at(0)<<endl;
    cout<<ar2.front()<<endl;
    cout<<ar2.back()<<endl;
    cout<<ar2[2]<<endl;
    ar1.fill(100);                          // fill all with 100;
    for(int i=0; i<5; i++) cout<<ar1[i]<<" ";
     cout<<endl;
}
void stl_vector(){
    cout<<"\t\tVector\n";
    vector < int > v1{};                     //  empty vector is declared with constructor initialization.
    vector < int > v11(v1);                  //  copy all vector into another vector
    vector < int > v111 = v1;                //  same as previous one
    vector < int > v2(10);                   //  vector is initailize with size 10
    vector < int > v3[10];                   //  vector is initailize with size 10
    vector < int > v4(10, 2);                //  vector is initialize with size 10 with all elements set to 2.
    
    for_each(v4.begin(), v4.end(), [](int x){cout<<x<<" ";});
    cout<<"\n*************\n";
    
    vector < int > v5{1, 2, 3, 4, 5, 6};     //  vector is initialize with all elemets.
    for_each(v5.begin(), v5.end(), [](int x){cout<<x<<" ";});
    cout<<"\n*************\n";
    
    cout<<v5.empty()<<endl;                  //   v.empty return 1 if vector is empty and 0 if not empty
    
    cout<<v5.size()<<endl;                   //   v.size return number of elements in vector.
    
    v5.push_back(7);                         //   v.push_back add elements to end of the vector.
    
    v5.pop_back();                           //   v.pop_back() will remove elements from back.
    
    v4.resize(20);                           //   v.resize will resize vector size and initialize remaining with 0
    
    v5.resize(20);
    
    for_each(v5.begin(), v5.end(), [](int x){cout<<x<<" ";});
    cout<<"\n*************\n";
    
    //  if we use push_back then it will add elements at end of the array and vector size will get increase by 1
    //  if we use push_back after resize then it will add elements after newly created vector not into resize vector.
    v5.push_back(8);
    for_each(v5.begin(), v5.end(), [](int x){cout<<x<<" ";});
    cout<<"\n*************\n";
    
    //  Multidimensional Arrays
    cout<<"\n\t\tmultidimensional arrays\n";
    vector < vector < int > > m1;                           //   declaring a multidimensional array
    vector < vector < int > > m2(4, vector < int > (5));    //   declaring a vector with 4 rows and 5 cols. ar 4x5 matrix.
    cout<<m2.size()<<" and "<<m2[0].size()<<endl;
    vector < vector < int > > m3(4, vector < int > (5, 1)); //   declaring a 4x5 vector with all elements 1.
    for(int i=0; i<m3.size(); i++){
        for_each(m3[i].begin(), m3[i].end(), [](int x){cout<<x<<" ";});
        cout<<endl;
    }
    
    vector < vector < int > > m4{{1, 2, 3, 4, 5},           // initialize a 2d vector with all elements.
                                 {6, 7, 8, 9, 0},
                                 {1, 2, 3, 4, 5},
                                 {6, 7, 8, 9, 0}};
    
    //other methods.
    //v.begin() is pointing to fist element but v.end is pointing to last +1 place.
    cout<<v5.at(4)<<endl;                                   //   v.at(index) to access any elements in vector same as v[index].
    
    cout<<m4.at(1).at(3)<<endl;                             //   access m4[1][3]
    
    cout<<*v5.begin()<<endl;                                //   v.begin() is the starting address of the vector the using * operator we can find value
    
    vector < int > v6{1, 2, 3, 4, 5, 6};
    
    reverse(v6.begin(), v6.end());                          //   reverse is used to reverse the vector input: starting and end of vector.
    
    for_each(v6.begin(), v6.end(), [](int x){cout<<x<<" ";});
    cout<<"\n*************\n";
    
    int sum = accumulate(v6.begin(), v6.end(), 0);           //   to calculate sum of the elements in vector.
    cout<<sum<<endl;
    
    cout<<v6.front()<<endl;                                  //   get first element of vector
    
    cout<<v6.back()<<endl;                                   //   get last elements of vector
    
    sort(v6.begin(), v6.end());                              //   sort all elements.
    
    auto it = find(v6.begin(), v6.end(), 3);                 //   find will return the address of place it is found if not found then returns vec.end().
    cout<<*it<<endl;
    cout<<"\n*************\n";
    
    auto it3 = find(v6.begin(), v6.end(), 3);
    v6.insert(it3, 10);                                      //   it will insert 10 at it3 place and shift all other elements after that.
    for_each(v6.begin(), v6.end(), [](int x){cout<<x<<" ";});
    cout<<"\n*************\n";
    
    auto it4 = find(v6.begin(), v6.end(), 4);
    v6.insert(it4, {100, 200, 300});                         //   it will insert all elements from it4.
    for_each(v6.begin(), v6.end(), [](int x){cout<<x<<" ";});
    cout<<"\n*************\n";
    
    vector < int > v7{5, 4, 3, 2, 1, 0};
    auto it5 = find(v6.begin(), v6.end(), 5);
    v6.insert(it5, v7.begin(), v7.end());                    //   this will insert all vector after from it5 poition.
    for_each(v6.begin(), v6.end(), [](int x){cout<<x<<" ";});
    cout<<"\n*************\n";
    
    sort(v6.rbegin(), v6.rend());                            //   to sort in descending order .
    for_each(v6.begin(), v6.end(), [](int x){cout<<x<<" ";});
    cout<<"\n*************\n";
    
    auto it1 = min_element(v6.begin(), v6.end());            //   it return the address of minimum element
    auto it2 = max_element(v6.begin(), v6.end());            //   it return the address of max elements.
    cout<<*it1<<"\t"<<*it2;
    cout<<"\n*************\n";
    
}


void stl_string(){
    string s1{};                                //  declarations of string
    string s2 = "pankaj";                       //  declaration and initialization same time
    string s3{"pankaj"};
    string s4 = s2;                             //  assignment of string
    string s5 = s2.substr(0, 2);                //  substr will return string from (i, j) i to j-1 th index.
    string s6 = s2.substr(2);                   //  this will return whole string from provided index.
    int k = s2.length();
    cout<<"s1: "<<s1<<endl;
    cout<<"s2: "<<s2<<endl;
    cout<<"s3: "<<s3<<endl;
    cout<<"s4: "<<s4<<endl;
    cout<<"s5: "<<s5<<endl;
    cout<<"s6: "<<s6<<endl;
    cout<<"s2 length: "<<k<<endl;
    string s7 = s2+s3;                          //  string can be added easily
    cout<<"s7: "<<s7<<endl;
}

void stl_stack(){
//    stack works on LIFO principle ie: first inserted last out
    cout<<"Stack"<<endl;
    
    stack < int > st1{};                        //  initializing empty stack.
    for(int i=1; i<=10; i++) st1.push(i*i);     //  pushing elements into stack
    st1.pop();                                  //  pop is used to delete last inserted element from stack.
    cout<<"top of stack: "<<st1.top()<<endl;    //  top give last inserted or top element from stack.
    cout<<"size of stack: "<<st1.size()<<endl;  //  size give number of elements in stack.
    cout<<"is stack empty: "<<st1.empty()<<endl;//  return true if stack is empty else false.
}


void stl_queue(){
    cout<<"Queue"<<endl;
    queue < int > q1{};                           //  initializing empty queue.
    for(int i=1; i<=10; i++) q1.push(i*i);        //  pushing elements into queue
    q1.pop();                                     //  pop is used to delete first inserted element from queue or front element.
    cout<<"front of queue: "<<q1.front()<<endl;   //  front give first inserted or front element from queue.
    cout<<"back of queue: "<<q1.back()<<endl;     //  back give last inserted or back element from stack.
    cout<<"size of queue: "<<q1.size()<<endl;     //  size give number of elements in queue.
    cout<<"is queue empty: "<<q1.empty()<<endl;   //  return true if queue is empty else false.
}

void stl_deque(){
//    stl deque is a double ended queue which have push and pop at both front and end of queue.
    cout<<"STL Deque"<<endl;
    deque < int > dq1;                            //  deque initialization.
    deque < int > dq2{1, 2, 3, 4};                //  deque initialization with elements.
    
    for_each(dq2.begin(), dq2.end(), [](int x){cout<<x<<" ";});
    cout<<"\n**********\n";
    
    cout<<"front: "<<dq2.front()<<endl;           //  accessing front elements or first elements.
    
    cout<<"back: "<<dq2.back()<<endl;             //  accessing back elements or last elements.
    
    dq2.push_back(30);                            //  inserting at back.
    dq2.push_front(20);                           //  inserting at front.
    for_each(dq2.begin(), dq2.end(), [](int x){cout<<x<<" ";});
    cout<<"\n**********\n";
    dq2.pop_back();                               //  deleting back element.
    dq2.pop_front();                              //  deleting front elements.
    for_each(dq2.begin(), dq2.end(), [](int x){cout<<x<<" ";});
    cout<<"\n**********\n";
    
    cout<<"at 3rd position: "<<dq2.at(2)<<endl;   //  accessing element at index 2.
}

void stl_list(){
//    List is same as doubly linked list. It have front and back.
//    Insertion and deletion is easy as same in doubly linked list.
    cout<<"STL List:"<<endl;
    list < int > l1{};                                 //   empty list initialization.
    list < string > l2{"ab", "bc", "cd", "de", "ef"};  //   list initialization with elements.
    list < string > l3{};
    l3 = {"pankaj", "ankaj", "nkaj", "kaj", "aj", "j"};//   ist assignment.
   
    cout<<"front: "<<l2.front()<<endl;                 //   access first element or front.
    cout<<"back: "<<l2.back()<<endl;                   //   access last element or back.
    cout<<"size of list: "<<l2.size()<<endl;           //   get size of list or number of elements.
    
    for_each(l2.begin(), l2.end(), [](string x){cout<<x<<" ";});    //  use lambda operation to print list.
    cout<<endl;
    
    l2.push_back("fg");                                 //  insert element at back side or last of list.
    l2.push_front("a");                                 //  insert element at front side or first place.
    
    for_each(l2.begin(), l2.end(), [](string x){cout<<x<<" ";});
    cout<<endl;
    
    l2.pop_back();                                      //  deleting last element or back element.
    l2.pop_front();                                     //  deleting first element or front element.
    
    for_each(l2.begin(), l2.end(), [](string x){cout<<x<<" ";});
    cout<<endl;
    
    auto it1 = find(l2.begin(), l2.end(), "cd");        //  find return iterator pointing to that element if found else point to list.end().
    
    l2.insert(it1, "inserted");                         //  insert is used to insert at iterator provided.
    
    for_each(l2.begin(), l2.end(), [](string x){cout<<x<<" ";});
    cout<<endl;
    
    l2.erase(it1);                                       //  erase delete the element from iterator provided.
    
    list < int > l4{1, 2, 3, 4, 5};
    for_each(l4.begin(), l4.end(), [](int x){cout<<x<<" ";});
    cout<<endl;
    l4.resize(2);                                       //  resize will change size of list to new size and delete remaining elements.
    for_each(l4.begin(), l4.end(), [](int x){cout<<x<<" ";});
    cout<<endl;
    l4.resize(10);                                      //  resize will add zeroes if list is resized to larger size.
    for_each(l4.begin(), l4.end(), [](int x){cout<<x<<" ";});
    cout<<endl;
    
//    list can be traversed in forward as well as backward direction.
    auto it4 = l2.begin();
    cout<<"first: "<<*it4<<endl;
    it4++;                                              //  traversing forward direction.
    cout<<"second: "<<*it4<<endl;
    
    auto it5 = l2.end();
    it5--;
    cout<<"last: "<<*it5<<endl;
    it5--;                                               //  traversing backward direction.
    cout<<"second last: "<<*it5<<endl;
}

void stl_forward_list(){
//    forward list is same as singly linked list so we can traverse only in forward direction
//    reverse iterator is not possible here.
//    Here size operator and back operator is also not present.
//    push back and pop back is also not available as we don't have back here.
    cout<<"Forward list:"<<endl;
    
    forward_list < int > fl1{};                                    //  empty list initialization
    forward_list < string > fl2{"ab", "bc", "cd", "de", "ef"};     //  list initialization with elements.
    
    for_each(fl2.begin(), fl2.end(), [](string x){cout<<x<<" ";}); //  lambda can be used here. 
    cout<<endl;
    
    fl2.push_front("a");                                 //  insert element at front side or first place.
    
    for_each(fl2.begin(), fl2.end(), [](string x){cout<<x<<" ";});
    cout<<endl;

    fl2.pop_front();                                     //  deleting first element or front element.
    
    auto it1 = find(fl2.begin(), fl2.end(), "bc");                 //  return the pointer pointing to element if found else point to end.
    
    fl2.insert_after(it1, "inserted");                             //  as name suggest it insert element after that iterator.
    for_each(fl2.begin(), fl2.end(), [](string x){cout<<x<<" ";}); 
    cout<<endl;
    
    fl2.erase_after(it1);                                          //  erase element after iterator.
    for_each(fl2.begin(), fl2.end(), [](string x){cout<<x<<" ";}); 
    cout<<endl;
    
    forward_list < int > fl3{1, 2, 3, 4, 5};
    
    for_each(fl3.begin(), fl3.end(), [](int x){cout<<x<<" ";}); 
    cout<<endl;
    
    fl3.resize(3);                                                 //  resize will change size of list to new size and delete remaining elements.
    for_each(fl3.begin(), fl3.end(), [](int x){cout<<x<<" ";});
    cout<<endl;
    
    fl3.resize(6);                                                 //  resize will add zeroes if list is resized to larger size.
    for_each(fl3.begin(), fl3.end(), [](int x){cout<<x<<" ";}); 
    cout<<endl;
    
}


void stl_pairs(){
    pair < int, int > p1;                         //  pairs declaration of int and int.
    p1.first = 12;                                //  first element can be access by p.first and second for second.
    p1.second = 1;
    cout<<p1.first<<endl;
    cout<<p1.second<<endl;
    
    pair < int, string > p2;                      //  pairs of int and string
    p2.first = 13;
    p2.second = "panku";
    cout<<p2.first<<" "<<p2.second<<endl;
    
    pair < int, pair < string, string > > p3;     //  declaration of pair within pairs.
    p3.first = 1;
    p3.second.first = "pankaj";
    p3.second.second = "chauhan";
    cout<<p3.first<<" "<<p3.second.first<<" "<<p3.second.second<<endl;
    
    // pairs can also be nested in another containers.
    vector < pair < string, string > > v1(6);     //  pair withn vector.
    v1[0].first = "pankaj";
    v1[0].second = "chauhan";
    v1[1].first = "ankaj";
    v1[1].second = "chauhan";
    v1[2].first = "sunil";
    v1[2].second = "panwar";
    v1[3].first = "dolly";
    v1[3].second = "panwar";
    v1[4].first = "race";
    v1[4].second = "course";
    v1[5].first = "vikas";
    v1[5].second = "nagar";
    cout<<"\npair within vector:\n";
    for_each(v1.begin(), v1.end(), [] (pair < string, string > x ){cout<<x.first<<"\t"<<x.second<<endl;});
}

void stl_set(){
//    main property of set is that duplicates are not allowed.
//    add, remove, find are in O(logn) time and count of element in O(1) time.
//    set is basically balanced binary search tree.
//    front and back are not present here. By default all elements are stored in sorted order so there is always an order.
    
    set < int > s1;                                           //    set initialization.
    set < int > s2{1, 2, 3, 4, 5};                            //    set initialization with elements.
    set < int > s3{1, 2, 1, 3, 2, 1, 4, 5};                   //    set will be initialized with distinct elements.
    set < string > s4{};
    s4 = {"ab", "bc", "cd", "de", "ef"};                      //    set can be assigned.
    for(int i=1; i<=20; i++){                                 //    all duplicates are discarded here.
        s1.insert(i%8);                                       //    insert will add in set if not present else discard.
    }
    for_each(s1.begin(), s1.end(), [](int x){cout<<x<<" ";});
    cout<<"\n***************\n";
    for_each(s3.begin(), s3.end(), [](int x){cout<<x<<" ";});
    cout<<"\n***************\n";
    
    cout<<"size: "<<s3.size()<<endl;                          //    size give number of elements in set.
    
    (s3.find(2) != s3.end()) ? cout<<"present\n" : cout<<"not present.\n";  //  find return iteratir pointing to elements if found else end. 
    (s3.find(30) != s3.end()) ? cout<<"present\n" : cout<<"not present.\n"; //  find work in logn time. 
    
    s3.erase(3);                                              //    erase if present
    auto it1 = s3.find(4);
    if (it1!=s3.end()) s3.erase(it1);                         //    erase also work with iterator as input.
    
    cout<<"3 occurs: "<<s3.count(3)<<endl;                    //    count will return 0 if not found and 1 if found.
    
    s3.clear();                                               //    clear will delete whole set.
    
    cout<<"is empty: "<<s3.empty()<<endl;                     //    true if empty else false.
    
}

void stl_multi_set(){
//    same as set but here duplicates are allowed.
//    all elements are in sorted order.
//    all set operator are available in multi_set.
    cout<<"Multi Set:"<<endl;
    
    multiset < int > ml1{1, 2, 3, 1, 2};                      //    duplicates are also allowed here.
    for_each(ml1.begin(), ml1.end(), [](int x){cout<<x<<" ";});
    cout<<endl;
    
}

void stl_unorderd_set(){
//    this are not orderd so reverse iterator is not allowed and elements are not in sorted order.
//    here no duplicates are allowed. Remaining operations are same as set.
//    all operator are same as set except reverse iterator.
    cout<<"Unorderd Set: "<<endl;
    
    unordered_set < int > us1{5, 1, 2, 3, 1, 2, 4};           //    duplicates are not also allowed here, so they are discarded.
    for_each(us1.begin(), us1.end(), [](int x){cout<<x<<" ";}); 
    cout<<endl;
}

void stl_unorderd_multi_set(){
//    same as unorderd set but here duplicates are allowed.
//    all operator are same as unorder set except reverse iterator not allowed.
    cout<<"Unorderd Multi Set: "<<endl;
    
    unordered_multiset < int > ums1{5, 1, 2, 3, 1, 2, 4};         //    duplicates are also allowed here.
    for_each(ums1.begin(), ums1.end(), [](int x){cout<<x<<" ";});
    cout<<endl;
}

void stl_map(){
//    Map is very efficient for accessing elements.
//    Map is stored as key and value. key is same as index in array. So we can access elements using key.
//    Map is ordered by key and duplicate keys are not allowed.

    map <string , int > mp1{};                              //  empty map initialization of string to int.
    mp1["contact"] = 9927;                                  //  insertion in map first one is key and second one is value.
    mp1["roll"] = 1;
    mp1["id"] = 12;
    cout<<"contact: "<<mp1["contact"]<<endl;                //  value can be accessed usig key.
    
    map < string, string > mp2{{"name", "pankaj"},
                               {"id", "2017BCD"},
                               {"address", "bombay"},
                               {"married", "No"}};          //  map initialization with elements.
    for (const auto it : mp2){
        cout<<"[ "<<it.first<<", "<<it.second<<" ]"<<endl;  //  printing map using forward iterator.
    }
    cout<<"\n*********\n";

                               
    pair < string, int > p1{"sports_no", 1222};             //  insertion can also be done by making pair
    mp1.insert(p1);
    mp1.insert(make_pair("height_in_cm", 171));             //  make_pair automatically make pairs.
    for (const auto it : mp1) cout<<"[ "<<it.first<<", "<<it.second<<" ]"<<endl;
    cout<<"\n*********\n";

    mp1["height_in_cm"] = 181;                              //  as it is allready present so it will update value.
    for (const auto it : mp1) cout<<"[ "<<it.first<<", "<<it.second<<" ]"<<endl;
    cout<<"\n*********\n";

    mp1.at("height_in_cm") = 191;                           //  at method also used to access the value or update value.
    for (const auto it : mp1) cout<<"[ "<<it.first<<", "<<it.second<<" ]"<<endl;
    cout<<"\n*********\n";
    
    cout<<"size: "<<mp1.size()<<endl;                       //  size provide number of paired elements in map.
    
    mp1.erase("sports_no");                                 //  erase will delete the key and value pair from map.
    
    auto it1 = mp2.find( "name");                           //  find will return iterator if found else return map.end().
    if (it1 != mp2.end()) cout<<"name: "<<mp2["name"]<<endl;
    
    cout<<"is empty "<<mp1.empty()<<endl;                   //  true if empty else false.
    
    mp1.clear();                                            //  remove all elements from map.
    
    cout<<"exist: "<<mp2.count("height_in_cm");             //  count return 1 if exist else false.
    
   
}

void stl_multimap(){
//    same as map but allow duplicate elements and ordered by key.
//    all map operator are available.
    cout<<"Multi Map:"<<endl;
}

void stl_unordered_map(){
//    same as map but not ordered. so reverese iterator are not allowed.
//    No duplicates are allowed. All map operator are available.
    cout<<"Unorderd Map:"<<endl;
}

void stl_unordered_multimap(){
//    same as unordered map but allow duplicate elements.
//    all map operator are available except reverse iterator.
    cout<<"Unordered Multi Map:"<<endl;
}

void stl_priority_queue(){
    //  by default priority queue is max heap so it have max value at top
    priority_queue < int > pq1{};                           //  priority queue declarations.
   
    pq1.push(12);                                           //  pq.push(value) is used to push value in priority queue.
    pq1.push(1);
    pq1.push(4);
    pq1.push(20);
    pq1.push(8);
    pq1.push(34);
    pq1.push(15);
    
    cout<<"top: "<<pq1.top()<<endl;                         //  pq.top() give top element of priority queue.
    
    (pq1.empty()) ? cout<<"Priority queue is empty."<<endl :
    cout<<"Priority queue is not empty."<<endl;             //  pq.empty() returns true if no elements is present else false.
    
    cout<<"size: "<<pq1.size()<<endl;                       //  pq.size() gives number of elements in priority queue.
    
    cout<<"elements are: ";
    while(!pq1.empty()){
        cout<<pq1.top()<<" ";                               //  pq.pop() is used to delete top elements from priority queue.
        pq1.pop();
    }
}


void stl_algorithm(){
    vector < int > vect{1, 5, 3, 6, 1, 2, 3, 2, 3, 4};
    
    cout<<max(1, 4)<<endl;                                  //  max returns maximum of two elements.
    
    cout<<min(1, 4)<<endl;                                  //  min returns minimum of two elements.
    
    int a = 4, b = 5;
    cout<<"a: "<<a<<"\tb:"<<b<<endl;
    swap(a, b);                                             //  swap is use to swap two values.
    cout<<"a: "<<a<<"\tb:"<<b<<endl;
    
    cout<<"root of 5: "<<sqrt(5)<<endl;                     //  sqrt finds square root of number.
    
    cout<<"cube root of 5: "<<cbrt(5)<<endl;
    
    cout << count(vect.begin(), vect.end(), 2);             //  Counts the occurrences of 20 from 1st to last element.
    
    cout<<"front elements: "<<vect.front()<<endl;           //  get first elements.
    
    cout<<"last elements: "<<vect.back()<<endl;             //  get last elements
  
    find(vect.begin(), vect.end(), 5) != vect.end()?
    cout<<"\nElement found":cout<<"\nElement not found\n";  //  find() returns iterator to last address if element not present
    
    sort( vect.begin(), vect.end());
    cout<<"\n\n";
    cout<<binary_search(vect.begin(), vect.end(), 5)<<endl; //  binary search is used if array is sorted.
    
    for_each(vect.begin(), vect.end(), square);             //  here square function is called with argument elements of containers.
    cout<<endl;
    int ar1[]{1, 2, 4, -1, -2, 3, 4, 5, 6, 0};
    
    int n_even = count_if(vect.begin(), vect.end(),[](int x){return x%2==0;});  //  count_if works on some condition it is same as for_each.
    cout<<"\nNumber of Even numbers are: "<<n_even<<endl;
//    all_of()
//    This function operates on whole range of array elements 
//    and can save time to run a loop to check each elements 
//    one by one. It checks for a given property on every element
//    and returns true when each element in range satisfies
//    specified property, else returns false.

    // Checking if all elements are positive 
    all_of(ar1, ar1+10, [](int x) { return x>0; })?
    cout << "All are positive elements" : 
    cout << "All are not positive elements";
    cout<<endl;
    
//    any_of()
//    This function checks for a given range if there’s even one element
//    satisfying a given property mentioned in function. Returns true 
//    if at least one element satisfies the property else returns false.
    // Checking if any element is negative 
    any_of(ar1, ar1+6, [](int x){ return x<0; })? 
          cout << "There exists a negative element" : 
          cout << "All are positive elements"; 
          
//    none_of()
//    This function returns true if none of elements satisfies 
//    the given condition else returns false.
    // Checking if no element is negative 
    none_of(ar1, ar1+6, [](int x){ return x<0; })? 
          cout << "No negative elements" : 
          cout << "There are negative elements";
}