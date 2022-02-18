#include<bits/stdc++.h>
using namespace std;

//https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/

int main(){
    int n;
    cin >> n;
    int arr[n];
    int j=0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] < 0){
            if(i != j){
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}