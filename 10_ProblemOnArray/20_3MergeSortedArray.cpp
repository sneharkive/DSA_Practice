//Need to merge two sorted array. Store it into a 3rd array.
#include<iostream>
#include<vector>
using namespace std;
void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i = 0, j = 0, k = 0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]) arr3[k++] = arr1[i++]; //It is a shortcut way to write
        /*Meanig of the above line : 
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i]
            i++;
            k++;;
        }*/
        else if(arr1[i]>arr2[j]) arr3[k++] = arr2[j++];
    }
    while(i<n) arr3[k++] = arr1[i++];
    while(j<m) arr3[k++] = arr2[j++];
}
int main(){
    int n = 5, arr1[n] = {1,2,4,7,8}, m = 3, arr2[m] = {3,6,9}, arr3[m+n];
    merge(arr1, n ,arr2, m, arr3);
    for(int i = 0; i < m+n; i++)cout<<arr3[i]<<"  ";
}