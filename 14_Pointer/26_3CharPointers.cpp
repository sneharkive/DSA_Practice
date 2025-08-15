#include<iostream>
using namespace std;
int main(){
    char temp = 'x';
    char *p = &temp;
    cout<<temp<<endl;
    cout<<p<<endl;  //since temp represent a single so there is no '\0' in the end
//now if you want to print it through pointer it will add some extra character
//because when we print char through pointer, pointers keep printing until it get '\0' 


    int arr[5] = {1,2,3,4,5};
    char ch[10] ="abcde";
    char *c = &ch[0];


//for int array & char array , cout function implemented differently
    cout<<arr<<endl; //will print address of the 1st block of the array
    cout<<ch<<endl; //will print the elements of the array until you get '\0'
    cout<<c<<endl; //will print the elements of the array until it gets '\0'

    char *r = "xyz"; //Do not do this 

}