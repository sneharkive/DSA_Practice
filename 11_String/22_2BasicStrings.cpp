#include<iostream>
using namespace std;
//to find size of character array
int lengthChar(char arr[]){//for char array no need to pass size of the array
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++) count++;
    return count;
}
int main(){
    //Character Array 
    char arr[] = {'H', 'e', 'l', 'l', 'o','\0'}; //'\0' we use it as check mark
    for(int i = 0; arr[i]!='\0'; i++) cout<<arr[i];
    cout<<endl<<"The length of the above array is : "<<lengthChar(arr)<<endl;

    //we also initialise it as
    char brr[] = "Sneha Roy"; 
    //By default compiler take '\0' in the end in this case
    //That's why Size of brr is (number of element + 1)
    for(int i = 0; brr[i]!='\0'; i++) cout<<brr[i];
    cout<<endl<<"The length of the above array is : "<<lengthChar(brr)<<endl;

//Access any individual characters
    cout<<brr[2]<<endl;
    int a = brr[8];//typecasting
    cout<<a<<endl; // will print ASCII Value

//Modify any individual characters 
    brr[5] = '_';
    brr[7] = 65;
//print (Will print here the modified string)
    cout<<brr;
}