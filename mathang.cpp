#include<iostream>
#include<algorithm>
using namespace std;
int cnt = 0;
class MatHang{
	private:
		string ma,ten,donvi;
		long long giamua,giaban,loinhuan;
	public :
		
		friend istream& operator>>(istream& in,MatHang &a){	
			
			cnt++;
			a.ma="MH";
			cin.ignore();
			getline(cin,a.ten);
			cin>>a.donvi>>a.giamua>>a.giaban;
			a.loinhuan=a.giaban-a.giamua;
			string s=to_string(cnt);
			while(s.size()<3) s="0"+s;
			a.ma=a.ma+s;
			return in;}
		friend ostream& operator <<(ostream& out,MatHang a){
		cout<<a.ma<<" "<<a.ten<<" "<<a.donvi<<" "<<a.giamua<<" "<<a.giaban<<" "<<a.loinhuan<<endl;
		return out;
		}
	friend bool operator <(MatHang a,MatHang b){
		if(a.loinhuan != b.loinhuan){
			return (a.loinhuan>b.loinhuan);
			}
			else return a.ma<b.ma;
		}
	};
int main () {
    int t;
	cin >> t;
    MatHang a[t];
    for (int i = 0; i < t; i++) {
        cin >> a[i];}
    sort (a, a + t);
    for (int i = 0; i < t; i++) {
        cout << a[i];}
    
	return 0;
}



