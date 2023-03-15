#include <bits/stdc++.h>
#include <string>
using namespace std;

 struct NhanVien {
 	
 string id,ht,dc;
 	 string gt,ns,mst,nkhd;
 } ;
  
void nhap(NhanVien& a){
	a.id = "00001";
	getline(cin,a.ht);
	cin>>a.gt;	
	cin>>a.ns;	
	cin.ignore();
	getline(cin,a.dc);
	cin>>a.mst;
	cin>>a.nkhd;
}

void in(NhanVien a){
	cout<<"00001"<<" "<<a.ht<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" "<<a.mst<<" "<<a.nkhd;

	
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
