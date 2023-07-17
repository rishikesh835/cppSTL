#include<bits/stdc++.h>
using namespace std;
int main(){
    //multiset can be used to store same element a number of times in ordered fashion
    multiset<int> ms;
    ms.insert(12);//ms.emplace(12);
    ms.insert(12);
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(3);
    ms.count(12);//returns how many times 12 exist in multiset
    ms.erase(12);//erases all the instances of 12

    auto it=ms.find(12);//returns an iterator pointing to first element 2

    ms.clear();//it deletes the entire multiset

    ms.erase(ms.begin(),ms.end());//deletes the entire set

    //it is log(n) in size

    for (auto it=ms.begin();it!=ms.end();it++){
        cout<<*it<<" ";
    }
    for(auto it: ms){
        cout<<it;
    }
    return 0;
}