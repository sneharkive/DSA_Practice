//This LIST STL is made by doubly linked list(Two pointer is present at doubly linked list. One at front other one is at back)
//Direct access is not possible, we need to traverse to the element to access it.
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> n(5,10); //initialisation & declaration. 
    for(int i:n) cout<<i<<"   ";
    cout<<endl;
    list<int> l;//initialisation
    l.push_back(1);
    l.push_front(3);
    l.push_front(2);
    l.push_front(5); 
    l.push_back(8);
    l.push_back(9);
    l.push_front(7);
    cout<<"print l : ";
    for(int i:l)cout<<i<<"  ";
    cout<<endl<<"Size => "<<l.size()<<endl;
    list<int>c(l); //copy l and paste it to c
    cout<<"Print c : ";
    for(int i : c) cout<<i<<"  ";
    cout<<endl;
    l.pop_front();
    cout<<"Print l after POP : ";
    for(int i:l)cout<<i<<"  ";
    cout<<endl<<"After pop Size => "<<l.size()<<endl;

    cout<<"First Element : "<<l.front()<<endl;
    cout<<"Last Element : "<<l.back()<<endl;

    cout<<"Empty or not : "<<l.empty()<<endl; //No it is not empty

    //To delete a specific range only
    list<int>::iterator it = l.begin(); //it is at 1st element
    it++; //it is at 2nd element
    it++;//it is at 3rd element
    l.erase(it); //delete 3rd element
    //l.erase(l.begin()); //to delete 1st element
    cout<<"After delete 3rd element :  ";
    for(int i:l)cout<<i<<"  ";
    cout<<endl<<"Size => "<<l.size()<<endl;

    l.clear(); //For delete everything
    for(int i:l)cout<<i<<"  "; //Nothing is here to print
    cout<<"Empty or not : "<<l.empty()<<endl; //yes it is empty
}