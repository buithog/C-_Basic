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
		int max=0;int tong=0;
		int r=0;
		vector <int> v;
		while(v.size()<3){
			for(int i=0;i<n;i++){
				if(a[i]>max){
					max=a[i];
					r=i;
					}}
				v.push_back(max);
				a[r]=-1;
				max=0;
				r=0;}
		for(int i=0;i<=3;i++){
			tong +=v[i];}
		cout<<tong<<endl;
		}
		return 0;
		}
