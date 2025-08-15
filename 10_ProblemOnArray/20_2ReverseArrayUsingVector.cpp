#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> v, int m){
    for(int s=m+1, e=v.size()-1; s<=e; s++,e--)
        swap(v[s], v[e]);
    return v;
}
int main(){
    vector<int> v;
    int n, a, m;
    cout<<"Enter size of vector : ";
    cin>>n;
    cout<<"Enter the values : "<<endl;
    for(int i = 0; i < n; i++){ //Taking Inputs for Vector
        cin>>a;
        v.push_back(a);
    }
    cout<<"Enter the index : "<<endl;
    cin>>m;
    vector<int> ans = reverse(v, m);
    for(int i = 0; i < n; i++){
        cout<<ans[i]<<" ";
    }
}