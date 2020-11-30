#include<bits/stdc++.h>
using namespace std;

class student{
public :
  string firstName;
  string lastName;
  int rNo;

  student(string fName,string lName, int no){
    this->firstName = fName;
    this->lastName = lName;
    this->rNo = no;
  }
  bool operator==(const student &s) const{
    return rNo == s.rNo;
  }
};

class HashFunc{
  public: 
  size_t operator()(const student &s)const{
    return s.firstName.length() + s.lastName.length();
  }
};

int main(int argc, char const *argv[])
{
  student s1("Abhishek","Parashar",211);
  student s2("Jesse","Pinkman",212);
  student s3("Abhishek","Parashar",213);
  student s4("Jessica","Jones",213);
  
  unordered_map<student,int,HashFunc> mp;
  
  mp[s1] = 100;
  mp[s2] = 120;
  mp[s3] = 10;
  mp[s4] = 15;

  for(auto x: mp){
    cout<<x.first.firstName<<" "<<x.first.rNo<<endl;
  }
  return 0;
}
