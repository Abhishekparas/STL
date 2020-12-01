#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  list<int> l{1,2,3,4,5,6};
  list<string> l1{"apple","mango","banana","peach","papaya"};
  l1.push_back("coconut");

  l1.sort();
  l1.reverse();

  cout<<l1.front()<<endl;
  l1.pop_front();

  l1.push_front("kiwi");
  cout<<l1.back()<<endl;
  l1.pop_back();

  int toBeRemoved = 4;
  l.remove(toBeRemoved);


  auto it = l.begin();
  it++;
  it++;
  l.erase(it);

  auto it1 = l.begin();
  it1++;
  it1++;
  l.insert(it1,3);

  for(auto x: l){
    cout<<x<<endl;
  }

  for(auto x: l1)
  {
    cout<<x<<" ";
  }

  return 0;
}
