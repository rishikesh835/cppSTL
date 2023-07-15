//vector is just like arrar with variable size    
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> vec;//empty vector created
    cout<<vec.size()<<endl;//prints zero
    vec.push_back(0);
    vec.push_back(2);
    cout<<vec.size()<<endl;
    vec.pop_back();
    vec.push_back(2);//emplace_back(2).emplace_back() takes less time
    vec.push_back(2);
    vec.push_back(2);
    vec.push_back(2);
    vec.push_back(2);
    vec.clear();//erases all elements of vector

    vector<int> vec1(4,0);// ->{0,0,0,0}.still more elements can be pushed

    vector<int> vec2(4,10);
    vector<int> vec3(vec2.begin(),vec2.end());//vec2 copied into vec3  [)
    vector<int> vec4(vec2);//vec2 copied into vec4.

    vector<int> vector(vec2.begin(),vec.begin()+2);

//lower bound ,upper bound

//swap(v1,v2);
//1.begin() 2.end() 3.rbegin()  4.rend()
    return 0;
}