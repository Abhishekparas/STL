#include<bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

// i<j and a[i] > a[j]
// 1, 5, 2, 3, 6, 4, 10
// 0, 0, 1, 1, 0, 2, 0
// => total 4 inversion
// 7
// 1 5 2 3 6 4 10

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>PBDS;
int main(int argc, char const *argv[])
{
  int n;
  cin>>n;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i]; 
  }
  PBDS st;
  int inversionCount = 0;

  for (int i = 0; i < n; i++)
  {
    inversionCount += st.size() - st.order_of_key(arr[i]);
    st.insert(arr[i]); 
  }
  cout<<inversionCount<<endl;
  
     

  return 0;
}
// basically at each index we are finding how many bigger elements are already there in the array than the element 
// we are at arr[i] 
// now order_of_key(elem) gives the index at which this elem will be inserted in pbds which tells us how many elements are 
// smaller than this elem so if we want to find out how many elements are greater tha this elem than simply subtract st.size() - order_of_key(arr[i]) 
// 1, 2, 3, 5
// i want to insert 4 then it will be inserted ate index 3 means that 3 elements are smaller than 4, to find out 
// elements greater than 4 total size - elements smaller than 4
// 4 - 3 = 1 , means only 5 is greater than 4