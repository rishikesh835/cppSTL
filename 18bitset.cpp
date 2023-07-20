#include<bits/stdc++.h>
using namespace std;
//int ->16 bits
//char ->8 bits
//bitset ->1 bit
int main(){
    bitset <10> bt;
    cin>>bt;
    
    //all
    cout<<bt.all()<<endl;//returns a true or false if bitset is full or not
    //any
    cout<<bt.any()<<endl;//true if any one bit is set,false if no bit is set
    //count
    cout<<bt.count()<<endl;//number of bits set
    //flip

    bt.flip(3);//3rd index will be flipped
    //none
    //if none bit is set then true, false otherwise
    cout<<bt.none();
    //set
    bt.set();//sets entire set as 1
    bt.set(2);//sets the 2nd  index

    bt.set(2,0);
    //reset
    bt.reset();//all index turned to zero

    bt.reset(2);//2nd index will be made zero


    //size
    cout<<bt.size()<<endl;//returns size of bt
    //test
    cout<<bt.test(2);//checks if bit is set at index 2 or not
    return 0;
}