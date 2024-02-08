#include<bits/stdc++.h>
using namespace std;


int nth_fibbnocii(int n , int *steps){
    if (n<=1) return n;
    (*steps)++;
    return nth_fibbnocii(n -1 , steps) + nth_fibbnocii(n - 2, steps );
}

int optimized_nth_fibb(int fib_series[], int n, int *steps){
    if (fib_series[n] != 0) return fib_series[n] ;

    if(n<= 1) return n;
    (*steps)++;
    fib_series[n] = optimized_nth_fibb(fib_series, n - 1, steps) + optimized_nth_fibb(fib_series, n - 2, steps) ;

    return fib_series[n];
    
}


int main(){
    int number, normal, optimize;
    cin >> number;
    int fib_series[number+1];
    for (int i = 0; i<=number ; i++){
        fib_series[i] = 0;
    }
    cout << "This is fib number :" << nth_fibbnocii(number , &normal) << "   steps :" << normal << endl;

    cout << "This is fib number :" << optimized_nth_fibb(fib_series, number , &optimize) << "   steps :" << optimize << endl;
    return 0;
}


/*
    fibbnacii Time complexity (TC) :--
        2^n for reaching base condtion 
        and takes 2^n axiulary space for recurrsion call stack
    
    optimized fibb Time Complexity (TC):---
        I will reach with o(N) as we are maintaining array for storing fibb values
        I will Take o(N) for storing Array and O(N) axiluary space for recurrsion call stack.   


*/