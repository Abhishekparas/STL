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
    cin.get();          //most likely when i input n, i will press enter button for reading the strings, if i do not inlude this then the new line character will be considered as a input string ,therefore it is wise to use cin.get() to avoid the hassle

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