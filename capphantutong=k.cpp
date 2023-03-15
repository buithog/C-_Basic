#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n; int k;
		
		cin>>n>>k;
		long a[n];
		int dem=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];}
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					if(a[i]+a[j]==k){
						dem++;
						}}}
						cout <<dem;
						cout<<endl;}}

