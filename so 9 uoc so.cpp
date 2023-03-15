#include<bits/stdc++.h>
using namespace std;

int main(){
		long long n;
		cin>>n;
		int dem=0;
			for(int i=36;i<=n;i++){
			int cnt=0;
				int k = sqrt(i);
				if(k*k == i){
				for(int j=1;j<=k;j++){
				if(i%j==0)
					cnt++;}
					if(cnt ==5 ) 
					dem++;
					}}
					cout<<dem<<endl;}
			
		
