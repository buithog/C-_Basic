#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
	bool a=true;
		for(int i=0;i<s.size()/2;i++){
			if(s[i] != s[s.size()-1-i]) {cout<<"NO"<<endl;a=false;break;}
			
			}
			if(a==true) cout<<"YES"<<endl;}}

			
