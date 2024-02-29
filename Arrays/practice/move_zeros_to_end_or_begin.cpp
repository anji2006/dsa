


#include <bits/stdc++.h>
using namespace std;


void move_zeros_to_end(int arr[], int n){
    int curr = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] != 0) {
            arr[curr] = arr[i];
            curr++;
        }
        
    }

    for(;curr <n; curr++){
        arr[curr] = 0;
    }
}


void move_zeros_to_front(int arr[], int n){
    int curr = n - 1;
    for(int i = n - 1; i>= 0; i--){
        if(arr[i] != 0) {
            arr[curr] = arr[i];
            curr--;
        }
        
    }

    for(;curr >=0; curr--){
        arr[curr] = 0;
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> v1,v2;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    // move_zeros_to_end(arr,n);
    move_zeros_to_front(arr,n);

    for(int j = 0; j<n; j++ ) cout << arr[j]  << " ";


}


/*

    Time Complexity:---- O(N)
    Space Complexity :---- O(N)


*/