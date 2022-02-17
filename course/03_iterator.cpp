#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v ={1,2,3,4,5};
    for (int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    // vector<int> ::iterator it = v.begin();
    // for(it = v.begin(); it != v.end(); it++){
    //      cout << (*it) << endl;
    //}
    // vector <pair<int , int> > v_p = {{1,2}, {2,3}, {3,4}};
    // vector<pair<int, int> > :: iterator it;
    // for(it = v_p.begin(); it != v_p.end(); it++){
    //     cout << (*it).first << " " << (*it).second << endl;
    // }

    // Range base loop
    for (int &value : v){
        value++;
      // cout << value << " ";
   }
   cout << endl;
   for (int value : v){
       cout << value << " ";
   }
   cout << endl;

   //pair
   vector<pair<int , int> > vp = {{1,2},{3,4},{5,6}};
   for(pair<int, int> &value: vp){
       cout << value.first << " " << value.second << endl;
   }
    // (it->first)

    //Auto -> dynamically datatype assume.
    auto a= 1;
    cout << a << endl; 
    auto it = v.begin();
    for(it = v.begin(); it != v.end(); it++){
         cout << (*it) << endl;
    }
    vector <pair<int , int> > v_p = {{1,2}, {2,3}, {3,4}};
    for(auto it = v_p.begin(); it != v_p.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
}