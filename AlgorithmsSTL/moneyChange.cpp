#include <bits/stdc++.h>
using namespace std;

#define int long long

bool compare(int a, int b)
{
	return a <= b;
}

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int arr[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
	int money = 168;
	int n = sizeof(arr) / sizeof(arr[0]);

	while (money > 0)
	{
		auto lb = lower_bound(arr, arr + n, money, compare) - arr - 1;
		money -= arr[lb];
		cout<<arr[lb]<<endl;
	}
	return 0;
}