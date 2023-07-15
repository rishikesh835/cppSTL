#include<bits/stdc++.h>
// #include<vector>
using namespace std;
int main(){
    vector <vector<int>> vec;
    vector <int> rishi1;
    rishi1.push_back(5);
    rishi1.push_back(1);

    vector <int> rishi2;
    rishi2.push_back(10);
    rishi2.push_back(11);

    vector <int> rishi3;
    rishi3.push_back(53);
    rishi3.push_back(31);
    rishi3.push_back(65);

    vec.push_back(rishi1);
    vec.push_back(rishi2);
    vec.push_back(rishi3);

// modern CP fast
    for(auto vctr:vec){
        for(auto it:vctr){
            cout<<it<<" ";
        }
        cout<<endl;
    }
//traditional
    for(int i=0;i<vec.size();i++){
        for (int j=0;j<vec[i].size();j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    //define 10 * 20
    vector<vector<int>> vec(10,vector<int> (20,0));


    return 0;
}