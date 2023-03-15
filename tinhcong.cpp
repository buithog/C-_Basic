#include<bits/stdc++.h>
using namespace std;
int cnt=0;
class NhanVien{
	private:
		string ma,ten,cv;
		long long lgcb,sn,luong;
		long long phucap,thuong;
	public:
	friend istream& operator>>(istream& in,NhanVien &a){
		cnt++;
		a.ma = "NV";
		cin.ignore();
		getline(cin,a.ten);
		cin>>a.lgcb>>a.sn>>a.cv;
		string s=to_string(cnt);
		while(s.size()<2) s="0"+s;
		a.ma= a.ma+s;
		a.luong =a.lgcb*a.sn;
		if(a.sn>=25) { a.thuong=a.luong*0.2;}
		if(22<=a.sn && a.sn<25) a.thuong = a.luong*0.1;
		if(a.sn<22) a.thuong=0;
		if(a.cv=="GD") a.phucap=250000;
		if(a.cv == "PGD") a.phucap = 200000;
		if(a.cv == "TP") a.phucap= 180000;
		if(a.cv == "NV") a.phucap= 150000;
		return in;}
	friend ostream& operator<<(ostream& out,NhanVien a){
		cout<<a.ma<<" "<<a.ten<<" "<<a.luong<<" "<<a.thuong<<" "<<a.phucap<<" "<<a.luong+a.thuong+a.phucap<<endl;
		return out;
		}
};
int main(){
	int n; cin>>n;
	NhanVien a[n+1];
	for(int i=0;i<n;i++){
	cin>>a[i];}
	for(int i=0;i<n;i++){
	cout<<a[i];}
	return 0;}
