/*
    [Brute Force]
    - we can Find 2nd laragest and 2nd smallest by sorting an array and 
        picking 2 last and 2nd element in the array after sorted.
        But It Takes O(NlogN) Time complexity.


    [Optimal]
    - Traverse Through array and maintain first and second larage / small elements
    - first = arr[0], second = -1;
      if ele > first : second = first , first = ele;
      else if ele > second : second = ele,

    We can same process for 2nd smallest also.

    
    - [Optimal -2]
        - find first max by search entire array for max
        - find 2nd large by comparing with max and second max in array.
        This Takes TC O(2N).


*/
#include <bits/stdc++.h>
using namespace std;

int second_min_ele_in_arr(int arr[], int n){
    int first= arr[0], second = INT_MAX;

    for(int i=0; i<n; i++){
        if(first > arr[i]) {
            second = first;
            first = arr[i];  
        }
        else if (second > arr[i] && first < arr[i]){ 
            second = arr[i];
        }
    }
    return second;
}

int second_max_ele_in_arr(int arr[], int n){
    int first= arr[0], second = -1;

    for(int i=0; i<n; i++){
        if(first < arr[i]) {
            second = first;
            first = arr[i];
        }
        else if (second < arr[i] && first > arr[i]){ 
            // first > arr[i] is for avoid duplicates in first and second values
            second = arr[i];
        }
    }
    return second;
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    cout << "Second Min:---  " << second_min_ele_in_arr(arr,n) << endl ;

    cout << "Second Max:---  " << second_max_ele_in_arr(arr,n) << endl ;


}


/*
    TC: -- O(N)
    SC:--- O(1) + O(N) ==> O(N)

*/