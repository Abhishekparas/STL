#include<bits/stdc++.h>
using namespace std;

template<typename T>

int search(T arr[], int n, T key) {
	for (int i = 0 ; i < n; i++) {
		if (arr[i] == key) {
			return i;
		}
	}
	return -1;
}

int main() {

	int arr[] = {1, 2, 3, 4, 10, 12};
	int n = sizeof(arr) / sizeof(arr[0]);
	int key = 10;
	cout << search(arr, n, key) << endl;

	float b[] = {1.1, 1.2, 1.3};
	float k = 1.2;
	cout << search(b, 3, k) << endl;

	return 0;
}
