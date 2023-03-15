#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n;long k;
		cin>>n>>k;
		long a[n];
	for(int i=0;i<n;i++){
			cin>> a[i];}
			sort(a,a+n,greater<long>());
	for(int i=0;i<k;i++){
		cout<<a[i]<<" ";}
			cout<<endl;}
			return 0;
}


