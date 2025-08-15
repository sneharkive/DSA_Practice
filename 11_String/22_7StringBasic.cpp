//String stores its data internally in the form of a null-terminated C-string, but in normal usage does not allow you to access the null terminator 
#include<iostream>
//#include<string>
using namespace std;
int main(){
    string str = "Sneha Roy";//initialisation & declaration
    str.push_back('R'); //add character
    int l = str.length();
    cout<<str<<"   "<<l<<endl;
    str.pop_back(); //remove last character
    cout<<str<<endl<<endl;


    

}