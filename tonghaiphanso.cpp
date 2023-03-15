#include<bits/stdc++.h>
using namespace std;
long long gdc(long long a,long long b){
	if(b==0) return a;
	else 
	return gdc(b,a%b);}
long long lcm(long long a,long long b){
	return a/gdc(a,b)*b;}
struct PhanSo{
	long tu,mau;};
void nhap(PhanSo &x){
	cin>>x.tu>>x.mau;
	}
void rutgon(PhanSo &x){
	long long mc = gdc(x.tu,x.mau);
	x.tu = x.tu/mc;
	x.mau = x.mau/mc;}
PhanSo tong(PhanSo a,PhanSo b){
	long long m= lcm(a.mau,b.mau);
	a.tu = m/a.mau*a.tu;
	b.tu= m/b.mau*b.tu;
	a.mau=m;
	a.tu+=b.tu;
	rutgon(a);
	return a;}
void in(PhanSo p){
	cout<<p.tu<<"/"<<p.mau<<endl;}
int main(){
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
