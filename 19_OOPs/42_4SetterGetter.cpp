#include<iostream>
using namespace std;
class Hero{
    public:
    char level;
    private:
    int health;
//to access health we will use getter & setter
    public:
    int getHealth() {
        return health;
    }
    void setHealth(int h) {
        health = h;
    }
//we can also create setter & getter for public properties although 
//we can access public properties without help of any setter & getter
    /*int getLevel() {
        return level;
    }
    void setLevel(char ch) {
        level = ch;
    }*/
};
int main(){
    Hero deku; //static allocation
    deku.level = 'A';
    deku.setHealth(90);
    cout<<"Level is : "<<deku.level<<endl; 
    cout<<"Health is : "<<deku.getHealth()<<endl;
    cout<<endl;

    Hero *guy = new Hero; //Dynamic allocation
    (*guy).setHealth(200);
    (*guy).level = 'O';
    cout<<"Level is : "<<(*guy).level<<endl; 
    cout<<"Health is : "<<guy->getHealth()<<endl; //alternate way to access
    cout<<endl;

//alternate way to access
    guy->setHealth(300);
    guy->level = 'A';
    cout<<"Level is : "<<guy->level<<endl; 
    cout<<"Health is : "<<(*guy).getHealth()<<endl;
}