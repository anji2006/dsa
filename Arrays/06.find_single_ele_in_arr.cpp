/*

    - Brute Force
        - find max of array and Take array of size max
        - iterate thourgh element increate the index count
        - drawback is is max large compard to lenght of array it takes arrr[max] size
        -- TC:- O(N) SC-O(MAX)
    
    - optimal 
        - using unsorted map it adding and finding is o(1) and take n/2 size at max
        - TC:- O(N) SC- O(N)

    - better 
        - using XOR operation as n ^ n gives 0 and n ^ x ^ x ^ n ^ y ===> y only as same value will cancel
        - TC- O(N)   SC- O(1)
    
*/

#include<bits/stdc++.h>
using namespace std;

void brute_find_single_ele(int arr[], int n){
    int max = arr[0];
    for(int i = 0; i<n; i++) {
        if(max < arr[i]) max = arr[i];
    }

    int v[max] = {0};
    for(int j =0; j<n; j++) v[arr[j]] ++;

    for(int i=0; i<n; i++) {
        if(v[arr[i]] == 1){
            cout << arr[i];
            break;
        }
    }
}


void optimal_find_single_ele(int arr[], int n){
    unordered_map<int, int> m;
    for(int i =0; i<n; i++) m[arr[i]]++ ;

    for(auto pair : m){
        if(pair.second == 1) {
            cout << pair.first;
            break;
        }
    }

}


void better_find_single_ele(int arr[], int n){
    int temp = 0;
    for(int i=0; i<n; i++ ) temp=  temp ^ arr[i];
    cout << temp;
}




int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i<n; i++) cin >> arr[i];

    brute_find_single_ele(arr, n);
    cout << endl;
    optimal_find_single_ele(arr, n);
    cout << endl;
    better_find_single_ele(arr,n);
    cout << endl;   
    return 0;
}




