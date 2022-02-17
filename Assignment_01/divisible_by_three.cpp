#include<bits/stdc++.h>
using namespace std;

//https://practice.geeksforgeeks.org/problems/form-a-number-divisible-by-3-using-array-digits0717/1/

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i<n; i++){
        cin >> arr[i];
    }
    int dev = 0;
    for(int i=0; i<n; i++){
        dev = (dev + arr[i])%3;
    }
    if(dev == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;   

}