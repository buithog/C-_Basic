#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];}
		set <int> v;
		for(int i=0;i<n;i++){
			while(a[i]>9){
				v.insert(a[i]%10);
				a[i] /=10;		
			}
			v.insert(a[i]);
		}
		for(set<int>::iterator it = v.begin(); it != v.end(); it++) cout << *it << " "; 
		cout<<endl;
	}
	return 0;
}
