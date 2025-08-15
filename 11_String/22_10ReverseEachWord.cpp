//Need to reverse each word of a sentence. 
//i/p => My name is Sneha
//o/p => yM eman si ahenS
//Donot use extra string
#include<iostream>
using namespace std;

void ReverseWord(char str[]){
    int s = 0, e = 0, c; 
    while(str[e-1] != '\0'){
        s = e;
        while((str[e] != ' ') && (str[e] != '\0')) e++;
        e--;
        c = e;
        while(s<e) swap(str[s++], str[e--]);
        e = c + 2;
    }
    return;
}

int main(){
    char str[] = "My name8 is Sneha*";
    ReverseWord(str);
    cout<<str;
}