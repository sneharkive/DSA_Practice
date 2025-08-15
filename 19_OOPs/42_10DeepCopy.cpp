//Created Copy Constructor do Deep Copy
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
        cout<<endl<<"Simple Construction Called."<<endl<<endl;
        name = new char[100];
    }
    //copy constructor
    Hero(Hero& temp){//pass by refernce
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name); 
        this->name = ch;
        this->health = temp.health; 
        this->level = temp.level;
    }//since here we create copy constructor by ourself so by default copy constructor don't exist anymore
    
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

    //copy using created copy constructor (//created copy constructor do Deep Copy)
    Hero hero2(hero1);
    //Hero hero2 = hero1; //another way to copy
    hero2.print();

    hero1.name[0] = 'K'; //change in hero1
    hero1.print();

    hero2.print(); //no change in hero2 it is called deep copy


}
    