#include<bits/stdc++.h>
using namespace std;

int main(){

    map<string,int> mp;
    // insert
    mp.insert(make_pair("apple",100));

    // pair
    pair<string,int> p;
    p.first = "mango";
    p.second = 30;
    mp.insert(p);
    mp["banana"] = 40;

    for(auto x: mp){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}