
/*
    Brute Force 
        - find duplicated using two loops, take an vector 
        - iterate throug the array, if val not present in vector add it
        - fix all values in vector into array 

    Optimal:
        - using set iterater through all elements add to set
        - iterate through set add to array

*/





#include<bits/stdc++.h>
using namespace std;

//Brute Force
void remove_duplicates_in_arr(int arr[], int n){
    vector<int> v1;
    bool is_duplicate;

    for(int i=0; i<n; i++){
        is_duplicate = true;
        for(auto val : v1){
            if(arr[i] == val) {
                is_duplicate = false;
                break;
            }
        }
        if(is_duplicate) v1.push_back(arr[i]);
    }

    int temp =0;
    for(auto val : v1){
        // cout << val << " ";
        arr[temp] = val;
        temp++;
    }   

}

// Optimal 
void remove_duplicates_in_arr_optimal(int arr[], int n){
    set<int> s;
    bool is_duplicate;

    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }

    int temp =0;
    for(auto val : s){
        // cout << val << " ";
        arr[temp] = val;
        temp++;
    }   

}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    // remove_duplicates_in_arr(arr,n);
    remove_duplicates_in_arr_optimal(arr,n);

    for(int j = 0; j<n; j++ ) cout << arr[j]  << " ";


}

/*

    Brute Force TC-- O(N^2) SC- O(N) + O(N) => O(N^2)

    Optimal :
        - O(N) for Iterate, O(logX) for inserting int to set =>>> O(N*logX)
        - and iter thorugh set O(X) soo over all ==>> O(N*logx) +O(X) worst case X = N
        - O(N*logN) + O(N) ==> O(NlogN)
        - Space complexity ==> O(N) ignoring reading input.

*/