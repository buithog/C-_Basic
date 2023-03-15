#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n;long max=1;
		cin>>n;
		long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];}
			for(int i=0;i<n;i++){
				if(a[i]>max){
					max=a[i];}}
					cout<<max<<endl;}}
