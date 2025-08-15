#include<iostream>
using namespace std;
int main(){
    int f = 110;
    int *p = &f;
    int **q = &p;
    int s = (**q)++ + 9; //post increment
    cout<<f<<"   "<<s<<endl;
}