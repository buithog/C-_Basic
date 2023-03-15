#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long n;
		//double k= sqrt(a.size());
		cin>>n;
		long a[n];// k= sqrt(a.size());
		for(int i=0;i<sqrt(n);i++){
		
				cin>>a[i];}
				for(int i=0;i<sqrt(n);i++){
					for(int j=0;j<sqrt(n);j++){
						if(i == '0'||i == sqrt(n)-1){
							if(j== '0'|| j==sqrt(n)-1 ){ 
							cout<<a[i][j];}}}}
					cout<<endl;
					return 0;
					}}
