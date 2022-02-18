#include<bits/stdc++.h>
using namespace std;
void print(map<int , string> &m){
    cout << "Size: " << m.size() << endl;
    for(auto &pr : m){ // O(log(n))
        cout << pr.first << " " << pr.second << endl;
    }
}

int main(){
     //Maps -> store key value pair
    // sorted order
    //unique keys
    // duplication ->  map<int , vector<string>> m;
    // comparison < > =
    // They are implemented using red black trees
    //Unorder Map
    // 1. Inbuilt Implementation
    //2. Time complexity
    //3. valid keys -> insertion through hashing
    // They are implemented using hash tabels
    // Multi Map
    // multimap<int , string> m;
    // No unique keys -> duplicates
    map<int , string> m;
    m[1] = "abc";   //O(log(n))
    m[2] = "cba";
    m[4] = "drt";
    m[6] = "tyr";
    m.insert({5, "jkh"});
    auto it = m.find(7);
    if(it != m.end())
        m.erase(it);

    //m.clear();    
    //m.erase(2); // O(log(n))
    // auto it = m.find(4);    //O(log(n))
    // if(it == m.end()){
    //     cout << "NO VALUE";
    // }
    // else{
    //     cout << (*it).first << " " << (*it).second << endl;
    // }

    print(m);


}