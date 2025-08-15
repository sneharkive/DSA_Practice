//Total amount is given, need to find how many 100/-,  50/-,  20/-,  1/- rupes paisa needed
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int amount, num = 1, note = 0;
    cout<<"Enter the amount : ";
    cin>>amount;
    switch(num){
        case 1: note = amount / 100;
            amount = amount - (note * 100);
            cout<<note<<"  Rs.100 note required."<<endl;
        case 2: note = amount / 50;
            amount = amount - (note * 50);
            cout<<note<<"  Rs.50 note required."<<endl;
        case 3: note = amount / 20;
            amount = amount - (note * 20);
            cout<<note<<"  Rs.20 note required."<<endl;
        case 4: note = amount / 1;
            amount = amount - (note * 1);
            cout<<note<<"  Rs.1 note required."<<endl;
    }
}