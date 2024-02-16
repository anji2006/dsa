/*
    combine Two Sorted Arrays 
    Ex: arr1 = [43,55,81,194] arr2 = [2, 4,57,99,881]
    result = [2,4,43,57,55,81,194,881]

*/

#include<bits/stdc++.h>
using namespace std;

void combine_two_sorted_Arrays(int arr1[], int arr2[], int result[]){
    int i=0,j=0,k=0;
    while (i < 3 && j<5)
    {
        if(arr1[i] > arr2[j]){
            result[k] = arr2[j];
            j++;
        }else{
            result[k] = arr1[i];
            i++;
        }
        k++;
    }

    while (i < 3)
    {
        result[k] = arr1[i];
        i++;
    }
    
    while (j < 5)
    {
        result[k] = arr2[j];
        j++;
    }
    
    
}

int main(){
    int arr1[3] = {43,194, 1384}, arr2[5] = {2, 4,57,99,881};

    int result[10];
    
    combine_two_sorted_Arrays(arr1, arr2, result);


    for(int j=0; j<10; j++){
        cout << result[j] << " ";
    }
    return 0;
}

/*
    Time Complexity TC:--- O(N1) + O(N2) =>> O(N)
    space Complexity SC:--- auxiluary space O(N) and input O(N1) + O(N2) 
        Overall O(N)

*/