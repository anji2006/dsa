
/*
    1) we need to iterate through all elements and if A[i] > A[i+1] swap them.
    2)  same process till end  than in every iteration of Outer loop greater number will go to right.
    3) By the completion of Outer for loop Array will get sorted.
*/


#include<bits/stdc++.h>
using namespace std;


void bubble_sort(int arr[], int n){
    bool is_swap = false;
    for(int i =0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                is_swap = true;
                swap(arr[j], arr[j+1]);
            }
        }
        if(!is_swap) break;
    }
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    bubble_sort(arr, n);

    for(int j=0; j<n; j++){
        cout << arr[j] << " ";
    }
    return 0;
}

/*
    Time Complexity (TC) :-  Worst Case Senario Bubble Sort Algo Takes O(N^2)
                        Note :- excluding input and output.
    
    Space Complexity (SC) :-- It Takes O(N) To read Input Array and Auxilary Space is O(1) 
            So Overall SC ===> O(N)

*/