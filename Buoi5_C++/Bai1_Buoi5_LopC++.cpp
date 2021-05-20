#include <bits/stdc++.h>
using namespace std;
void NhapMang(int *a, int n)
{
    for(int i=0;i<n;i++)
        cin>>a[i];
}

void XuatMang(int *a, int n)
{
    cout <<"\nMang :";
    for(int i=0;i<n;i++)
        cout <<a[i] << " ";
}

void XoaChiSo(int *&a, int &n, int pos)
{
    if(pos<0 || pos >=n)
    {
        cout << "Khong the xoa ! Loi pos !"<<endl;
        return;
    }

    for(int i = pos;i<n-1;i++)
        a[i] = a[i+1];
    n--;
    a = (int*) realloc(a,n*sizeof(int));
}

int SNT(int n)
{
    for(int i=2;i*i<=n;i++)
        if(n % i == 0)
            return 0;
    return n>1;
}

void SapXepTang(int *a, int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j] > a[j+1])
                swap(a[j],a[j+1]);
}
int TongChuSo(int n)
{
    n = abs(n);
    int tong = 0;
    while(n!=0)
    {
        tong += n%10;
        n /= 10;
    }
    return tong;
}
void XoaTongChuSoNT(int *a , int &n)
{
    for(int i=0;i<n;i++)
        if(SNT(TongChuSo(a[i])))
        {

            XoaChiSo(a,n,i);
            i--;
        }
}
int main()
{
    int *a,n=10;
    a = new int [n]{12,-21,4,62,0,0,1,10,-21,34};

    //NhapMang(a,n);
    XuatMang(a,n);
    SapXepTang(a,n);
    XuatMang(a,n);
    XoaTongChuSoNT(a,n);
    XuatMang(a,n);



    delete []a;
    return 0;
}
//a = (int*) realloc(a,n*sizeof(int));
