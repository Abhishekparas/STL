#include<bits/stdc++.h>
using namespace std;


int main(){
    string s1;
    string s2("hello");
    string s3 = "abhishek";
    string s4(s3);
    string s5 = s4;
    
    char arr[] = {'a','b','c','d','e','\0'};
    string s6(arr);

    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;
    cout<<s6<<endl;
    if(s1.empty()){
        cout<<"s1 is empty !!"<<endl;
    }
    s1.append("i hate python");
    cout<<s1<<endl;
    s1 += " and love c++";
    cout<<s1<<endl;
    cout<<s1.length()<<endl;
    s1.clear();
    cout<<s1.length()<<endl;


    string s7 = "Apple";
    string s8 = "Mango";

    // compare returns an integer, if they are equal returns 0, else it returns >0 or <0
    // here we are comparing s7 with s8
    // this will result in a negative number because Apple is lexicographically smaller than s8
    cout<<s7.compare(s8)<<endl;
    // here we are comparing s8 with s7
    // this will result in a positive number because Mango is lexicographically bigger than Apple
    cout<<s8.compare(s7)<<endl;

    // basically first string is compared with second string, now if first string is smaller than returns -1, if first string is bigger tha returns >1 and if both of them are equal than returns 0

    // overloaded operators 
    if(s7 < s8){
        cout<<"Apple is lexicographically smaller than Mango"<<endl;
    }


    string str = "I am the one who knocks";
    int idx = str.find("who");
    int i = str.find("walter");
    cout<<i<<endl;          //returns -1 ,since walter is not present in str;
    cout<<idx<<endl;


    string s = "Yeah!! science bitch";
    int index = s.find("science");
    string sx = "science";
    int len = sx.length();
    // starts erasing from index and erases len characters from index
    s.erase(index,len);
    cout<<s<<endl;


    for(string::iterator it=s.begin(); it != s.end(); it++){
        cout<<(*it);
    }
    cout<<endl;
    for(auto x: s){
        cout<<x;
    }

    return 0;
}