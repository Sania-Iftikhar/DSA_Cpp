#include<bits/stdc++.h>
using namespace std;

//https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1

int main(){
    int n, m;
    cin >> n >> m;
    set<int> s;
    for(int i=0; i<n; i++){
        int a[n];
        cin >> a[i];
        s.insert(a[i]);
    }
    for (int i=0; i<m; i++){
        int b[m];
        cin >> b[i];
        s.insert(b[i]);
    }
    for(auto it = s.begin(); it != s.end(); it++){
        cout << (*it) << " ";
    }

}