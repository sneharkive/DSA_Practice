//default copy constructor do Shallow Copy
#include<iostream>
using namespace std;

class Hero {
    int health; //it is private
    public:
    char level;
    Hero(){ //here we create a constructor. So default constructor no longer exist
        cout<<"Construction Called"<<endl;
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
    void print(){
        cout<<"Health : "<<this -> health<<endl;
        cout<<"Level : "<<this -> level<<endl<<endl;
    }
};

int main(){
    Hero neji(100, 'A');
    neji.print();
//copy construtor  => it is created by itself, but if you want you can create it by yourself
    Hero kakashi(neji); //we copy neji put it to kakashi
    //so now kakashi.gethealth()==neji.getHealth()  and  kakashi.level==neji.level
    kakashi.print();
}