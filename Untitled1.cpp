#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		long long u=pow(10,12);
		long long tong=1;
		cin>>n;
		if(n>u) cout<<"0"<<endl;
		else
			{for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				tong+=i;
				tong+=n/i;
				}}
			if(tong == n){
				cout<<"1"<<endl;
				}
				else
				cout<<"0"<<endl;}}
				return 0;}
