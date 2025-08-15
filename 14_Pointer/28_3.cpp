#include<iostream>
using namespace std;
void update2(int &n){ //Pass By Refernce 
    n++; //Here n is reference variable
}
//since we can pass refernce in funtion so we should also able to return refernce fuction
int& refVar(int a){
    int num = a+5;
    int& ans = num; //here ans is local variable, so it can't survive outside the fuction
    return ans; //then it will not work properly will get error may be 
//it is bad prctice, avoid it
} 
//similarly for pionter type return
int* point(int n){
    int*ptr = &n;
    return ptr; //bad practice
}
int main(){
    int i = 5;
    cout<< i <<endl;
    update2(i);
    cout<<i<<endl;

    refVar(i);

}