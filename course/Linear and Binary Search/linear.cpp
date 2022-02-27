#include<bits/stdc++.h>
using namespace std;
//Linear Search
//1,4,5,7,8,11,13,15,67,88,99
// Worst Case - O(N)
//Best Case - O(1)
// Operation Limit - 10^8 / 10^9 
int main(){
    vector <int> v = {1,4,5,7,8,9,13,15,20,30,35,40,55,99};
    int target = 30;
    bool flg = false;
    for(int i=0; i<v.size(); i++){
        if(v[i] == target){
            flg = true;
        }
    }
    if(flg){
        cout << "Found"<<endl;
    }
    else{
        cout<< "Not Found"<<endl;
    }
    // String
    string name = "SaniaIftikhar";
    char target_c = 's';

    for(int i=0; i<name.size(); i++){
        if(name[i] == target_c){
            flg = true;
        }
    }
    if(flg){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }

    //Find Min or Max
    // Brute force approach O(N)
    vector <int> arr = {1,2,3,4,5,5,8,9,15,16,20,25,30};
    int min = arr[0];
    int max = arr[0];
    for(int i = 0; i<arr.size(); i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout << "Max element is:"<< max<< endl;

    //Better Approach O(log(N))
    int n = arr.size();
    sort(arr.begin(), arr.end()); //O(log(N))
    cout<<arr[0]<<endl;
    cout<<arr[n-1]<<endl;
}