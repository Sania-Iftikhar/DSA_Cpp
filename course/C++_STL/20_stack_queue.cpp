#include<bits/stdc++.h>
using namespace std;

int main(){
    //STACk -> LIFO
    // PUSH , POP , TOP, SIZE
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    //QUEUE -> FIFO
    // PUSH , POP , FRONT, SIZE
    queue<string> q;
    q.push("Sania");
    q.push("Sana");
    q.push("Ahmed");
    q.push("Ali");
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    
}