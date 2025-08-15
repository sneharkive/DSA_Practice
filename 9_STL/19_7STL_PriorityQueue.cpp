//By default First Element is always greatest. Because this STL based on MAX HEAP. Come out element is always maximum.
//To create priority queue with min heap we need to write it down follwing way.
//In min heap minimum value will come out first.
#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> maxi; //Max Heap
    priority_queue<int, vector<int> , greater<int> > mini; //Min Heap
    
    maxi.push(1);
    maxi.push(3);
    maxi.push(5);
    maxi.push(2);
    int n = maxi.size();
    for(int i = 0; i < n; i++){
        cout<<maxi.top()<<"  ";
        maxi.pop();
    }cout<<endl;
    cout<<"Maxi is empty or not : "<<maxi.empty()<<endl;

    mini.push(1);
    mini.push(3);
    mini.push(5);
    mini.push(2);
    int m = mini.size();
    for(int i = 0; i < m; i++){
        cout<<mini.top()<<"  ";
        mini.pop();
    }cout<<endl;
    cout<<"Mini is empty or not : "<<mini.empty()<<endl;
}