#include<bits/stdc++.h>
using namespace std;
int sum(int a[],int b[],int m,int n){
	int sum=0;int res=0;
	for(int i=0;i<m;i++){
		sum+=a[i];
		int x=0;
		for(int j=i+1;j<n;j++){
			x+=b[j];
			}
		res=max(res,sum+x);
		}
		return res;
	}
int main(){
	int t;
	cin>>t;
	while(t--){
	int n,k;
	cin>>n>>k;
	int a[n];int b[k];
	for(int i=0;i<n;i++){
		cin>>a[i];
		}
	for(int i=0;i<k;i++){
		cin>>b[i];
		}
	int s1=sum(a,b,n,k);
	int s2=sum(b,a,k,n);
	cout<<max(s1,s2)<<endl;
	}
	return 0;//bug vailozzzzz
}
