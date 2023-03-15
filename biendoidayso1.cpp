#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			}
			int cnt=0;
		int l=0,r=n-1;
		while(l<r){
			if(a[l]==a[r]) {
				l++;r--;
				}
			else{
				if(a[l]>a[r]){
					a[r-1]+=a[r];
					r--;cnt++;
					}
				else{
					a[l+1]+=a[l];
					l++;cnt++;
					}
				}
			}
		cout<<cnt<<endl;
		}
		return 0;
		}
