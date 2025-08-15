#include<iostream>
#include"42_2Hero.cpp" //i define class in different file & i include it here
using namespace std;

class Empty{
//empty class
};

class Hero1{
    int health; //propertie/state
};

int main(){ 
    Hero1 h1; //creation of object
    cout<<"Size : "<<sizeof(h1)<<endl;

    Empty h2;
    cout<<"Size of Empty Class : "<<sizeof(h2)<<endl; //empty class size is 1. This 1byte is given to track it down & for its identification

    Hero h3;
    cout<<"Size : "<<sizeof(h3)<<endl;
}