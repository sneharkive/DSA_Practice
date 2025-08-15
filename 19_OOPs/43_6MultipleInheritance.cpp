/*Multiple Inheritance => Multiple Inheritance is a feature of C++ where a class can inherit from more than one class. 
i.e one subclass is inherited from more than one base class.*/
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
class Dog{
    public:
    int random;
    void ran (){
        cout<<"Random"<<endl;
    }
};

class GermanSheherd: public Dog, public Animal {//here we inherite multiple class

}; 

int main(){
    GermanSheherd g;
    g.speak();
    g.ran();
    cout<<g.age<<endl;
    cout<<g.random<<endl;

}