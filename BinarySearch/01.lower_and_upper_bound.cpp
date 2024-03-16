
/*
    LOWER BOUND:-- 
        - lower bound of 'x' is lowest index wher "arr[i] >= x" ;
    
    UPPER BOUND:-- 
        - upper bound of 'x' is index initial value of array that surpasess 'x';


*/

#include<bits/stdc++.h>
using namespace std;



int lower_bound(int arr[], int n, int k){

    int low= 0, high = n -1, mid;
    int ans = n ;

    while (low<= high)
    {
        mid = (low+high) / 2;

        if(arr[mid] >= k) { // for lower bound value should be '>=' target value
            ans = mid;
            high = mid - 1;
        }else low = mid + 1;
    }
    

    return ans;

}


int upper_bound(int arr[], int n, int k){

    int low= 0, high = n -1, mid;
    int ans = n ;

    while (low<= high)
    {
        mid = (low+high) / 2;

        if(arr[mid] > k) { // for upper bound value should be '>' target value
            ans = mid;
            high = mid - 1;
        }else low = mid + 1;
    }
    

    return ans;

}





int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];


    cout << "Lower Bound:---  " << lower_bound(arr,n, k) << endl ;
    cout << "Upper Bound:---  " << upper_bound(arr,n, k) << endl ;

}


/*

    These Techinces are usefull for some of problems solving.

    It Takes O(logN)

    - (n/2)(n/4)(n/8) .... (n/2^k)
    - n/2^k = 1 
    - n = 2^k 
    - log_2(n) = log_2(2^k)
    - log_2(n)  = k


*/