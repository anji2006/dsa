// Print N to 1 Given N

#include <bits/stdc++.h>

using namespace std;

void desc(int n){
    if(!n) return;

    cout << n << endl ;
    desc(n - 1);
}

int main(){

    int n;
    cout << "Enter a Number: ----";
    cin >> n;
    desc(n);

    return 0;

}


/*
    1) Function Running for N times To reach Base condition so TC:- O(n)
    2) Total N stack space required to reach base condition so SC:- O(n)


*/