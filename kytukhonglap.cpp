#include<bits/stdc++.h>
using namespace std;
int d[100000]={0};
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		 for(int i=0;i<s.size();i++){
		 	for(int j=0;j<i;j++){
		 		if(s[i]==s[j]){
		 			d[i]=d[j]=1;
		 			}
		 		}}
		 	for(int i=0;i<s.size();i++){
		 		if(d[i]==0){
		 			cout<<s[i];}}
		 			cout<<endl;
		 			memset(d, 0, sizeof(d));
					 }
		 		}
