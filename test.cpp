





#include<bits/stdc++.h>
using namespace std;

int energy_to_jump(int i, int k, int h[], int &c){
    
    if (i==0) return 0;

    int Min = INT_MAX;
    for(int x = 1; x<=k; x++){
        if(i-x < 0) break;
        c++;
        int res = abs(h[i] - h[i-x]) + energy_to_jump(i-x, k , h, c);
        Min = min(Min, res);
    }

    return Min;


}


int memo_energy_to_jump(int i, int k, int h[], int &c, vector<int> &v){
    
    if (v[i] != -1) return v[i];

    int Min = INT_MAX;
    for(int x = 1; x<=k; x++){
        if(i-x < 0) break;
        c++;
        int res = abs(h[i] - h[i-x]) + memo_energy_to_jump(i-x, k , h, c, v);
        Min = min(Min, res);
    }

    v[i] = Min;
    return v[i];


}



int main(){

    int n,k, c = 0;
    cin >> n>> k;
    int heights[n];
    for(int i=0; i<n; i++) cin >> heights[i];
    vector<int> v(n,-1);
    v[0] = 0;

    // cout << energy_to_jump(n-1,k,heights, c);


    cout << memo_energy_to_jump(n-1,k,heights, c, v);

    cout << endl << c << endl;
    return 0;
}
