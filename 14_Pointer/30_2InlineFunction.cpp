//Inline Function => are used to reduce the function call overhead
#include<iostream>
using namespace std;

inline int max(int& a, int& b){
    return (a>b) ? a : b;  //ternary operator => ans = condition ? expression1 : expression2
}

int main(){
    int a = 1, b = 2; 
    int ans = 0;

    ans = max(a,b);  //max(a,b) will replace by (a>b) ? a : b; during compilation
    cout<<ans<<endl;

    a = a + 3;
    b = b + 1;

    ans = max(a,b);
    cout<<ans<<endl;
}