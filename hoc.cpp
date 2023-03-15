#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){

	string n;

	getline(cin,n);

	for(int i=0;i<=n.length();i++){
		n[i]=tolower(n[i]);}
	stringstream ss(n);
	vector <string> v;
	string token;
	string tmp="";
	while(ss >> token){
	v.push_back(token);
	}
	for(int i=0;i<v.size()-1;i++){
		v[i][0]=toupper(v[i][0]);
	tmp+=v[i]+" ";}
	tmp.erase(10) ;
	
	for(int i=0;i<v.size();i++){
		v[v.size()-1][i]=toupper(v[v.size()-1][i]);}
		tmp+= ", ";
		tmp+= v[v.size()-1];
		
	cout <<tmp<<endl;
	}

