#include<bits/stdc++.h>
using namespace std;

//https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k; 
    cin >> k;
    sort(arr, arr+n);
    cout << arr[k-1];
}