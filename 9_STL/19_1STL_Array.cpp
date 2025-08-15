#include<iostream>
#include<array> //for array
using namespace std;
int main(){
    int normal[4] = {11,15,25,18}; //Normal way declaration & initialisation

    array<int,6> a = {1,2,3,4,5,6};
    int size = a.size(); //to find size
    for(int i = 0; i < size; i++) cout<<a[i]<<"   "; //Print the array
    cout<<endl<<"Element at index 2 : "<<a.at(2)<<endl; //Random access
    cout<<"Empty or not : "<<a.empty()<<endl; //will return boolean 
    //print 1st and last element
    cout<<"First Element : "<<a.front()<<endl;
    cout<<"Last Element : "<<a.back()<<endl;

}