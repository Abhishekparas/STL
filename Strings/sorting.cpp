#include<bits/stdc++.h>
using namespace std;

bool comp(string s1,string s2){
    if(s1.length() == s2.length()){
        return s1 < s2;
    }
    return s1.length() > s2.length();
}

int main(){
    int n;
    cin>>n;
    cin.get();

    string arr[n];

    for(int i=0; i<n; i++){
        getline(cin,arr[i]);
    }
    sort(arr,arr+n,comp);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}