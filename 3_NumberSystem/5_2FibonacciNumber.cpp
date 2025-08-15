//0, 1, 1, 2, 3, 5, 8, 13, 21, ..............
#include<iostream>
using namespace std;
int main(){
    int a = 0, b = 1, sum = 0, n;
    cout<<"Enter the term: "<<endl;
    cin>>n;
    cout<<a <<" "<<b<<" ";
    for(int i = 1; i <= n; i++){
        sum = a + b;
        cout<<sum<<" ";
        a = b;
        b = sum;
    }
    return 0;
}