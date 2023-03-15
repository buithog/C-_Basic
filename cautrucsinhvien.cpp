#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
struct SinhVien
{
    string ten, lop, tuoi;
    float gpa;
};
void nhap( SinhVien &x)
{
    getline(cin, x.ten);
    scanf("/n");
    getline(cin, x.lop);
    scanf("/n");
    getline(cin, x.tuoi);
    scanf("/n");
    cin >> x.gpa;
}
void in( SinhVien x)
{
    cout << "B20DCCN001 " << x.ten << " " << x.lop << " ";
    if (x.tuoi.length() == 10)
        cout << x.tuoi;
    else
    {
        if (x.tuoi.length() == ??
        {
            cout << '0';
            for (int i = 0; i < x.tuoi.length(); i++)
            {
                cout << x.tuoi[i];
                if (i == 1)
                    cout << '0';
            }
        }
        else
        {
            if (x.tuoi[0] == '0')
            {
                for (int i = 0; i < x.tuoi.length(); i++)
                {
                    cout << x.tuoi[i];
                    if (i == 2)
                        cout << '0';
                }
            }
            else
            {
                cout << '0' << x.tuoi;
            }
        }
    }
    printf(" %.2f", x.gpa);
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
