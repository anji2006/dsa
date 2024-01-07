
// print 1 to N numbers Accending Order




#include<bits/stdc++.h>

using namespace std;


void accending(int n){
    if(!n) return ;
    accending(n - 1);
    cout << n << endl;

}

int main(){
    int n;
    cout << "Enter a Number:--   ";
    cin >> n;
    accending(n);
    return 0;
}

/*

    1) It Will Take O(n) Time complexity as Function needs to Run N times to reach base condition.
    2) It will Take O(n) Space complexity as It Takes N stack For Storing each Function Reference.
    
        TIME :- O(n)
        SPACE :- O(n)

*/