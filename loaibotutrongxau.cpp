#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){

	string n;
	cin.ignore();
	getline(cin,n);
	cin.ignore();
	string a;
	cin>>a;
	stringstream ss(n);
	string token;
	string res="";
	while(ss >> token){
		if(token != a){
		res+=token;
		res+=" ";}
				}
			//	res.erase(res.length()-1);
				cout<<res;
				}
