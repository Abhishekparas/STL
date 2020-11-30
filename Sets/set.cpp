#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int arr[] = {10,20,11,8,9,17};

  int n = sizeof(arr)/sizeof(arr[0]);
  set<int> s;
  for (int i = 0; i < n; i++)
  {
    s.insert(arr[i]);
  }


  // s.erase(10);
  auto it = s.find(11);
  // s.erase(it);
  for(auto x: s){
    cout<<x<<" ";
  }


  return 0;
}
