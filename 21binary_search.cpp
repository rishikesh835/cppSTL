//this program is illustration for binary search 
//it only works on sorted arrays
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    array <int,6> arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\n";
    vector<int> vec(5,0); 
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    for(auto it:vec){
        cout<<it;
    }
    cout<<"\n";
   bool res= binary_search(arr.begin(),arr.end(),6);//returns true if it finds the elements 
   bool res= binary_search(vec.begin(),vec.end(),6);
    return 0;
}