#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(6);
    v.push_back(7);
    cout<<"Finding 6 : "<<binary_search(v.begin(), v.end(), 6) <<endl; //using binary search
    cout<<"Lower Bound : " <<lower_bound(v.begin(), v.end(),6) - v.begin()<<endl;
    cout<<"Upper Bound : " <<upper_bound(v.begin(), v.end(),6) - v.begin()<<endl;

    //we can also find max, min value & also can do swapping
    int a = 2, b = 8;
    cout<<"Max : "<<max(a,b)<<endl;
    cout<<"Min : "<<min(a,b)<<endl;

    swap(a,b);
    cout<<"a is : "<<a<<endl;

    string s = "abcd";
    reverse(s.begin(), s.end()); 
    cout<<"Reverse String : "<<s<<endl;

    rotate(v.begin(), v.begin()+1, v.end());
    for(int i:v) cout<<i<<"  ";
}