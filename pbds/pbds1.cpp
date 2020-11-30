#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>PBDS;

// if we want to have duplicate entries int pbds then

typedef tree<pair<int, int>, null_type, less<pair<int, int> >, rb_tree_tag, tree_order_statistics_node_update>PBDS;

int main(int argc, char const *argv[])
{
	PBDS st;
	// st.insert(1);
	// st.insert(4);
	// st.insert(3);
	// st.insert(15);
	// st.insert(10);


	st.insert({1,0});
	st.insert({4,1});
	st.insert({3,2});
	st.insert({15,3});
	st.insert({10,4});
	st.insert({10,5});
	st.insert({10,6});
	// st.insert(4);



	// find_by_order => returns the iterator to the kth largest element starting form index 0 in O(log n)
	for (int i = 0; i < st.size(); i++) {
		cout << i << " " << (st.find_by_order(i)->first)<<" "<<st.find_by_order(i)->second << endl;
	}
	// order_of_key => returns the number of element in the set which are strictly less then k in O(log n)

	// suppose i want to find out the order_of_key(5),then it should return me 3 because it will tell me the index
	// where 5 should come, now 5 isn't present in the set but still it give the index 3 which tells us that there are
	// 3 small element than 5 at index 0,1,2 indexes
	// cout << st.order_of_key(5) << endl;
	// it behaves exactly like set except for the time complexity

	return 0;
}
