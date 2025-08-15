/*We can define class members static using static keyword. When we declare a member of a class as static 
it means no matter how many objects of the class are created, there is only one copy of the static member.
A static member is shared by all objects of the class. All static data is initialized to zero when the 
first object is created, if no other initialization is present. We can't put it in the class definition 
but it can be initialized outside the class as done in the following example by redeclaring the static variable, 
using the scope resolution operator :: to identify which class it belongs to.
By declaring a function member as static, you make it independent of any particular object of the class. 
A static member function can be called even if no objects of the class exist and the static functions are 
accessed using only the class name and the scope resolution operator ::.
A static member function can only access static data member, other static member functions and any other 
functions from outside the class.
Static member functions have a class scope and they do not have access to the this pointer of the class. 
You could use a static member function to determine whether some objects of the class have been created or not.*/
#include<iostream>
#include<cstring>
using namespace std;
 class Hero {
    public:
    int health;
    char *name; 
    char level;
    static int timeToComplete; //static member of class
    Hero(){ 
        cout<<endl<<"Simple Construction Called"<<endl<<endl;
        name = new char[100];
    }
    Hero(int health, char level){
        this -> health = health;
        this -> level = level;
    }
    void print(){
        cout<<"[ Name : "<<this -> name<<" ,  ";
        cout<<"Health : "<<this -> health<<" ,  ";
        cout<<"Level : "<<this -> level<<" ]"<<endl<<endl;
    }
};

//how to initialised static member of class => datatype className :: filedName = value
int Hero :: timeToComplete = 5; //initialisation 

int main(){
    cout<<Hero::timeToComplete<<endl; //static member can be print without even create any object
//since static members do not belong to object they belong to the class
//but we can also access it through object which belong the class
//but better to access it through class
    Hero a; //create an object
    cout<<a.timeToComplete<<endl<<endl; //we print it by using object
//we can also modify it using object
    Hero b;
    b.timeToComplete = 10; //modified
    cout<<b.timeToComplete<<endl;
    cout<<a.timeToComplete<<endl<<endl;

//modified using class => it is better this way
    Hero :: timeToComplete = 15;
    cout<<a.timeToComplete<<endl;

}