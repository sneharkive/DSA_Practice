//2) Runtime Polymorphism (Dynamic Polymorphism) => Function Overriding 
/*Function Overriding / Method Overriding => is a feature that allows you to redefine the parent class method in child class based on
                         its requirement. In other words, whatever methods the parent class has by default are available in the child
                         class. But, sometimes, a child class may not be satisfied with parent class method implementation. The child
                         class is allowed to redefine that method based on its requirement. This process is called method overriding.*/
/*Rules for Method Overriding : 
1) The method of the parent class and the method of the child must have the same name.
2) The method of the parent class and the method of the child class must have the same parameters.
3) It is possible through inheritance only.*/

#include<iostream>
using namespace std;
class Animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
    void print(){
        cout<<"Printing "<<endl;
    }
};

class Dog: public Animal{
    public:
//Here we only overriding "speak" function 
//so "print" function will not change
    void speak(){
        cout<<"Berking"<<endl;
    }
//if we comment out above three lines then, if we all "obj2.speak();" output will be "speaking"   
};

int main(){
    Animal obj1;
    obj1.speak();
    obj1.print();
    Dog obj2;
    obj2.speak();
    obj2.print();

}