//NOT WORKING


#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int>v){
    int s =0, e = v.size()-1;
    while(s<e) swap(v[s++], v[e--]);
    return v;
}
vector<int> sum(vector<int>v1, int n1, vector<int>v2, int n2){
    int i = n1 - 1, j = n2 - 1, carry = 0;
    vector<int> ans;
    while(i>=0 && j>=0){
        int sum = v1[i] + v2[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--; 
        j--;
    }
    while(i>=0){ //First case
        int sum = v1[i] + carry;
        carry = sum/10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0){ //Second case
        int sum = v2[j] + carry;
        carry = sum/10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    while(carry!=0){
        int sum = carry;
        carry = sum/10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    return reverse(ans);
}

int main(){
    int n1, n2, a1, a2;
    cout<<"Enter size of the two arrays : ";
    cin>>n1>>n2;
    vector<int> v1(n1);
    vector<int> v2(n2);
    cout<<"Enter the values of 1st array : "<<endl;
    for(int i = 0; i < n1; i++){ //Taking Inputs for Vector
        cin>>a1;
        v1.push_back(a1);
    }
    cout<<"Enter the values of 2nd array : "<<endl;
    for(int i = 0; i < n2; i++){ //Taking Inputs for Vector
        cin>>a2;
        v2.push_back(a2);
    }
    vector<int> arr;
    arr = sum(v1, n1, v2, n2);
    for(int i:arr)cout<<i<<"  ";

}