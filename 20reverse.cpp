#include<bits/stdc++.h>
using namespace std;
//reverse  is a algorithm used in arrays and vector
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n ;i++){
        cin>>arr[i];
    }
    reverse(arr,arr+n);//reverse(startIter,enditer);
    for (auto it:arr){
        cout<<it;
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
    reverse(vec.begin(),vec.end());

    //to find maximum number in a given range
    int el =*max_element(arr,arr+n);cout<<el<<endl;
    int el1 =*min_element(arr,arr+n);cout<<el1<<endl;
    cout<<el<<"max-min"<<el1<<endl;

    int el2 =*max_element(vec.begin(),vec.begin()+4);
    int el3 =*min_element(vec.begin(),vec.begin()+4);cout<<el2<<"max-min"<<el3<<endl;

    //finding a sum in the range
    int sum=0;
    int j=1;
    for(int i=j;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum<<endl;
    int sum1=accumulate(arr,arr+n,0);//accumulate(startIter,endIter,initial_sum)
    int sum2=accumulate(vec.begin(),vec.end(),0);//accumulate(startIter,endIter,initial_sum)
    cout<<sum1<<" sum " <<sum2<<endl;
    //to count the occurence of sum element in a array/vector
    //count(firstIter,LastIter,x);
    int cnt=count(arr,arr+n,1);
    int cnt2=count(vec.begin(),vec.end(),3);
    cout<<cnt<<" count "<<cnt2<<endl;
    //to find the index of first element occurence
    //index=idx-vec.begin()/arr
    auto it1=find(vec.begin(),vec.end(),7);
    int index=it1-vec.begin();
    cout<<vec.at(index);
    auto it=find(arr,arr+n,1);
    cout<<it<<"it"<<endl;
    cout<<arr[it-arr];

    return 0;
}