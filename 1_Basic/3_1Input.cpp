// cin doesnot take values of 'enter', 'tab' & 'space'.
//cin.get() take values of 'enter', 'tab' & 'space'.
#include<iostream>
using namespace std;
int main(){
    int a,b, c;
   /* cout<<"Enter two values: "<<endl;
    cin>>a>>b; 
    cout<<"Value of a is : "<< a<<endl;
    cout<<"Value of b is : "<< b<<endl;*/
    
    cout<<"Enter value to check cin.get"<<endl;
    c = cin.get();
    cout<<c<<endl;
    //if you give input any number it will be treated as charecter. 
    //cin.get() will show there ASCII Values
}