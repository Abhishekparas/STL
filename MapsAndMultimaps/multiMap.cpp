#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  multimap<char,string> mp;
  int n = 5;

  for (int i = 0; i < n; i++)
  {
    char ch;
    string str;
    cin>>ch>>str;
    mp.insert({ch,str});
  }

  for(auto x: mp){
    cout<<x.first<<" "<<x.second<<endl;
  }
  

  return 0;
}
