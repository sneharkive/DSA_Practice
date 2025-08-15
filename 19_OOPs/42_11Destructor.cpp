//Destructor is used to memory deallocate(or free).
/*A Destructor is a member function that is invoked automatically when the object goes out of scope or is explicitly 
destroyed by a call to delete or delete[]. A destructor has the same name as the class and is proceded by a tilde(~). */
//We can create it manually otherwise as default it will be there
//Properties of Destructor :- 1) Name same as class  2) No return type  3) No i/p parameter
//when we create destructor by ourself the default destructor die
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


    ~Hero(){
        cout<<"Destructor being called."<<endl;
    }
};

int main(){
    Hero a; //static
//For Static allocation destructor called automatically

    Hero *b = new Hero(); //dynamic
//For Dynamic allocation we need to called destructor manually
//that's why as output we only get    "Destructor being called."   once
//to call destructor we need to write "delete b;"
    delete b; // manually call destructor
}