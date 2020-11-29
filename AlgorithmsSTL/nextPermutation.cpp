#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int arr[] = {10,20,30,40,50};
  int n = sizeof(arr)/sizeof(arr[0]);
  rotate(arr,arr+2,arr+n);
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;

  vector<int> v = {10,20,30,40,50};
  rotate(v.begin(),v.begin()+3,v.end());
  for (int i = 0; i < v.size(); i++)
  {
    cout<<v[i]<<" ";
  }
  cout<<endl;

  vector<int> v1 = {1,2,3};

  do
  {
    cout<<v1[0]<<" "<<v1[1]<<" "<<v1[2]<<endl;
  } while (next_permutation(v1.begin(),v1.end()));
  
    
  return 0;
}
