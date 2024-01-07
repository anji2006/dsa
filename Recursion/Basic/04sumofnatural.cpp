// Print Sum of N natural numbers

#include <bits/stdc++.h>

using namespace std;

int sum_of(int n){
    if(!n) return n;
    return n + sum_of(n - 1);
}



int main(){
    int n;
    cout << "Enter a number:--";
    cin >> n;

    cout<< "Sum of " << n << "Natural Numbers::--" << sum_of(n) << endl;

    return 0;

}

/*
    1) Function Takes N Iterations to reach base condition so TC:-- O(n)
    2) Funciton Takes N Stack Spaces to reach base condition so SC:-- O(n)


*/