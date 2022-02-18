#include<bits/stdc++.h>
using namespace std;

void print(unordered_set<string> &s){
    for(string value: s){
        cout << value << endl;
    }
    for (auto it = s.begin(); it!= s.end(); it++){
        cout << (*it) << endl;
    }
}

int main(){

    unordered_set<string> s;
    s.insert("abs");
    s.insert("asd");
    s.insert("hgf"); // O(1)
    auto it = s.find("abs");
    // if(it != s.end()){
    //     cout << (*it) << endl;
    // }
    if(it != s.end()){
        s.erase(it); // O(1)
        cout << (*it) << endl;
    }
    // s.erase("abs");
    print(s);

    // Multiset
    multiset<string> s; 
    s.insert("abs");
    s.insert("asd");
    s.insert("abs");
    s.insert("hgf"); // O(log(n))
    auto it = s.find("abs"); // first iterator
    // if(it != s.end()){
    //     cout << (*it) << endl;
    // }
    if(it != s.end()){
        s.erase(it); // O(log(n))
        cout << (*it) << endl;
    }
    // s.erase("abs"); // delete all
    print(s);
}