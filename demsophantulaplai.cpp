#include<bits/stdc++.h>
using namespace std;
//long u[100000]={0};
int main(){
	int t;
	cin>>t;
	while(t--){
	long n;
	map<int,int> mp;
	cin>>n;
	long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		mp[a[i]]++;
		}int sum=0;
	for(int i=0;i<n;i++){
		if(mp[a[i]]>1)
		sum+=mp[a[i]];
			mp[a[i]]=0;
			}
	cout<<sum<<endl;
//	memset(a,0,sizeof(a));
	}
	return 0;
	}

