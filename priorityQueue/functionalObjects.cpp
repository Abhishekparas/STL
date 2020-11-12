#include <bits/stdc++.h>
using namespace std;

class functionalObjects
{
public:
	void operator()(string str) {
		cout << "Overloaded round brackets" << " " << str;
	}

};

int main(int argc, char const *argv[])
{
	functionalObjects f;
	f("javascript");
	return 0;
}