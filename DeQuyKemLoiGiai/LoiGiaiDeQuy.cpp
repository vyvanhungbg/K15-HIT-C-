#include <iostream>
#include <math.h>
using namespace std;
int UCLN(int a, int b) /// Cau 1 : cach 1 voi a,b so nguyen duong
{
    if(b==0) return a;
    if(a%b==0) return b;
    return UCLN(b,a%b);
}
int UCLN2(int a, int b) /// Cau1 : cach 2
{
    if(a==b)return a;
    if(a>b) return UCLN2(a-b,b);
    return UCLN2(a,b-a);
}

long GiaiThua(int n)   /// cau 2  voi n>0
{
    if(n==0 || n==1) return 1;
    return n*GiaiThua(n-1);
}

long hai_mu_n(int n)  /// cau 3 cach 1 voi n>0
{
    if(n==0) return 1;
    return 2*hai_mu_n(n-1);
}
long hai_mu_n_cach_2(int n) /// cau 3 cach 2
{

    if(n==0) return 1;
    else
    {
        long tmp = hai_mu_n_cach_2(n/2);
        if(n % 2 ==0) return tmp*tmp;
        return tmp*tmp*2;
    }
}

long Fx_Cau4(int n)  /// cau 4 voi moi n
{
    if(n<=0) return 0;
    return 2*n + Fx_Cau4(n-1);
}

long fibonaci(int n) /// cau 5 cach 1 | voi n >=1   vd 1,1,2,3,5....
{

    if(n==1 || n==2) return 1;
    return fibonaci(n-1)+fibonaci(n-2);
}
long fibonaci2(int a[],int n)  /// cau 5 cach  2 luu lai nhung gi da dinh can khai bao int a[n+1] = {0,1,1} bieu thi 2 so dau
{
        if(a[n] == 0)
            a[n] = fibonaci2(a,n-1) + fibonaci2(a,n-2);
        return a[n];

        /// int main()
        ///{    int n= ?;
        ///   int a[n+1] = {0,1,1};
        ///    cout << fibonaci2(a,n);
        ///}
}
long fibonaci3(int n) /// cau 5 cach 3  // khong phai de quy :( day cho la 1,1,2,3,5...
{
    int soTruocNua=1,soTruoc =1,soHienTai=2;
    if(n<2) return 1;

    for(int i=2;i<n;i++)
    {
        soHienTai = soTruoc+soTruocNua;
        soTruocNua = soTruoc;
        soTruoc = soHienTai;
    }

    return soHienTai;
}

long Fx_Cau6(int n) ///Bai 6 voi n>=0  day vd 4,3,-2,-6,-5,0,4....
{
    if(n==0) return 4;
    if(n==1) return 3;
    return Fx_Cau6(n-1) - Fx_Cau6(n-2) -1;
}

long A(int m,int n) ///Bai 7
{
    if(m==0) return n+1;
    if(n==0) return A(m-1,1);
    return A(m-1,A(m,n-1));
}

long Fx_Cau8(int m, int n) /// BAi8
{
    if(n<=0) return m+1;
    if(m<=0) return n+1;
    return Fx_Cau8(m-1,n) + Fx_Cau8(m,n-1);
}

long Bai9(int n) /// Bai 9 voi n>=1 vd 1,1,3,5,11,21,43..
{
    if(n==1 || n==2) return 1;
    return Bai9(n-1)*2 + pow(-1,n+1);
}

long Bai10(int n) /// Bai 10 voi n>=1 vd 1,2,5,26,677,458330...
{
    if(n==1) return 1;
    return Bai10(n-1)*Bai10(n-1)+1;
}

long Demx(int a[],int n, int x) ///Bai 11 dem x xuat hien trong day a co n phan tu
{
    if(n<1) return 0;
    if(a[n-1] ==x )
        return Demx(a,n-1,x)+1;
    return Demx(a,n-1,x);
}


long TinhTongMangA(int a[], int n) /// Bai 12 / tinh tong cac phan tu trong mang a
{
    if(n<1) return 0;
    return TinhTongMangA(a,n-1)+a[n-1];
}

int DemChuSo(int n)  /// Bai 13 tinh so cac chu so trong so Nguyen Duong N
{
    if(n<10) return 1;
    return 1+ DemChuSo(n/10);
}
/// Bai 14 la bai giai thua da lam

int Pn_Bai15(int n) /// Bai 15 Tinh P(n) = 1.3.5.7....(2n+1) n>=0
{
    if(n==0) return 1;
    return Pn_Bai15(n-1) * (2*n+1);
}

int Sn_Bai16(int n)  /// Bai 16 Tinh S(n) = 1+ 1.2 + 1.2.3 + 1.2.3+..1.2.3...n n>0
{
    if(n ==1) return 1;
    return Sn_Bai16(n-1)+GiaiThua(n);
}
int Sn_Bai16_Cach2(int n) ///Bai 16 cach 2
{
    if(n==1) return 1;
    int tmp=1;
    for(int i=1;i<=n;i++) tmp*=i;
    return Sn_Bai16_Cach2(n-1) + tmp;
}

int Sn_Bai17(int n)  /// Bai 17 Tinh S(n) = 1^2+2^3+3^2+...+n^2 voi n>0
{
    if(n==1) return 1;
    return Sn_Bai17(n-1) + n*n;
}

 /// Bai 18 trung bai 17

void Sn_Bai19(int n)  /// Doi sang he nhi phan so nguyen duong n
{
    if(n<1) return;
    else
    {
        Sn_Bai19(n/2);
        cout <<n%2;
    }
}
int main()
{

    return 0;
}
