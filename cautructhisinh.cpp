#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string ten;
//	string lop;

	string ns;
//	string id;
	float a,b,c;};
void nhap(ThiSinh &x){
//	x.id="B20DCCN001";
	getline(cin,x.ten);
	cin>>x.ns>>x.a>>x.b>>x.c;
//	if(x.ns[1]=='/') x.ns="0"+x.ns;
//	if(x.ns[4]=='/') x.ns.insert(3,"0");
	}
void in(ThiSinh x){
	cout<<x.ten<<" "<<x.ns<<" "<<fixed<<setprecision(1)<<(x.a+x.b+x.c)<<endl;}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
