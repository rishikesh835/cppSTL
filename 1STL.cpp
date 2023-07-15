#include<bits/stdc++.h>//this header file contains all the header files 
using namespace std;
namespace rishi{
    int val=10;
    int getVal(){
        return val*10;//every function is embedded in std;
    }
}
int main()
{
    double val=10.08;
    cout<<val<<endl;//prints 10.08

    cout<<rishi::val<<endl;//prints 10.
    cout<<rishi::getVal()<<endl;
}