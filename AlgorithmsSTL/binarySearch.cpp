#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {20,30,40,50,100};
    int n = sizeof(arr)/sizeof(arr[0]);

    int key = 69;
    bool present = binary_search(arr,arr+n,key);
    if(present){
        cout<<key<<" present"<<endl;
    }
    else{
        cout<<key<<" not present"<<endl;
    }

    return 0;
}