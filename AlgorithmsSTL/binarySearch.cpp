#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {20,30,40,40,50,100};
    int n = sizeof(arr)/sizeof(arr[0]);

    int key = 69;
    bool present = binary_search(arr,arr+n,key);
    if(present){
        cout<<key<<" present"<<endl;
    }
    else{
        cout<<key<<" not present"<<endl;
    }

    auto it = lower_bound(arr,arr+n,40);
    // give the first element that is >= 40
    // if we want to find the index of that element than 
    // it basically give the first occurence of a element
    int index = it-arr;
    cout<<"Lower bound of 40 is :"<<index<<endl;

    auto it1 = upper_bound(arr,arr+n,40);
    // it gives the first element that is > 40
    int index1 = it1-arr;
    cout<<"Upper bound of 40 is : "<<index1<<endl;

    cout<<"Frequency of 40 is :"<<index1-index<<endl;
    return 0;
}