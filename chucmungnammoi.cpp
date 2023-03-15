#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
set<string> v;
cin.ignore();
for(int i=0;i<t;i++){
	string s;
	getline(cin,s);
	v.insert(s);
	}
cout<<v.size()<<endl;
}
