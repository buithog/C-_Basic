#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
	}
int main(){
	int t;
	cin>>t;
	while(t--){
		long n;
		cin>>n;
		long a[n];
		long b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		//	a[i]=b[i];
			}
		sort(a,a+n);
	//	sort(b,b+n,cmp);
	int indexmax=n-1;
	int indexmin=0;
		for(int i=0;i<n;i++){
			if(i%2 != 0){ cout<<a[indexmin]<<" ";
			indexmin++;
			}
			if(i%2 == 0) { cout<<a[indexmax]<<" ";
			indexmax--;
			}
		}
			cout<<endl;
		}
		return 0;
		}
