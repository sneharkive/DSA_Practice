//Set store one value only once. If we store 10 5 times it will only store 10 once.
//Set stores UNIQUE Elements.
//We can't modify any element, we can only add them or delete them.
//Element will be return in sorted order.
//Unorder Set is also exist. In this type of Set element comes out randomly.
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(7);
    s.insert(3);
    s.insert(2);
    s.insert(8);
    s.insert(5);
    s.insert(2);
    for(auto i:s) cout<<i<<"  "; //Print in Sorted order & unique values only
    cout<<endl;
    set<int>::iterator it = s.begin(); //it is at begin
    it++; //it is at begin + 1
    it++; //it is at begin + 2
    s.erase(it); //will delete 3rd element
    cout<<"After delete 3rd element : ";
    for(auto i:s) cout<<i<<"  ";
    cout<<endl<<"2 is present or not : "<<s.count(2)<<endl; //To check a specific element present or not
    cout<<"10 is present or not : "<<s.count(10)<<endl;

    set<int>::iterator itr = s.find(3);
    for(auto i = itr; i != s.end(); i++) cout<<*i<<"  "; //print from 3 to rest part
}