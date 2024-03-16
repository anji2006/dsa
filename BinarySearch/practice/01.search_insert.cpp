/*

    Given array search insert position if target is in array return index or insert target in array 
    return position where we can insert position


*/



#include<bits/stdc++.h>
using namespace std;


int search_insert(int arr[], int n  , int k){

    int low = 0, high = n - 1, mid , ans = n;

    while (low <= high)
    {
        mid = (low+high)/2;
        if(arr[mid] >= k) {
            high = mid - 1;
            ans = mid;
        }else low = mid + 1;

    }
    
    return ans;

}


int main(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    cout << search_insert(arr,n,k) << endl;

    return 0;
}


/*

    TC:-- O(log_2(N)) as we are using Binary Search to search Element.

*/