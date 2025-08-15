#include<iostream>
using namespace std;
int power(int n, int index){
    if (index==0) return 1; 
    int ans = power(n, index/2);
    if(index%2==0)return ans * ans;
    else if(index%2!=0)return  ans * ans * n;

}
int main(){
    int n, index;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Enter the index : ";
    cin>>index;
    cout<<power(n, index);
}