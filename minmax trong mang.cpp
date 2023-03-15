#include<bits/stdc++.h>
using namespace std;
long a[1000000];
int nhap(int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
		}
		sort(a,a+n);
	}
int minmax(int n){
	cout<<a[0]<<" "<<a[n-1]<<endl;}
int main(){
	int t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		nhap(n);
		minmax(n);
		}
	return 0;
	}
	
