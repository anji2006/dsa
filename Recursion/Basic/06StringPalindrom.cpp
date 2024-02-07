#include <bits/stdc++.h>
using namespace std;
#include <string>

bool is_string_palindrome(string word, int i, int size){
    if (size/2 <= i) return 1;
    if (word[i] != word[size-i-1]) return 0;
    return is_string_palindrome(word, i+1, size);
}

int main(){
    string word;
    cin >> word;
    cout << is_string_palindrome(word, 0, word.length()) << endl;
    return 0;
}

/*
    Time Complexity (TC):-  O(N) for checking is string palindrome or not
    Space Complexity (SC) :- o(N) for auxilaury space for function recurrsion call stack. 
                            and O(1) for reading the input and storing data 

*/