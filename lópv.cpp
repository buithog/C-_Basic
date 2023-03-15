#include<bits/stdc++.h>

using namespace std;
class SinhVien{
	private:
		string ten,id,sn,masv;
		float gpa;
	public:
		void nhap(){
		ten=id=sn="";gpa=0;
			masv="B20DCCN001";
			getline(cin,ten);
			cin>>id>>sn>>gpa;
			if(sn[1]=='/') sn='0'+sn;
			if(sn[4]=='/') sn.insert(3,"0");
			}
		void xuat(){
			cout<<masv<<" "<<ten<<" "<<id<<" "<<sn<<" "<<fixed << setprecision(2) <<gpa;}
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
