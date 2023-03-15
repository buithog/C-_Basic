#include<bits/stdc++.h>
using namespace std;
void nhapmang(int n){
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		}}
void minmax(int x){
		int a[x];
	for(int i=0;i<x;i++){
		cin>>a[i];}
//	nhapmang(x);
	sort(a,a+x);
	cout<<a[0]<<" "<<a[x-1];}
int main(){
	int n;
	cin>>n;
	nhapmang(n);
	minmax(n);
	return 0;}
	
