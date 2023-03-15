#include<bits/stdc++.h>
using namespace std;
int gcd(long a,long b){
	if(b==0) return a;
	else 
	return gcd(b,a%b);
	}
/*int copy(int a,int x){
	
	for(int i=x;i>0;i--){
		a= a*10+a;
		}
		return a;
	}*/
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,x,y;
		cin>>a>>x>>y;
		int u=gcd(x,y);
		for(int i=0;i<u;i++){
		cout<<a;
		}
		cout<<endl;
		}
		return 0;
	}
