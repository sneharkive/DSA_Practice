//default copy constructor do Shallow Copy
/*Shallow Copy :- A Shallow Copy create a new array, but it does not create new copies of the elements within the array. 
Instead, it points to the same elements as the original array.
Deep Copy :-  A deep copy creates a completly independent copy of both the array and its data. 
It does not share any data with the original array*/
#include<iostream>
#include<cstring>
using namespace std;

class Hero {
    int health; //it is private
    public:
    char *name; //dynamically
    char level;
    Hero(){ 
        cout<<endl<<"Simple Construction Called"<<endl<<endl;
        name = new char[100];
    }

    Hero(int health){ //1    //it is a parameter constructor
        cout<<"this : "<<this<<endl; //'this' is a pointer which point the created object
        this -> health = health;
    }

    Hero(int health, char level){//2    //this is a parameter constructor
        this -> health = health;
        this -> level = level;
    }

    int getHealth() {
        return health;
    }
    void setHealth(int h) {
        health = h;
    }
    int getLevel() {
        return level;
    } 
    void setname(char name[]) {
        strcpy(this->name, name); //'strcpy' function use to copy string. for this we need to include cstring as header file
    }
    void setLevel(char ch) {
        level = ch;
    }
    void print(){
        cout<<"[ Name : "<<this -> name<<" ,  ";
        cout<<"Health : "<<this -> health<<" ,  ";
        cout<<"Level : "<<this -> level<<" ]"<<endl<<endl;
    }

};

int main(){
    Hero hero1;
    hero1.setHealth(200);
    hero1.setLevel('A');
    char name[4] = "Guy";
    hero1.setname(name);
    hero1.print();

    //copy using default constructor (//default copy constructor do Shallow Copy)
    Hero hero2(hero1);
    //Hero hero2 = hero1; //another way to copy //it is called Copy Assignment Operator
    hero2.print();

    hero1.name[0] = 'K'; //change in hero1
    hero1.print();

    hero2.print(); //hero1 change effect hero2 this is called shallow copy
    //in shallow copy we access the same memory using different names


}