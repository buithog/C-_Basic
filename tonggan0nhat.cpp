#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n; cin>> n;
		long min =100000;
		long a[n];
		long tmp=0;
		for(int i=0;i<n;i++){
			cin>>a[i];}
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				tmp=a[i]+a[j];
				
					if (abs(tmp) < abs(min) )min = tmp;
				
						
					}
				}
			
		cout<<min<<endl;
		} 
}
	
