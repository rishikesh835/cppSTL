#include<bits/stdc++.h>
using namespace std;
int main(){
    pair <int,int> pr={1,2};
    pair<pair<int,int>,int> prr={{1,2},2};
    cout<<pr.first<<pr.second<<endl;
    cout<<prr.first.first<<prr.first.second<<prr.second<<endl;

    pair<pair<int,int>,pair<int,int>> pr3={{1,2},{4,3}};
    cout<<pr3.first.first<<pr3.first.second<<pr3.second.first<<pr3.second.second<<endl;


    vector<pair<int,int>> vec;
    set<pair<int,int>> st;
    map<pair<int,int>,int> mpp;

    //but we can not define unordered map for pair

   return 0;
}
