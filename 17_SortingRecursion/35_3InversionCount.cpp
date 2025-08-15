/*Inversion Count for an array indicates _ How far (or close) the array is from being sorted. If the array is already sorted, 
then the inversion count is 0, but if the array is sorted in reverse order, then inversion count is the maximum.
Given an array arr[]. The task is to find the inversion count of arr[].Where two elements arr[i] and arr[j] form 
an inversion if arr[i] > arr[j] and i < j.  Ex:-
i/p => arr[] = {8,4,2,1}
o/p => 6
Explanation :- Given array has six inversion: (8,4),(4,2),(8,2),(8,1),(4,1),(2,1).

Ex:-   i/p => arr[] = {1,20,6,4,5}
       o/p => 5
explanation :- Given array has five inversions: (20,6),(20,4),(20,5),(6,4),(6,5)*/
#include<iostream>
using namespace std;