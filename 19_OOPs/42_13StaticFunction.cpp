/*Static Function => 1) we can call it through class no need to create any object
                     2) "this"(pointer to current object) keyword is not present in static function (since there is no object)
                     3) static function can access static members only*/

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
    static int random(){
        //cout<<this-> health <<endl; //will give an error //there is no "this" keyword in here
        //return health; //will get error
        //cout<<health <<endl; //will give an error //since static function can access static members only
        return timeToComplete; //no error since it is an static member
    }
};

int Hero::timeToComplete = 5;

int main(){
    cout<< Hero::random()<<endl;
}