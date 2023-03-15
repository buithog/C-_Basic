#include<bits/stdc++.h>
using namespace std;
int main(){
	long n;
	cin>>n;
	float s=0;
	for(int i=0;i<=n;i++){	
	s += pow(-1,i)/(2*n);
	}
	cout<<s;
	return 0;}

