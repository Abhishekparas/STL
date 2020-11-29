#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
  pair<int,char> p;
  p.first = 10;
  p.second = 'A';

  pair<int,char> p1(p);
  cout<<p1.first<<endl;
  cout<<p1.second<<endl;

  pair<int,string> p2 = make_pair(20,"apple");
  cout<<p2.first<<endl;
  cout<<p2.second<<endl;

  int a;
  int b;
  cin>>a>>b;
  pair<int,int> p3 = {a,b};
  cout<<p3.first<<" "<<p3.second<<endl;

  pair<pair<int,int>,string> car;
  car.first.first = 10;
  car.first.second = 20;
  car.second = "Creta";

  cout<<car.first.first<<" "<<car.first.second<<" "<<car.second<<endl;










  return 0;
}
