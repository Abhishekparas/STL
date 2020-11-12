#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> a;
	vector<int> b(5,10); //vector has 5 elements and all are intialized with value 10
	vector<int> c(b.begin(),b.end());
	vector<int> d{1,2,3,4,5};
	
	for(int i=0; i<c.size(); i++){
		cout<<c[i]<<" ";
	}
	cout<<endl;
	for(auto it = b.begin(); it != b.end(); it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	for(auto x: d){
		cout<<x<<" ";
	}
	cout<<endl;
	vector<int> v;
	int n;
	cin>>n;
	for(int i=0 ;i<n; i++){
		int num;
		cin>>num;
		v.push_back(num);
	}
	for(auto x: v){
		cout<<x<<" ";
	}
	cout<<endl;
	
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl; 			//size of underlying array
	cout<<v.max_size()<<endl;
	
	cout<<d.size()<<endl;
	cout<<d.capacity()<<endl;
	cout<<d.max_size()<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
