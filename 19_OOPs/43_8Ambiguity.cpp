/*In multiple inheritances, when one class is derived from two or more base classes then 
there may be a possibility that the base classes have functions with the same name, and 
the derived class may not have functions with that name as those of its base classes. 
If the derived class object needs to access one of the similarly named member functions 
of the base classes then it results in ambiguity because the compiler gets confused about 
which base’s class member function should be called.*/
//To solve this ambiguity scope resolution operator is used denoted by ' :: '

#include<iostream>
using namespace std;
class A{
    public:
    void func(){
        cout<<"I am A"<<endl;
    }
};

class B{
    public:
    void func(){
        cout<<"I am B"<<endl;
    }
};

class C: public A, public B {

};
int main(){
    C obj;
    //obj.func(); //it will give error since compiler donot know which "func" function should use 
    //since there is two "func" function one in "A" another one is in "B". So must specify it

    obj.A::func(); //by using scope resolution operator
    obj.B::func();
}