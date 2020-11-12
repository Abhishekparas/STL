#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	//priority_queue<int> pq;
	priority_queue<int, vector<int>, greater<int> >pq;
	for (int i = 1; i <= n; ++i)
	{
		int num;
		cin >> num;
		pq.push(num);
	}
	while (!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}
	return 0;
}