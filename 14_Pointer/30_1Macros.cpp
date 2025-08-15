#include<iostream>
using namespace std;

#define PI 3.14 //Macros  //better way // will take any memory storage

int main(){
    int r = 5;
    /*double pi = 3.14; //we can also define pi that way but it will take some storage 
    double area = pi * r * r;*/

    double area = PI * r * r; //during compile "PI" will be replaced by 3.14
    cout<<"Area is  : "<<area <<endl;
}