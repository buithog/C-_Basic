#include<bits/stdc++.h>
using namespace std;
int main(){
long t;
cin>>t;
while(t--){
	string s; float dem=15;
	 string d1="101 A B B A D C C A B D C C A B D"; string d2="102 A C C A B C D D B B C D D B B";
	 cin.ignore();
	 getline(cin,s);
	 if(s[2] =='1') {
	 	for(int i=4;i<s.length();i=i+2){
	 		if(s[i] != d1[i]) dem--;}}
	 		 if(s[2] =='2') {
	 	for(int i=4;i<s.length();i=i+2){
	 		if(s[i] != d2[i]) dem--;}}
	 	cout<<fixed<<setprecision(2)<<dem*10/15<<endl;}	}
	 
