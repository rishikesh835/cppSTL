#include<bits/stdc++.h>
using namespace std;
int main(){
    //it is last in first out LIFO data structure
    //1.pop     2.push&emplace  3.size  4.top   5.empty
   stack <int> st;
   st.push(3);
   st.push(6);
   st.push(4);
   st.push(7);

   cout<<st.top();//returns 7
   st.pop();//deletes topmost element
   cout<<st.top();//prints 4

    //funtion deletes entire stack
   while(!st.empty()){
    st.pop();
   }
   cout<<st.size()<<endl;
   return 0;
}