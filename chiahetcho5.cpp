#include <iostream>
#include <math.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
	long binarynum;cin>>binarynum;
    long decimalnum = 0, temp = 0, remainder;
    while (binarynum!=0)
    {
        remainder = binarynum % 10;
        binarynum = binarynum / 10;
        decimalnum = decimalnum + remainder*pow(2,temp);
        temp++;
    }
    long i=decimalnum%5;
    if(i==0) cout<<"Yes";
    else 
    cout<<"No";
  cout<<endl;
    }
}
