#include<bits/stdc++.h>
using namespace std;

#define int long long

bool compare(int a, int b) {
	return a < b;
}

void bubbleSort(int arr[], int n, bool (&cmp)(int a, int b)) {
	for (int i = 1; i <= n - 1; ++i)
	{
		for (int j = 0; j <= n - i - 1; ++j)
		{
			if (compare(arr[j], arr[j + 1])) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int arr[5] = {1, 2, 3, 4, 5};
	int n = 5;
	cout << "array before sorting :" << endl;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout << arr[i] << " ";
	}
	bubbleSort(arr, n, compare);
	cout << endl;
	cout << "array after sorting : " << endl;

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout << arr[i] << " ";
	}
	return 0;
}