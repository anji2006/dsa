/*
    - Brute Force
        - using Two loops for making sub arrays 
        - TC-O(N^2) 
        - sol for both +ve and -ve values

    - optimal 
        - using unorder_map for storing prefix sum
        - SUM = X + target ==>>> X = sum - target
        - find X means we can remove the part which is equals to sum of X remaing is required sub array for sum.
        - TC- O(N) SC- O(N)
        - sol for both +ve and -ve also.

    



*/


#include<bits/stdc++.h>
using namespace std;

void brute_force_sol(int arr[], int n, int target){
    int max = 0, sum =0;
    for(int i=0; i<n; i++){
        sum = 0;
        for(int j=i; j<n; j++){
            sum += arr[j];
            if(sum == target && max < (j - i + 1)){
                max = j - i + 1;
            }
        }
    }

    cout << max << endl;

}


void optimal_sol(int arr[], int n, int target){
    int max =0, sum =0, len;

    unordered_map<int,int> map;
    
    map[0] = 0; // intilizing map 0 --- 0
    for(int i =0; i<n; i++){
        sum += arr[i];
        // if we found x = sum - target that will be the length
        if(map.find(sum - target) != map.end()){
            len = i - map[sum - target] + 1;
            if(max < len) max = len;
        }

        // adding to map if sum is not present in the map
        if(map.find(sum) == map.end()) map[sum] = i+1;
    }

    cout << max << endl;

}





int main(){

    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    brute_force_sol(arr, n ,k);
    optimal_sol(arr, n , k);
    return 0;
}