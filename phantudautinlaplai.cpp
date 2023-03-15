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
			cin>>a[i];
			}
		long ok=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<i;j++){
				if(a[j] == a[i]){
					ok=a[i];
					
					}
				
				}
			}
			if(ok=0) cout<<-1<<endl;
			else cout<<ok<<endl;
		}
			return 0;
}
