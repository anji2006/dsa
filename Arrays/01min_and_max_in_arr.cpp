/*
    Brute Force is sorting array and picking last and first elements.
    In Brtue Force Time complexity is o(NlogN)

    - We can search entire array and find min and max values.

*/

#include <bits/stdc++.h>
using namespace std;


int min_ele_in_arr(int arr[], int n){
    int MIN= arr[0];
    for(int i=0; i<n; i++){
        if(MIN > arr[i]) MIN = arr[i];
    }
    return MIN;
}

int max_ele_in_arr(int arr[], int n){
    int MAX = arr[0];
    for(int i=0; i<n; i++){
        if(MAX < arr[i]) MAX = arr[i];
    }

    return MAX;
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    cout << "Min:---  " << min_ele_in_arr(arr,n) << endl ;

    cout << "Max:---  " << max_ele_in_arr(arr,n) << endl ;


}

/*

    -Time Complexity for Both are O(N) as we are Traversing through entire array.
    -Space Complexity is O(1) as auxiluary space as we are not using any extra space.


*/