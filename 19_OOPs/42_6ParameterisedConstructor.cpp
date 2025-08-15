//Parameterized Constructors -> Constructors that accept parameters.
//They enable programmers to create obbjects with specific properties and attribites by passing arguments. 
//Multiple Parameterized Constructors can be created
//whenever we make a constructor by ourselt default constructor die
#include<iostream>
using namespace std;

class Hero {
    int health; //it is private
    public:
    char level;

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
};

int main(){
    Hero deku(10); //create object statically and we pass value of health
    cout<<"Address of deku : "<<&deku<<endl;
    deku.getHealth();
    cout<<deku.getHealth()<<endl<<endl;

    Hero *guy = new Hero(12);//create object dynamically
    cout<<"Address store in guy : "<<guy<<endl;
    cout<<guy->getHealth()<<endl<<endl;
    

    Hero kakashi(100,'A'); //here we call 2nd parametric constructor & we pass value of health and level
    cout<<kakashi.getHealth()<<endl;
    cout<<kakashi.level<<endl<<endl;


//whenever we make a constructor by ourselt default constructor die
//since here we construct Parameterized Constructors only(we didn't create any simple constructor) so we must pass some arguments(values)
    //Hero naruto; //it will give error
//if we didn't construct any constructor then default constructor exsist & above line will not be an error.
}