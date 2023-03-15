#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<ctype.h>
using namespace std;
int max(long a, long b){
	if(a<=b){
		return b;
	}
	return a;
}
void giai( string s){
	long long res=0;
	long long sum=0;
	//s+="a";
	vector<int> v;
	long long n=s.size();
	for(int i=0;i<n;i++){
		if(isdigit(s[i])){
			sum+=s[i];
			stoll(sum);
		}
		else{
			v.push_back(sum);
			sum=0;
		}
	}
	sort(v.begin(),v.end());
	//res=max(res,sum);
	cout<<v[0]<<endl;
}

main(){
	int t;
	cin>>t;
	while(t--){
	string s;
	cin>>s;
	giai(s);
	}}
