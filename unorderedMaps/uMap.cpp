#include<bits/stdc++.h>
using namespace std;

int main(){

    map<string,int> mp;
    // insert
    mp.insert(make_pair("apple",100));

    pair<string,int> p;
    p.first = "mango";
    p.second = 30;
    mp.insert(p);
    mp["banana"] = 40;
    mp["peach"] = 50;
    mp["papaya"] = 60;
    mp["coconut"] = 70;
    for(auto x: mp){
        cout<<x.first<<" "<<x.second<<endl;
    }

    // search
    string key;
    cin>>key;

    auto it = mp.find(key);
    if(it != mp.end()){
        cout<<"price of "<<key<<" is "<<mp[key]<<endl;
    }
    else{
        cout<<key<<" not found"<<endl;
    }

    mp.erase(key);

    if(mp.count(key)){
        cout<<"price of "<<key<<" is "<<mp[key]<<endl;
    }
    else{
        cout<<key<<" not found"<<endl;
    }
    return 0;
}