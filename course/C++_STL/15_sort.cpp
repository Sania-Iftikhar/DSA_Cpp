#include<bits/stdc++.h>
using namespace std;

int main(){
//     int n;
//     cin >> n;
//     int a[n];
//     for ( int i=0; i< n; i++){
//         cin >> a[i];
//     }
//     sort(a, a+n);
//     for ( int i=0; i<n; i++){
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }
    int n;
    cin >> n;
    vector<int> a(n);
    for ( int i=0; i< n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end()); //nlog(n)
    for ( int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

// mixture of quick sort, heap and insertion sort - input - address
// start from quick sort then switch to heap then insertion