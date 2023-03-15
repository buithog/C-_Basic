#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private :
	string ten,ns,lop;
	float gpa;
	public :
		void nhap(){
			getline(cin,ten);
			cin>>lop>>ns>>gpa;
			if(ns[1]=='/') ns="0"+ns;
			if(ns[4]=='/') ns.insert(3,"0");
			
			}
		void xuat(){
			cout<<"B20DCCN001"<<" "<<ten<<" "<<lop<<" "<<ns<<" "<<fixed<<setprecision(2)<<gpa<<endl;
			}
};
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
