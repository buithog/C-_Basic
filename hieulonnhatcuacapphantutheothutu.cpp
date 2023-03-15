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
 		long max=0;int tmp=0;
 		for(int i=0;i<n;i++){
 			for(int j=0;j<i;j++){
 				if(a[i]>a[j]){ 
				 	tmp=a[i]-a[j];
 					if(tmp>max) max=tmp;
 					}
 				}
 			}
 			if(max==0) cout<<"-1"<<endl;
 			else
			 cout<<max<<endl;
 		}
 		return 0;
 		}
