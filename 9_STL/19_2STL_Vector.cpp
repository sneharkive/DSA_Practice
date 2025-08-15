//VECTOR => Vector is a dynamic array with contigious memory allocation.
/*Dynamic Memory Allocation in VECTOR : Whenever vector is full, capacity of vector 
become double meaning let, capacity of vector is 4. The moment we want store 5th element
in this vector, it will create another vector with capacity 4*2 = 8, then copy all the 
element from the 1st vector and paste it to the 2nd vector(vector with capacity 8) then
1st vector will delete. Thet's how dynamic memory allocation occur in vector*/
//Size = Total number of element present
//Capacity => Total number of element can be stored
//During clear operation size = 0 but capacity being same as before
#include<iostream>
#include<vector> //for vector
using namespace std;
int main(){
    vector<int> a(5,1); //Initialisation and decleration. Size = 5 & all element in the vector is 1
    for(int i:a)cout<<i<<"  "; //print vector
    cout<<endl;
    vector<int> c(a); //copy a vector to c
    for(int i:c)cout<<i<<"  "; //print vector

    vector<int> v; //Initialisation. Now capacity of this vector is 0
    cout<<endl<<"Capacity : "<<v.capacity()<<endl; //Capacity = 0

    v.push_back(1); //Giving/adding one element to the vector
    cout<<"Capacity : "<<v.capacity()<<endl; //Capacity = 1

    v.push_back(2);
    cout<<"Capacity : "<<v.capacity()<<endl; //Capacity = 1 * 2 = 2

    v.push_back(3);
    cout<<"Capacity : "<<v.capacity()<<endl; //Capacity = 2 * 2 = 4
    cout<<"Size : "<<v.size()<<endl; //Size = 3

    cout<<"Element at index 1 : "<<v.at(1)<<endl; //Random Access

    cout<<"First Element : "<<v.front()<<endl;
    cout<<"Last Element : "<<v.back()<<endl;

    for(int i:v)cout<<i<<"  "; //print vector
    
    v.pop_back();//delete last element
    cout<<endl<<"Vector after pop : ";
    for(int i:v)cout<<i<<"  "; //print vector after pop

    v.clear(); // size = 0 but capacity same as before ao, capacity = 4
    cout<<endl<<"Capacity after clear operation : "<<v.capacity()<<endl;
    cout<<"Size after clear operation : "<<v.size()<<endl; 

    cout<<"Empty or not : "<<v.empty()<<endl; //v vector is empty now
}