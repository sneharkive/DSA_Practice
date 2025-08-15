#include<iostream>
using namespace std;
void print(int n){
    if (n==0) return;
    print(n-1);  //Head Recursion
    cout<<n<<endl;
    return;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    print(n);
}