#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,20,11,9,701};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 11;

    auto it = find(arr,arr+n,key);

    // since 11 is ar index 2 means arr+2 now to find the index of 11 , we have to subtract the base
    // address from (it)
    int index = it - arr;
    if(index == n){
        cout<<key<<" not present"<<endl;
    }
    else{
        cout<<key<<" present at index "<<index<<endl;
    }

    return 0;
}