#include<bits/stdc++.h>
using namespace std;
int main(){
    //map stores unique key value pair
    //map order's according to the keys
    //time complexity of map is log(n)
    map<string,int> mpp;
    mpp["raj"]=27;
    mpp["rishikesh"]=65;
    mpp["rishi"]=2;
    mpp["Turvash"]=7;
    mpp["sayan"]=43;
    mpp.emplace("kavya",21);


    mpp.erase("raj");//map.erase(key);
    mpp.erase(mpp.begin());//deletes the first element  ---> map.erase(iterator);
    //mpp.erase(mpp.begin(),mpp.begin()+2);
    mpp.clear();//entire map is cleaned

    mpp.find("raj");//points to the position of raj

    if(mpp.empty()){
        cout<<"yes it is empty"<<endl;
    }
    mpp.count("raj");//always returns one in map
     mpp["raj"]=27;
    mpp["rishikesh"]=65;
    mpp["rishi"]=2;
    mpp["Turvash"]=7;
    mpp["sayan"]=43;
    mpp.emplace("kavya",21);

    for(auto it=mpp.begin();it!=mpp.end();it++){
        cout<<it->first<<it->second<<"\n";
    }

    for(auto it:mpp){
        cout<<it.first<<it.second<<endl;
    }

    return 0;
}