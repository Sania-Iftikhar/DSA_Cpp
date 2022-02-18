#include<bits/stdc++.h>
using namespace std;
//https://www.geeksforgeeks.org/find-repetitive-element-1-n-1/
int main(){
    int n; 
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    int duplicate = accumulate(arr, arr+n, 0) - ((n-1)* n/2);
    cout << duplicate << " ";

}