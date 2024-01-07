// print Factorial using Recursion

#include <bits/stdc++.h>

using namespace std;

int fact(int n){
    if(!n) return 1;

    return n * fact(n - 1);
}


int main(){
    int n ;
    cout << "Enter a Number:---";
    cin >> n;
    cout << "Factorial of " << n << ":---\t" << fact(n) << endl ;

    return 0;
}

/*
    1) Function Takes N Iterations to reach base condition so TC:-- O(n)
    2) Funciton Takes N Stack Spaces to reach base condition so SC:-- O(n)


*/
