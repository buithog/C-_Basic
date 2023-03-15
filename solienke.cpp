#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--){
		long long n;
		cin>>n;
		long long a[20];
		int c=0;
		while(n>9){
			a[c]+= n%10;
			n=n/10;c++;}
		a[c+1]=n;
		for(int i=1;i<c+1;i++){
			if(a[i]-a[i+1]== -2 ) {cout<<"No";return 0;}
			else cout<<"Yes";return 0;
			}
			cout<<endl;}}
			
