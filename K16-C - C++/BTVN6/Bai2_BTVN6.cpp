#include <iostream>
#include <math.h>
using namespace std;

void  nhapN(long &n)
{
    do
    {
        cin >> n;
    }
    while (n<=0);
}

bool CheckSNTCoMotChuSo(long n)
{
    if (n==2||n==3||n==5||n==7)
    {
        return true;
    }
    return false;
}
void XuLy(long n)
{
    int SoCacSNT=0,tmp;
    int a[int(log(n)+1)];
    while(n!=0)
    {
        tmp = n%10;
        if(CheckSNTCoMotChuSo(tmp))
            a[SoCacSNT++] = tmp;
        n/=10;
    }
    (SoCacSNT>0) ? cout<<SoCacSNT<<endl: cout<<"Khong co so nao thoa man"<<endl;
    for(int i=0;i<SoCacSNT;i++)
        cout<<a[i]<<" ";
}
int main()
{
    long n; // de bai khong gioi han co the tran so :(
    nhapN(n);
    XuLy(n);
    return 0;
}
