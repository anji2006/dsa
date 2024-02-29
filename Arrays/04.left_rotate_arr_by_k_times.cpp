/*
    - This pattern same for moving 0 to end/start 
    - find element to place at x position after 1st iteration
*/



#include<bits/stdc++.h>
using namespace std;


void left_rotate_arr_by_k_times(int arr[], int n, int k){
    int rotations = k%n;
    int temp_arr[rotations];
    // storing first x ele
    for(int i =0 ; i < rotations; i++) temp_arr[i] = arr[i];
    
    // moving remaining elements to front
    for(int j = 0;j<n - rotations; j++) arr[j] = arr[rotations+j];

    // put stored element at the end
    for(int k = 0; k< rotations; k++) arr[ n - rotations + k] = temp_arr[k]; 



}

int main(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    left_rotate_arr_by_k_times(arr,n, k);

    for(int j = 0; j<n; j++ ) cout << arr[j]  << " ";


}


/*

    TC:-- O(2N) === O(N)
    SC:-- O(k) for storing k elements 
*/