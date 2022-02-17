#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    // int v[n];
    vector<int> v(n);
    for (int i=0; i<n; i++){
        cin >> v[i];
    }
    //min_element -> pointer , address O(n)
    // int min = *min_element(v, v+n); -> ARRAY
    int min = *min_element(v.begin(), v.end());
    cout << min << endl;

    //max_element -> pointer , address  O(n)
    int max = *max_element(v.begin(), v.end());
    cout << max << endl;

    // Accmulate -> Sum  O(n)
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum << endl;

    // Count -> ELEMENTS COUNT  O(n) -> Vector / Array
    int ct = count(v.begin(), v.end(), 2);
    cout << ct << endl;

    // FIND -> return iterator  O(n) -> Vector / Array

    // int elem = *find(v.begin(), v.end(), 2);
    // cout << elem << endl;
    // auto it = find(v.begin(), v.end(), 2);
    // if(it != v.end()){
    //     cout << (*it) << endl;
    // }
    // else{
    //     cout << "Element not found";
    // }

    // // Reverse
    // reverse(v.begin(), v.end());
    // for(auto rev: v){
    //     cout << rev << " ";
    // }
    // cout << endl;

    // String -> reverse
    string s = "Hello STL";
    reverse(s.begin(), s.end());
    for(auto str : s){
        cout << str << " ";
    }
    cout << endl;
}
