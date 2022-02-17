#include<bits/stdc++.h>
using namespace std;

//https://leetcode.com/problems/reverse-string/
int main(){
    // int n;
    // cin >> n;
    // vector<string> s;
    // for (int i=0; i<n; i++){
    //     string str;
    //     cin >> str;
    //     s.push_back(str);
    // }
    string str;
    cin >> str;
    reverse(str.begin(), str.end());
    for(auto rev : str){
        cout << rev << " ";
    }
    cout << endl;

}