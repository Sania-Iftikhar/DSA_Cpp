#include<bits/stdc++.h>
using namespace std;

//Binary Search
// Monotonic Functions - That always follow a given order
// Array sorted order
// O(log(N))
// Order agnostic Binary Search - Decreasing Order

int main(){
    vector <int> v = {1,4,6,8,9,15,30,50,80,88,99,555,888,999};
    sort(v.begin(), v.end(), greater<int>());
    int start = 0;
    int end = v.size()-1;
    int to_find = 555;
    bool isAsc = v[0] < v[v.size()-1];
    // int mid = start + ((end-start)/2) -  independent
    while(start <= end){
        int mid = (start + end) / 2; //depend on size of array
        if(to_find == v[mid]){
            cout<< mid << endl;
        }
        if(isAsc){
            if(to_find<v[mid]){
            end = mid -1;
            }
            else{
                start = mid + 1;
                break;
            }
        }
        else{
            if(to_find > v[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }

    }  
 return 0;

}