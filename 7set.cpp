#include<bits/stdc++.h>
using namespace std;
//set is container which is helpful in counting number of unique elements
//set can not be accessed like arrays/vectors 
//it is arranged in accending order

int main(){
    set <int> st;
    set <int> st1={1,2,3,4,5,6};

    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.insert(x);//insert has complexity of log  (n).
        /* code */
    }
    for(auto it=st.begin();it!=st.end();it++){
        cout<<*it<<" ";
    }
    //erase funtionality
    st.erase(st.begin());//st.erase(iterator).
            // set<int> :: iterator it=st.begin(),it2=st.begin();
            // it2++;
    //st.erase(st.begin(),st.begin()+2);//->[) this thing is not working
    //st.erase(startIterator,endIterator);
    
    st.erase(5);

    auto it=st.find(7);//log n

    auto it1=st.find(9);//if not found points to next element

    st.emplace(5);//same as insert but faster
    cout<<"the size is" <<st.size()<<endl;


    for(auto it=st.begin();it!=st.end();it++){
        cout<<*it<<" ";
    }
cout<<endl;
    for(auto it : st){
        cout<<it<<endl;
    }
    return 0;
}
