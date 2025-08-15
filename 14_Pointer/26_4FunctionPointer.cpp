#include<iostream>
using namespace std;
void update(int a){ //Pass by value. 
    a++; //change occur in this function only, not in the main function
}//since this function make its own 'a'.
 
void uPointer(int *p){ //pass by reference. we sent the address here so the function change the value at this specific 
    (*p)++; //so in the main function the value will be changed
}

void AddressUpdate(int *p){ 
    p++; //change occur in this function only, not in the main function
}
int main(){
    int a = 5;
    update(a);
    cout<<"After Update Normally : "<< a <<endl; //pass by value
    int *p = &a;
    uPointer(p);
    cout<<"After Update through pointer : "<<a<<endl; //pass by reference

    cout<<"Before update the address of a : "<<p<<endl;
    AddressUpdate(p);
    cout<<"After update the address of a : "<<p<<endl; //no change

}