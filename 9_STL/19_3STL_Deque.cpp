//Deque => Doubly Ended Queue
//Push & Pop operation can be done at both side (frint & back).
//Dynamic Memory Allocation. Random access posible here.
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d; //initialisation
    d.push_back(1);
    d.push_front(3);
    d.push_front(2);
    d.push_front(5);
    d.push_back(8);
    for(int i:d)cout<<i<<"  ";
    cout<<endl<<"Size => "<<d.size()<<endl;
    d.pop_front();
    for(int i:d)cout<<i<<"  ";
    cout<<endl<<"After pop Size => "<<d.size()<<endl;

    cout<<"Element at index 1 : "<<d.at(1)<<endl;

    cout<<"First Element : "<<d.front()<<endl;
    cout<<"Last Element : "<<d.back()<<endl;

    cout<<"Empty or not : "<<d.empty()<<endl; //No it is not empty

    //To delete a specific range only
    d.erase(d.begin(), d.begin()+2); //delete only 1st & 2nd element
    cout<<"After delete 1st & 2nd element :  ";
    for(int i:d)cout<<i<<"  ";
    cout<<endl<<"Size => "<<d.size()<<endl;

    d.clear(); //For delete everything
    for(int i:d)cout<<i<<"  "; //Nothing is here to print
    cout<<"Empty or not : "<<d.empty()<<endl; //yes it is empty
}