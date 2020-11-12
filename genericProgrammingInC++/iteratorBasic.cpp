#include<bits/stdc++.h>
using namespace std;

template<typename ForwardIterator, typename T>
ForwardIterator search(ForwardIterator start, ForwardIterator end, T key) {
	while (start != end) {
		if (*start == key) {
			return start;
		}
		start++;
	}
	return end;
}

int main()
{
	list<int> l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(5);
	l.push_back(3);
	int key = 6;
	auto it = search(l.begin(), l.end(), key);
	if (it == l.end()) {
		cout << "Element not present" << endl;
	}
	else {
		cout << (*it) << endl;
	}

	return 0;
}