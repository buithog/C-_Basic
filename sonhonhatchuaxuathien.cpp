#include<bits/stdc++.h>
using namespace std;
long b[100000] = {0};
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
		for(int i=0;i<n;i++){
			if(a[i]>0) b[a[i]]=1;
			
			}
			int ok=0;
		for(int i=1;i<10000;i++){
			if(b[i] == 0){ cout<<i<<endl;
			break;
				}
			}
			memset(b,0,sizeof(b));
		}
		return 0;
	}
	
