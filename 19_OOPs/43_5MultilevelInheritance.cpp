//Multilevel Inheritance => In this type of inheritance, a derived class is created from another derived class.
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

class GermanSheherd: public Dog{

};
int main(){
    GermanSheherd g;
    g.speak();
    g.ran();
    cout<<g.age<<endl;
    cout<<g.random<<endl;

}