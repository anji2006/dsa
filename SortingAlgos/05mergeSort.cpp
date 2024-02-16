
/*
    1) Merge Involve Two Steps Dividing and conqering (merging)
    2) Divide Array into half haf pieces till the array is sorted
    3) combine left and right part (combine Two sorted Arrays)
    4) Finally Array will get sorted.

*/








#include<bits/stdc++.h>

using namespace std;


void sort_arr_from_left_to_right(int arr[], int left , int mid , int right){
    int i= left, j=mid+1,k=0;
    int size = right - left + 1;
    int result[size];
    while (i <= mid && j <= right)
    {
        if(arr[i] < arr[j]){
            result[k] = arr[i];
            i++;
        }else{
            result[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i<= mid)
    {
        result[k] = arr[i];
        i++;
        k++;
    }

    while (j<= right)
    {
        result[k] = arr[j];
        j++;
        k++;
    }   

    for (int a = 0; a< size; a++){
        arr[left + a] = result[a];
    }
        

}


void merge_sort(int arr[] , int left, int right){

    if (left == right) return;
    int mid = (left + right ) /2;
    merge_sort(arr, left, mid); // sorting left part
    merge_sort(arr, mid + 1, right); // sorting right part

    sort_arr_from_left_to_right(arr, left, mid , right);
}



int main(){
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    merge_sort(arr,0, n - 1);

    for(int j=0; j<n; j++){
        cout << arr[j] << " ";
    }
    return 0;
}