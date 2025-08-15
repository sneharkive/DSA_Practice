#include<iostream>
#include<math.h>
using namespace std;
int main(){
    char ch = 'a';
    int num = 1;
    while(1){
        switch (num)
        {
        case '1': cout<<"Charecter is one"<<endl;
                break;
        case 1: cout<<"The number is 1"<<endl;
                break;
        default: cout<<"It is default case"<<endl;
                break;
        }
        exit(1);
    }
    
}