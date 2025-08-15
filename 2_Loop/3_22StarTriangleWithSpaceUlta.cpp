#include<iostream>
using namespace std;
int main(){
    int n, i = 1;
    cout<<"Enter the value: ";
    cin>>n;
    while(i<=n){
        int space  = i - 1;
        while(space>0){
            cout<<"  ";
            space--;
        }
        int j = 1;
        while(i+j<=n+1){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
}