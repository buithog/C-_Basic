#include<bits/stdc++.h>
using namespace std;

class SinhVien {
	private :
		string ten,lop,ns,id;
		float gpa;
	public :
		SinhVien(){
			id=ten=lop=ns="";
			gpa=0;
		}
		friend istream& operator>>(istream& in,SinhVien &a);
		friend ostream& operator <<(ostream& out,SinhVien a);
	};
 istream& operator>>(istream &in,SinhVien &a){
 	a.id ="B20DCCN001";
 	getline(in,a.ten);
//	a.ten=chuan(a.ten);	
 	in>>a.lop>>a.ns>>a.gpa;
	if(a.ns[2] !='/'){ a.ns="0"+a.ns;}
	if(a.ns[5] !='/') {a.ns.insert(3,"0");}
	 
	 return in;
	 }
			
ostream& operator <<(ostream &out,SinhVien a){
	cout<<a.id<<" "<< a.ten<< " "<<a.lop<<" "<<a.ns<< " "<<fixed << setprecision(2) <<a.gpa;
	return out;
	}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
