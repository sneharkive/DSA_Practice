/*Single Inheritance => In single inheritance, a class is allowed to inherit from only one class. 
i.e. one subclass is inherited by one base class only.*/
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

};
int main(){
    Dog d;
    d.speak();
    cout<<d.age<<endl;
}