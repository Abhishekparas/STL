#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  unordered_map<string,vector<string> > phonebook;

  phonebook["abhishek"].push_back("9811573749");

  phonebook["abhishek"].push_back("9811573745");
  phonebook["abhishek"].push_back("9811573746");
  phonebook["kal"].push_back("9811573747");
  phonebook["kal"].push_back("9811573748");
  phonebook["kal"].push_back("9811573741");

  for(auto x: phonebook){
    cout<<"Name : "<<x.first<<" -> ";
    for(auto y: x.second){
      cout<<y<<" , ";
    }
    cout<<endl;
  }
  string key;
  cin>>key;

  if(!phonebook.count(key)){
    cout<<"Absent"<<endl;
  }
  else{
    for(auto x : phonebook[key]){
      cout<<x<<endl;
    }
  }

  return 0;
}
