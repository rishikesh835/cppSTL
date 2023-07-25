#include<bits/stdc++.h>
using namespace std;
int main(){
    //lower_bound returns a iterator which is of first element not less than x
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n ;i++){
        cin>>arr[i];
    }
    
    for (auto it:arr){
        cout<<it;
    }
    cout<<"\n";
    vector<int> vec; 
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        vec.push_back(ele);
    }
    for(auto it:vec){
        cout<<it;
    }
    cout<<"\n";
    auto it=lower_bound(arr,arr+n,2);
    int index=it-arr;

    auto it2=lower_bound(vec.begin(),vec.end(),2);
    int index2=it2-vec.begin();


   // upper_bound() returns iterator of element just greater than element♦
    return 0;
}