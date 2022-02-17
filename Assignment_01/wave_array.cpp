#include<bits/stdc++.h>
using namespace std;

//https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1/
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for (int i=0; i<n-1; i+=2){
       swap(arr[i], arr[i+1]);
    }
    for(int i=0; i<n ; i++){
        cout << arr[i] << " ";
    }
}