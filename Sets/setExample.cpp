#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	set<pair<int, int>> s;
	s.insert({1, 2});

	s.insert({3, 4});
	s.insert({5, 6});
	s.insert({20, 1});
	s.insert({20, 100});
	s.insert({11, 12});
	s.insert({13, 14});

	auto it = s.lower_bound({20, 1});

	auto it1 = s.upper_bound({20, 1});
	cout << it->first << " " << it->second << endl;

	cout << it1->first << " " << it1->second << endl;


	// for (auto x : s) {
	// 	cout << x.first << " " << x.second << endl;
	// }

	return 0;
}