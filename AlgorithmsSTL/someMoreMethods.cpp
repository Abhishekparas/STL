#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int a = 10;
  int b = 20;
  swap(a,b);
  cout<<a<<" "<<b<<endl;

  cout<<max(a,b)<<endl;
  cout<<min(a,b)<<endl;

  int arr[5] = {1,2,3,4,5};
  reverse(arr,arr+3);
  for (int i = 0; i < 5; i++)
  {
    /* code */
    cout<<arr[i]<<" ";
  }
  
  return 0;
}
