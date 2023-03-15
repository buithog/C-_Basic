#include<bits/stdc++.h>
using namespace std;
string chuan(string &name){
	stringstream ss(name);
	string res="";
	string token;
	while(ss>>token){
		res+= toupper(token[0]);
		for(int i=1;i< token.length();i++){
			res+=tolower(token[i]);}
					res+=" ";}
	
			res.erase(res.length()-1);
			return res;}

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
	a.ten=chuan(a.ten);	
 	in>>a.lop>>a.ns>>a.gpa;
	if(a.ns[1] =='/'){ a.ns="0"+a.ns;}
	if(a.ns[4] =='/') {a.ns.insert(3,"0");}
	 
	 return in;
	 }
			
ostream& operator <<(ostream &out,SinhVien a){
	cout<<a.id<<" "<< a.ten<<" "<<a.lop<<" "<<a.ns<< " "<<fixed << setprecision(2) <<a.gpa;
	return out;
	}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
