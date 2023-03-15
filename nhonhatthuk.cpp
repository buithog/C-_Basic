#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n; long k;
		cin>>n>>k;
		long a[n];
		for(int i=1;i<=n;i++){
			cin>>a[i];}
			sort(a+1,a+1+n);
			cout<<a[k]<<endl;}}
