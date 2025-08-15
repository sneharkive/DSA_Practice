/*Hierarchical Inheritance => In this type of inheritance, more than one subclass is inherited from a single base 
class. i.e. more than one derived class is created from a single base class.
One class serve as parent class for more than one class*/
#include<iostream>
using namespace std;
class Animal {
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking "<<endl;
    }
};
class Dog: public Animal{
    public:
    int random;
    void ran (){
        cout<<"Random"<<endl;
    }
};

class GermanShepherd: public Animal { 
    public:
    int r;
    void ra(){
        cout<<"Random from German Shepherd"<<endl;
    }
}; 

int main(){
    GermanShepherd g;
    g.speak();
    g.ra();
    cout<<g.age<<endl;

    Dog d;
    d.ran();
    d.speak();
    cout<<d.age<<endl;
    cout<<d.random<<endl;

}