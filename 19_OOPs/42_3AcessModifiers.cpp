/*Acess Modifiers/ Acess Specifiers :- are used to assign the accessibility to the class member, i.e. they 
set some restrictions on the class memebers so that they can't be directly accessed by the outside functions*/
//Three types Acess Modifiers are there => 1) Public,  2) Private,  3)Protected
//By default class memebers are private 
/*1. Public: All the class members declared under the public specifier will be available to everyone. The data 
members and member functions declared as public can be accessed by other classes and functions too. The public 
members of a class can be accessed from anywhere in the program using the direct member access operator (.) with the object of that class.*/

/*2. Private: The class members declared as private can be accessed only by the member functions inside the class. 
They are not allowed to be accessed directly by any object or function outside the class. Only the member functions 
or the friend functions are allowed to access the private data members of the class. */

/*3. Protected: The protected access modifier is similar to the private access modifier in the sense that it can’t be 
accessed outside of its class unless with the help of a friend class. The difference is that the class members declared 
as Protected can be accessed by any subclass (derived class) of that class as well.*/
#include<iostream>
using namespace std;

class Hero{
    //properties
    char name[100]; //by default name & health is private
    int health;
    public:
    char level; //since level & point are under public so level & point are public can access from anywhere
    int point;
    private:
    int speed;//here speed is private. But i can access speed inside this class

    //Methods/Behaviours
    void print(){ //functions
        cout<<level<<endl; //no error
    }
};

int main(){
    Hero Deku; //we only create Deku didn't give any values so properties store garbage value there
    //cout<<"Health is : "<<Deku.health<<endl; // i get error since health is private 
    cout<<"Level is : "<<Deku.level<<endl; 
    cout<<"Point is : "<<Deku.point<<endl;
    //cout<<"Speed is : "<<Deku.speed<<endl; // i get error since speed is private 


}