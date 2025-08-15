//arr[] = {1,7,9,11};
//i/p => k = 2   //shift 2 at right side 
//o/p => arr[] = {9,11,1,7}
#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int>& nums, int k){
    vector<int> temp(nums.size());
    for(int i = 0; i < nums.size(); i++)
        temp[(i+k)%nums.size()] = nums[i];
    nums = temp;
}
int main(){
    int k;
    cout<<"Enter the k : ";
    cin>>k;
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(4);
    nums.push_back(2);
    nums.push_back(8);
    nums.push_back(5);
    k = k%nums.size();
    rotate(nums,k);
    for(int i:nums)cout<<i<<"  ";

}