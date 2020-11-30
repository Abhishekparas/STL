#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  multimap<char,string> mp;

  mp.insert({'a',"apple"});
  mp.insert({'d',"dog"});
  mp.insert({'b',"ball"});
  mp.insert({'c',"cat"});
  mp.insert({'e',"elephant"});

  // for(auto x: mp){
  //   cout<<x.first<<" "<<x.second<<endl;
  // }
  
  auto it1 = mp.lower_bound('b');
  auto it2 = mp.upper_bound('d');

  for(auto it = it1; it != it2; it++){
    cout<<it->second<<endl;
  }

  if(mp.find('d') != mp.end()){
    auto x = mp.find('d');
    cout<<x->second<<endl; 
  }

  return 0;
}
