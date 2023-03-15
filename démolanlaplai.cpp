#include<iostream>
using namespace std;
int main(){int t; 
cin>>t;
while(t--){
	long n;long k;
	cin>>n>>k;
	long long a[n+1];
	long dem=0;
	if(n<=10000){for(int i=1;i<=n;i++){
		cin>>a[i];}}
	for(int i=1;i<=n;i++){
		if(a[i]==k){
			dem+=1;}}
			if(dem==0){
			cout<<"-1";
			}
			else 
			cout<<dem;
			cout<<endl;
			}
		
		}
