#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    for(string value: s){
        cout << value << endl;
    }
    for (auto it = s.begin(); it!= s.end(); it++){
        cout << (*it) << endl;
    }
}

int main(){
    // set of keys
    // sorted order
    set<string> s;
    s.insert("abs");
    s.insert("asd");
    s.insert("hgf"); // O(log(n))
    auto it = s.find("abs");
    // if(it != s.end()){
    //     cout << (*it) << endl;
    // }
    if(it != s.end()){
        s.erase(it); // O(log(n))
        cout << (*it) << endl;
    }
    // s.erase("abs");
    print(s);

}