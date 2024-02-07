#include<bits/stdc++.h>
using namespace std;

void reverse_an_arrya(int arr[], int left, int right){
    // right and left are position which are going to swap
    if (left >= right) return;
    //swaping left and right position value 
    arr[left] = arr[left] + arr[right];
    arr[right] = arr[left] - arr[right];
    arr[left] = arr[left]  - arr[right];
    reverse_an_arrya(arr, left + 1, right - 1);
}

int main() {
  int n;
  cin >> n ;
  int arr[n];
  for (int i = 0; i < n ; i++ ){
      cin >> arr[i] ;
  }
  reverse_an_arrya(arr , 0 ,n - 1);
  for (int j =0 ; j<n; j++){
      cout << arr[j]  << " ";
  }
  return 0;
}

/*
    TC:--
        Takes O(N) To read an array
        Takes O(N/2) To reverse an array
        Takes o(N) To Print an array
    SC:--
        Takes o(N) To read an arrya
        Takes o(1) as axiulary space while execution code
*/