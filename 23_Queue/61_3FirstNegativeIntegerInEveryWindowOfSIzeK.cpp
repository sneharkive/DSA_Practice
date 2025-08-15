/*First Negative integer in every window of size K
Given an array A[] of size N and a positive integer K, find the first negative
integer for each and every window (contiguous subarray) of size K*/
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

vector<long long> FirstNegativeInteger(long long int A[], long long int N, long long int K){
    deque<long long int> dq;
    vector<long long> ans;

    //process first window of k size 
    for(int i = 0; i < K; i++)
        if(A[i] < 0) dq.push_back(i);

    //store answer of first k size window 
    if(dq.size() > 0) ans.push_back(A[dq.front()]);
    else ans.push_back(0);

    //process for remaining windows
    for(int i = K; i < N; i++){
        if(!dq.empty() && i - dq.front() >= K) dq.pop_front(); //removal
        if(A[i] < 0) dq.push_back(i); //addition
        if(dq.size() > 0) ans.push_back(A[dq.front()]); //ans store 
        else ans.push_back(0); //ans store
    }
    return ans;
}

int main(){
    long long int K = 2, N = 5, arr[N] = {-8,2,3,-6,10};
    vector<long long> v = FirstNegativeInteger(arr, N, K);
    for(int num : v) cout<<num<<"  ";

}