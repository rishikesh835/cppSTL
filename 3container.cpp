
#include<bits/stdc++.h>
#include <array>
#include<iterator>
using namespace std;
array < int,3> arr;//default value is zero
int main(){
array< int,3> arr;//any default value
array <int, 5> arr2={1,2,3};//remaining are 0
array<int,6> arr3;
arr3.fill(5);//every value is initialized 5
arr3.at(2);//prints value at index 2
    
//iterators
//begin()  end()  rbegin()  rend() :-can be used with all ds
//begin()-first element
//end()- next address to the last element
//rbegin()-last element
//rend()-right before the first element
array <int,5> arr4={1,2,3,4,5};
for(auto it=arr4.begin(); it!=arr4.end(); it++){
    cout<<*it<<" ";
}
cout<<"\n";
for(auto it=arr4.rbegin(); it!=arr4.rend(); it++){
    cout<<*it<<" ";
}
cout<<"\n";
for(auto it=arr4.end()-1; it>=arr4.begin(); it--){
    cout<<*it<<" ";
}
cout<<"\n";
for(auto it:arr4){
    cout<<it<<" ";
}
/*arr.size()  arr.front()   arr.back() are some other functionalities*/
return 0;
}