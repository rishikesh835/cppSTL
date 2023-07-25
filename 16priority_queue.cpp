#include<bits/stdc++.h>
using namespace std;
int main(){
    //priority queue stores in decsending order
    //priority queue does every operation in O(log n)
    //1.push    2.size  3.top   4.pop   5.empty

    priority_queue <int> pq;
    pq.push(6);
    pq.push(65);
    pq.push(1);
    pq.push(16);
    pq.push(56);

    cout<<pq.top()<<endl;//prints 65
    pq.pop();
    cout<<pq.top()<<endl;  

    priority_queue<int,vector<int>,greater<int>> pq1;//minimum priority queue
    pq1.push(5);
    pq1.push(14);
    pq1.push(53);
    pq1.push(32);
    pq1.push(20);

    cout<<pq1.top()<<"\n";
    return 0;
}