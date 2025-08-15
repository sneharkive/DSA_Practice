#include<iostream>
using namespace std;
int power(){
    int a, index, ans = 1;
    cin>>a>>index; // Taking input inside the function
    for(int i = 1; i <= index; i++) ans = ans * a;
    return ans;
}
int main(){
    int ans = power();
    cout<<"Answer is : "<<ans;
}