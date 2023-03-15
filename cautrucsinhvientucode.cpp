#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ten;
	string lop;

	string ns;
	string id;
	float gpa;};
void nhap(SinhVien &x){
	x.id="N20DCCN001";
	getline(cin,x.ten);
	cin>>x.lop>>x.ns>>x.gpa;
	if(x.ns[1]=='/') x.ns="0"+x.ns;
	if(x.ns[4]=='/') x.ns.insert(3,"0");
	}
void in(SinhVien x){
	cout<<x.id<<" "<<x.ten<<" "<<x.lop<<" "<<x.ns<<" "<<fixed<<setprecision(2)<<x.gpa<<endl;}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
