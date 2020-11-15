#include<bits/stdc++.h>
using namespace std;
int main() {

	char s[100] = "Apple is a tasty fruit";


	// we can pass any delimeter such as `,` `" "`
	char* ptr = strtok(s, " ");
	cout << ptr << endl;
	while (ptr != nullptr) {
		ptr = strtok(nullptr, " ");
		cout << ptr << endl;
	}

	return 0;
}