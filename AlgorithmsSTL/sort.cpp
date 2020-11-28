#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b){
    return a > b;
}

int main(int argc, char const *argv[])
{
    
    int arr[5] = {1,2,3,4,5};
    sort(arr,arr+5,compare);
    for (int i = 0; i < 5; i++)
    {
      cout<<arr[i]<<" "; 
    }
    
    return 0;
}
