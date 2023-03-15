#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string ten,gt,ns,dc,mst,ndky;
};
void nhap(NhanVien &a){
//	for(int i=0;i<n;i++){
		cin.ignore();
		getline(cin,a.ten);
		cin>>a.gt>>a.ns;
		cin.ignore();
		getline(cin,a.dc);
		cin>>a.mst>>a.ndky;}
void inds(NhanVien a[],int n){
	for(int i=0;i<n;i++){
//	 	string s="000";
//		if(i<9) s=s+"0"+to_string(i+1);
//		else
		 string s =to_string (i+1);
		while(s.size()<5) s="0"+s;
		cout<<s<<" "<<a[i].ten<<" "<<a[i].gt<<" "<<a[i].ns<<" "<<a[i].dc<<" "<<a[i].mst<<" "<<a[i].ndky<<endl;}}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
