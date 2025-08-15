#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char st[40], sr[40];
    //cout<<"Now : ";
    //cin>>st; //only take the 1st word as input
//'cin' stop the execution whenever you give 'space' , 'tab' , 'newline/enter'
    cout<<"now : ";
    gets(sr); //can take input as an entire sentence (including 'space' & 'tab')
    //cout<<st;
    cout<<sr;
}