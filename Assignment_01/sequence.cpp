#include<bits/stdc++.h>
using namespace std;

//https://www.hackerearth.com/problem/algorithm/jiyas-sequence/

int main(){
    int t; //test case
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        // int a[n];
        vector<int> a(n);
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        long long c = 1;
        for(int i=0; i<n; i++){
            c *= a[i];
        }
        int r = c%10;
        if(r==3 || r==2 || r==5){
            cout << "YES" << endl;
        }
        else{
            cout << "NO";
        }
    }
}
