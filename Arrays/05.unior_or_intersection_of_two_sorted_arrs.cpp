
/*
    - This patter is nothing but mering 2 sorted arrays


*/


#include<bits/stdc++.h>
using namespace std;

// reading input
void read_input_(int v[], int n){
    for(int i = 0; i< n; i++)  cin >> v[i];
}


// consoling output
void console_output(vector<int> &arr){
    for(auto val : arr)  cout << val << " ";
    cout << endl;
}


// sub logic for union
void add_element_at_end(vector<int> &v, int val){
    if(v.empty()) v.push_back(val);
    else if(v.back() != val) v.push_back(val);
}

// main logic for union
vector<int> union_of_two_sorted_arrays(int arr1[], int arr2[] , int n , int m){
    vector<int> v;
    int i=0,j=0;

    // adding smallest element of both arr, after that moving pointer to right based on condition.
    // (i<n && j<m) this condition is True, untile any one of the array is at the end.  
    while (i<n && j<m)
    {
        if(arr1[i] <= arr2[j]){
            add_element_at_end(v, arr1[i]);
            i++;
        }else {
            add_element_at_end(v, arr2[j]);
            j++;
        }
    }

    // adding all remaining elements from arr1
    while (i<n)
    {
        add_element_at_end(v, arr1[i]);
        i++;
    }
    
    // adding all remaining elements from arr2
    while (j<m)
    {
        add_element_at_end(v, arr2[j]);
        j++;
    }
    
    return v;
    
}


vector<int> intersection_of_two_sorted_arrs(int arr1[], int arr2[], int n, int m){
    vector<int> v;
    int j=0,i=0;

    while (i<n && j<m)
    {
        if(arr1[i] == arr2[j]){
            v.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]) i++;
        else j++;
    }
    
    // for intersection need not to add remaining elements 

    return v;
}





int main() {
    int n,m;
    cin >> n >> m ;
    int arr1[n], arr2[m];
    vector<int> v1(n,0), v2(m,2), res , res2;
    read_input_(arr1, n);
    read_input_(arr2,m);
    res = union_of_two_sorted_arrays(arr1, arr2, n,m);
    cout << "Union ::-----   ";
    console_output(res);
    cout << endl;
    res2 = intersection_of_two_sorted_arrs(arr1, arr2, n,m);
    cout << "Intersection::-----    ";
    console_output(res2);
  return 0;
}