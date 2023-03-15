#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		long a[100000];
		vector<int> v;
		for(int i=0;i<n;i++){
			cin>>a[i];
			}
		long x=a[0]*a[1];
			v.push_back(x);
		for(int i=1;i<n-1;i++){
			int u=a[i-1]*a[i+1];
			v.push_back(u);
			}
		long y=a[n-2]*a[n-1];
		v.push_back(y);
		for(auto x:v){
			cout<<x<<" ";
			}
			cout<<endl;
		}
	return 0;
	}
