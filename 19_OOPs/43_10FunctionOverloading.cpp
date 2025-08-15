//1) Compile-Time Polymorphism => can be achived by => 1) Function Overloading   2) Operator Overloading
//Function Overloading => using multiple funtions with same name by giving different input(By changing input arguments)
#include<iostream>
using namespace std;
class A{
    public:
    void sayHello(){
        cout<<"Hello World"<<endl;
    }
    /*void sayHello(){
        cout<<"Hello World"<<endl;
    }*/ //it will give error during "sayHello" function call
    void sayHello(string name){
        cout<<"Hello "<<name<<endl;
    }
    /*int sayHello(string name){
        cout<<"Hello "<<name<<endl;
        return 1;
    }*///we cannot overload funtions by changing return type only

    int sayHello(string name, int n){
        cout<<"Hello "<<name<<endl;
        return n;
    }
};
int main(){
    A obj;
    obj.sayHello();
    obj.sayHello("Sneha");
    obj.sayHello("hi", 2);
}