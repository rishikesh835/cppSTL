#include<bits/stdc++.h>
using namespace std;
int main(){
    //queue is first in first out data structure
    //1.push    2.front     3.pop   4.size      5.empty
    //all operation on queue is constant
    queue <int> q;
    q.push(4);
    q.push(32);
    q.push(21);
    q.push(38);
    q.push(8);

    cout<<q.front();//prints 4
    q.pop();
    cout<<q.front();//prints 32

    while(q.empty()){
        q.pop();
    }
    return 0;
}