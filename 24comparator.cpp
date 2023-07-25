#include<bits/stdc++.h>
using namespace std;
bool comp(int el1,int el2){
    if(el1<=el2){
        return true;
    }
    return false;
}
bool comp(pair <int,int> el1,pair <int,int> el2){
    if(el1.first<el2.first){
        return true;
    }
    if(el1.first==el2.first){
        if(el1.second>el1.second){
            return true;
        }
    }
    return false;
}
int main(){
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n ;i++){
        cin>>arr[i];
    }
    
    for (auto it:arr){
        cout<<it<<" ";
    }
    cout<<"\n";
    // vector<int> vec; 
    // for(int i=0;i<n;i++){
    //     int ele;
    //     cin>>ele;
    //     vec.push_back(ele);
    // }
    // for(auto it:vec){
    //     cout<<it;
    // }
    sort(arr,arr+n);//sorts everything in acsending order
    //sort(arr,arr+n,comp);//comp is is funtion which returns true or false
    for (auto it:arr){
        cout<<it<<" ";
    }
    cout<<"\n";
    pair<int,int> ar[]={{1,2},{3,1},{1,1}};
    sort(ar,ar+3,comp);
    return 0;
}