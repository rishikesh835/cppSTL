#include<bits/stdc++.h>
using namespace std;
typedef struct node{
string str;
int num;
double doub;
char x;
node(string s,int n,double d,char c){
    str=s;
    num=n;
    doub=d;
    x=c;
}

}node;
int main(){
    struct node n1;
    n1.str="rishi";
    n1.num=5;
    n1.doub=10.8;
    n1.x='r';
    node raj=new node("striver",14,4.5,'c');
}