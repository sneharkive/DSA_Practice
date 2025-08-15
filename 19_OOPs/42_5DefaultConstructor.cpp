#include<iostream>
using namespace std;
class Hero{
    public:
    int health;
    int speed;
    Hero(){ //here we create a simple constructor. So default constructor no longer exist
        cout<<"Simple Construction Called"<<endl;
    }
}; 

int main(){
    cout<<"I am printing this to give you better understanding."<<endl<<endl;
    Hero deku; //object created statically
    cout<<endl<<"HI"<<endl<<endl;

    Hero *guy = new Hero; //object created dynamically

/*Hero deku => object create => constructor => constructor object creation k time pe invoke hota hai
                                            => constructor has no return type
                                            => constructor no i/p parameter*/
}