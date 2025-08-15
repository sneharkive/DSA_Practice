#include<iostream>
using namespace std;
int main(){
    int i = 5;
    int &j = i; //create a reference variable
//now we can access this memory block through j and also through i

    i++;
    cout<<j<<"    "<<i<<endl;
    j++;
    cout<<j<<"    "<<i<<endl;
}