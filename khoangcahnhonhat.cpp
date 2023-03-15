#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];}
		sort(a,a+n);
		int	min=a[n-1]-a[n-2];
		for(int i=0;i<n;i++){
			if(a[i+1]-a[i]<min){
				min=a[i+1]-a[i];}}
		cout<<min<<endl;}}
