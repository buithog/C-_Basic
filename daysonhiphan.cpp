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
			cin>>b[i];
			}
		int max=0;
		for(int i=0;i<n;i++){
			int sum1=0,sum2=0;
			for(int j=i;j<n;j++){
				sum1+=a[j];
				sum2+=b[j];
				
			if(sum1 == sum2 ){
				int u=j - i+1;
				if(u>max) max=u;
				}
			}
		}
			cout<<max<<endl;
		}
		return 0;
	}
		
