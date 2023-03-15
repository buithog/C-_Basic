#include<bits/stdc++.h>
using namespace std;
int nt(long a){
	for(int i=2;i<sqrt(a);i++){
		if(a%i==0) return 0;
		else return a>1;
		}
	}
int uoc(long n){
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0 && nt(i))
		cout<<i<<endl;
		}
	}
int main(){
	int t;cin>>t;
	while(t--){
		long n;
		cin>>n;
		uoc(n);
		}return 0;
	}
