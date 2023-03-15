#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n,x;
		cin>>n>>x;
		long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			}
			sort(a,a+n);int ct;
			auto q=lower_bound(a,a+n,x);
			ct = q-a;

			int tmp=-1;
			for(int j=0;j<*q-x;j++){
				if(a[ct]==a[j] + x){ tmp=1;break;}
				}
		
		cout<<tmp<<endl;
		
	}
		
	

}
