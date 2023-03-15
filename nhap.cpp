#include <iostream>
#include<vector>
using namespace std;
class hang;
class banggia;
class hangban;
class hang{
	protected:
		string mahang, tenhang;
		long gia;
	public:
		friend class banggia;
		friend class hangban;
		void nhap(){
			cout << "nhap ma hang, ten hang, gia: \n";
			cin >> mahang >> tenhang >> gia;
		}
		void xem(){
			cout << mahang << " " << tenhang << " " << gia << endl;
		}
};
class banggia{
	vector<hang> dshang;
	public:
		void nhapbp(){
			int ts;
			hang x;
			cout << "\nNhap tong so hang: "; cin >> ts;
			for(int i = 0; i < ts; i ++){
				x.nhap();
				dshang[i].push_back(x);
			}
		}
		void xemmh(){
			cout << "\nBang gia cac mat hang:";
			for(int i = 0; i < dshang.size(); i ++){
				dshang.xem();
			}
		}
		hang timten(string t){
			for(int i = 0; i < dshang.size(); i ++){
				if(dshang[i].tenhang == t)
					return dshang[i];
			}
			hang x;
			x.tenhang = " "
			return x;
		}
};
class hangban: public hang {
	private: 
		long soluong, thanhtien;
	public:
		void nhapbp(banggia d){
			string t;
			cout << "\nnhap ten hang: ";
			cin >> t;
			hang x = d.timten(t);
			ten = x.ten;
			gia = x.gia;
			cout << "\nso luong: ";
			cin >> soluong;
			thanhtien = soluong * gia;
		}
		void xemmh(){
			hang::xem();
			cout << " " << soluong << " " << thanhtien << endl;
		}
};
class hoadon: public hangban {
	int sohoadon;
	string khachhang;
	vector<hangban> dshangban,
	long tongtien;
	public:
		void nhapbp(hangban a){
			cout << "\nnhap so hoa don, khachang:";
			cin << sohoadon;
			cin >> khachhang;

		}
};
int main(){
	banggia a;
	a.nhapbp();
	a.xemmh();
//	hoadon b;
//	b.nhapbp(a);
//	b.ghitep();
//	hoadon c;
//	c.doctep();
//	c.xemmh();
}
