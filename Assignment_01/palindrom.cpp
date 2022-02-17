#include<bits/stdc++.h>
using namespace std;

//https://practice.geeksforgeeks.org/problems/palindrome-string0817/1
int main(){
    string str;
    cin >> str;
    string r_str = str;
    reverse(r_str.begin(), r_str.end());
    if(str == r_str){
        cout << "Palindrome";
    }
    else{
        cout << "Not Palindrome"<<endl;
    }

}