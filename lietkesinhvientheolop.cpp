#include <bits/stdc++.h>
using namespace std;

class SinhVien {
    private:
        string ma,ten,lop, email;
    public:
        SinhVien();
        friend istream& operator >> (istream &in, SinhVien &a);
        friend ostream& operator << (ostream &out, SinhVien a);
	string getma(){
		return lop;}
};

istream& operator >> (istream &in, SinhVien &a) {
    in >> a.ma;
    in.ignore();
    getline(in, a.ten);
    in >> a.lop >> a.email;
    return in;
}

ostream& operator << (ostream &out, SinhVien a) {
    out << a.ma << " " << a.ten << " " << a.lop << " " << a.email << endl;
    return out;
}

int main () {
    int n; cin >> n;
    SinhVien a;
    vector <SinhVien> v;
    for (int i = 0; i < n; i++) {
        cin >> a;
    	v.push_back(a);
	}
	int k; cin>>k;
	while(k--){
		string u;
		cin>>u;
		for(int i=0;i<v.size();i++){
			if(v[i].getma()==u){
				cout<<v[i];}}}
				return 0;}
    

