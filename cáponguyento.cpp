#include<bits/stdc++.h>
using namespace std;

bool checknt(long a){
if(a<2) return false;
for(int i=2;i<=sqrt(a);i++){
if(a%i==0) {return false; }
else {return true;}}}

void duyet(long n){long u=n-2;
for(int i=3;i<=n;i++){
	
	if(checknt(i)&&checknt(u)){
		cout<<i<<" "<<u;}
		u-=1;}}
int main(){
int t;
cin>>t;
while(t--){
long n;
cin>>n;
duyet(n);
cout<<endl;}}		
