#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		long a[n];
		long b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			}
		for(int i=0;i<n;i++){
			b[i]=-1;}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
			if(i==a[j]) b[i]=a[j];}}
			for(int i=0;i<n;i++){
				cout<<b[i]<<" ";}
				cout<<endl;
				}}
