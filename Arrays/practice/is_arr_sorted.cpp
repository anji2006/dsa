
/*
    Brute Force is 
    sorting the array and checking if all elements are same or not.

    Optimal is 
    comparing left ele <= right  , condition fails return false 

*/


#include <bits/stdc++.h>
using namespace std;


bool is_arr_sorted(int arr[], int n){
    for(int i=0; i<n-1; i++ ){
        if(arr[i] > arr[i+1]) return 0;
    }
    return 1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    cout << is_arr_sorted(arr, n);

}

/*

    TC:-- O(N)
    SC:--- O(1) + O(N) ==> O(N)

*/