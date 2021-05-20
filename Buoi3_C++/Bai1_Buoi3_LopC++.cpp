#include <iostream>
using namespace std;
void NhapMang(int a[], int n)
{
    for(int i=0; i<n; i++)
        cin>>a[i];
}
void XuatMang(int a[], int n)
{
    cout <<endl;
    for(int i=0; i<n; i++)
        cout << a[i]<< " ";
}
int CheckSnt(int n)
{
    for(int i=2; i*i<=n;i++)
        if(n % i ==0)
            return 0;
    return n > 1;
}
int CheckSieuSngt(int n)
{
    if(n<2)
        return 0;
    while(n>0)
    {
        if(!CheckSnt(n%10))
            return 0;
        n/=10;
    }
    return 1;
}
int CheckSieuSieuSnt(int n)
{
    if(!CheckSieuSngt(n))
        return 0;
    while(n>0)
    {
        if(!CheckSnt(n))
            return 0;
        n/=10;
    }
    return 1;
}
void InSoSieuNguyenTo(int a[], int n)
{
    cout << "\nSo Sieu Nguyen To la : ";
    for(int i=0; i<n;i++)
        if(CheckSieuSngt(a[i]))
            cout << a[i]<< " ";

}
void TongCacSoSSNT(int a[], int n)
{
    int sum=0;
    for(int i=0; i<n;i++)
        if(CheckSieuSieuSnt(a[i]))
            sum += a[i];
    cout << "\nTong cac so sieu sieu nguyen to la : "<< sum<<endl;

}
int main()
{
//    int n;
//    do
//    {
//        cout << "Nhap n : ";cin>>n;
//        if(n < 3 || n >= 1000)
//            cout << "\nNhap Sai !"<<endl;
//    }while(n < 3 || n >= 1000);
//    int a[n];
//    NhapMang(a,n);
//    XuatMang(a,n);
    int a[8] = {2,3,233,2352,737,10,4,-733};
    InSoSieuNguyenTo(a,8);
    TongCacSoSSNT(a,8);
    cout << CheckSieuSngt(2852);
    return 0;
}
