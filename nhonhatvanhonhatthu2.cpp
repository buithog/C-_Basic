#include<bits/stdc++.h>
using namespace std;
int main(){int t;
cin>>t;
while(t--){long n;
cin>>n;
	long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];}
		sort(a,a+n);
for(int i=0;i<n;i++){
	if(a[i]!=a[i+1]){
		cout<<a[i]<< " "<<a[i+1]<<endl;break;
		} else cout<<-1;break;}
		cout<<endl;}}

