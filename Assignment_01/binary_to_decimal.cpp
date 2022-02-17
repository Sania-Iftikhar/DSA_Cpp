#include<bits/stdc++.h>
using namespace std;

//https://www.hackerearth.com/problem/algorithm/gpl/

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int len = s.length();
        int dec = 0;
        for(int i=n-1;i>=0;--i){
            if(s[i]=='1') {
                dec = dec +  1*(pow(2,(len-1-i))); //Just add the power if its 1
            }
        }
        cout << dec << '\n';
    }
    // int t;
    // cin>>t;
    // while(t--){
    //     int n;
    //     cin>>n;
    //     char s[n];
    //     for(int i=0 ; i< n ; i++){
            
    //         cin >> s[i];
    //     }
    //     cout<<stoi(s,0,2)<<endl;
    // }

}