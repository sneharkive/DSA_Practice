//Subsets
/*Given an integer array nums of unique elements, return all possible subsets(the power set).
The solution set must not contain duplicate subsets. Return the solution in any order.*/
#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int>nums, vector<int>output, int index, vector<vector<int>>& ans){
    if(index >= nums.size()) { //base case
        ans.push_back(output);
        return;
    }
    solve(nums, output, index+1, ans);   //exclude

    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index+1, ans);
}

vector<vector<int>> subsets(vector<int>& nums){
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums,output, index, ans);
    return ans;
}
int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    vector<vector<int>>v = subsets(nums);

//to print 2d vector
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++) cout<< v[i][j]<<"  ";
        cout<<endl;
    }
}