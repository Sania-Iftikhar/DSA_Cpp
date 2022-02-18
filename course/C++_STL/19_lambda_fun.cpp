#include<bits/stdc++.h>
using namespace std;

//General

bool is_positive(int x){
    return x > 0;
}

int main(){
    // Lambda: Shortcut way of wriiting temporary functions
    // auto sum = [](int x, int y){return x+y;};
    // cout << sum(2,3);

    // all_of -> AND Operator ->  return True / False
    vector<int> v ={2,3,4};
    cout << all_of(v.begin(), v.end(), [](int x){return x > 0;}) << endl;
   // cout << all_of(v.begin(), v.end(), is_positive);
    // any_of -> OR Operator ->  return True / False
    cout << any_of(v.begin(), v.end(), [](int x){return x > 0;}) << endl;
    // none_of -> All false -> T ->  return True / False
    cout << none_of(v.begin(), v.end(), [](int x){return x > 0;}) << endl;

    // EVEN No
    vector<int> e ={2,3,4, 6,8};
    cout << all_of(e.begin(), e.end(), [](int x){return x %2 == 0;}) << endl;

}
