#include<iostream>
using namespace std;
void update1(int n){ //Pass By Value
    n++; //make a copy  //so change will occur in this copy only
}

void update2(int &n){ //Pass By Refernce 
    n++; //Here n is reference variable
}

int main(){
    int i = 5;
    update1(i);
    cout<< i <<endl;
    update2(i);
    cout<<i<<endl;
}