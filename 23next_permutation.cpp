#include<bits/stdc++.h>
using namespace std;
int main(){
    //next_permutation
    //string s="abc";
    //all permuatations are as follows
    //
    //☻abc acb bac bca cab cba◘☻♠
    //☻abc acb bac bca cab cba☻
    //☻abc acb bac bca cab cba☻
    string s="bca";
    bool res=next_permutation(s.begin(),s.end());
    cout<<s<<endl;//output would be cab i.e. the next permutation

    string st="bca";
    sort(st.begin(),st.end());

    do{
        cout<<st<<endl;
    }while(next_permutation(st.begin(),st.end()));
    cout<<st<<endl;
    bool res2=prev_permutation(st.begin(),st.end());
    cout<<st<<endl;
    return 0;
}