/*
    1) Treat 1st element as sorted 
    2) iterate though one by one and fit the place where the new element can fit in order.

*/


#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){
    int curr_position;
    for (int i =1; i<n; i++){
        curr_position = i;
        while (curr_position > 0 && arr[curr_position] < arr[curr_position - 1])
        {
            swap(arr[curr_position], arr[curr_position - 1]);
            curr_position--;
        }
        
    }
}



int main(){
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    insertion_sort(arr, n);

    for(int j=0; j<n; j++){
        cout << arr[j] << " ";
    }
    return 0;
}


/*

    Time Complexity (TC):-
         Main algo will Take O(N^2) worst case.
    Space Complexity (SC):-
        Auxilury Space O(1)
        reading Input o(N) so overall O(N)

*/