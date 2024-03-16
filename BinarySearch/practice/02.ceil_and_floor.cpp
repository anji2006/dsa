/*
    Ex:-- 5.23
    Ceil is greater round of value (upper bound)  -- 6.0
    Floor is lower round of value (lower bound)   -- 5.0


*/


#include<bits/stdc++.h>
using namespace std;


int floor_(int arr[], int n, int k){
    int low =0, high = n - 1, mid;

    int ans = -1;

    while (low <= high)
    {
        mid = (low + high) /2;
        if(arr[mid] <= k) {
            low = mid + 1;
            ans = arr[mid];
        }else high = mid - 1;
    }

    return ans;
    

}



int ceil_(int arr[], int n, int k){
    int low =0, high = n - 1, mid;

    int ans = -1;

    while (low <= high)
    {
        mid = (low + high) /2;
        if(arr[mid] > k) {
            high = mid - 1;
            ans = arr[mid];
        }else low = mid + 1;
    }

    return ans;
    

}




int main(){

    int n,k;
    cin >> n >> k;
    int arr[n];

    for(int i=0; i<n; i++) cin >> arr[i] ;

    cout << "Floor :---- " << floor_(arr,n,k) << endl ;
    cout << "Ceil :---- " << ceil_(arr,n,k) << endl ;



}





/*

    TC:-- O(logN)
    SC:-- O(1) no additional space is used for algo.

*/