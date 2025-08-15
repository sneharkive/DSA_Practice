#include<iostream>
using namespace std;
void update(int **p2){ //undo comment out to only one at a time then see change occur or not in the o/p
    //p2++; //no change

    //(*p2)++; // change in p

    //(**p2)++; //change in a
}
int main(){
    int a = 5; 
    int *p = &a;
    int **p2 = &p;

    cout<<endl<<"Before update : "<<endl;
    cout<<"a : " << a <<endl;
    cout<<"p : " << p <<endl;
    cout<<"p2 : " << p2 <<endl<<endl;

    update(p2);

    cout<<endl<<"After update : "<<endl;
    cout<<"a : " << a <<endl;
    cout<<"p : " << p <<endl;
    cout<<"p2 : " << p2 <<endl<<endl;
}