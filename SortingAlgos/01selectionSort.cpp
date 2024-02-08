/*
    - Iterate through all indexs one by one
    - find min value index
    - swap with the current index
    - finally Array get sorted

*/


#include <bits/stdc++.h>
using namespace std;


void selection_sort(int arr[], int n){
    int min_val_index;
    for(int i =0; i <n; i++){
        min_val_index = i;
        for(int j = i +1; j<n; j++){
            if(arr[min_val_index] > arr[j])
            min_val_index = j;
        }
        swap(arr[min_val_index], arr[i]);
    }
}

int main(){
    int num;
    cin >> num;
    int arr[num] ;
    for (int i =0; i<num ; i++){
        cin >> arr[i];
    }

    selection_sort(arr, num);
    for (int c = 0; c < num; c++){
        cout << arr[c] << " ";
    }
    return 0;
}


/*
    Time Complexity (TC) :-
        Outer Loop will Iterates for N times,
        Inner Loop will Iterates for (N-1)+ (N-2)+(N-3)+(N-4)--- 1 so avg N times
        so TC = Outer X Inner ==> NXN => O(N^2)

        Note:- excluding Input and Output TC to read and console the data.
    
    Space Complexity (SC):--
        O(N) for storing Array

*/