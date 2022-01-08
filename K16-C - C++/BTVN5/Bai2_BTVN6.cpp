#include<iostream>
using namespace std;
void NhapN(int &n)   /// truyen &n de sau khi nhap thi ra khoi ham n van giu ddc gia tri sau khi nhap
{
    do
    {
		cout << "n = ";cin >> n;
		if(n<=0 || n>=100)
			cout << "Nhap sai, Nhap lai ! ";
	}while(n<=0 || n>=100);

}
void NhapMang(int a[], int n){
	for(int i = 0; i < n; i++)
        cin >> a[i];
}
void XuatMang(int a[], int n){
    for (int i = 0; i < n; i++)
       cout << a[i] << " ";
}

void ChenChiSo(int a[], int &n, int viTri, int giaTri)/// Chen lam tang so luong phan tu nen can &n
{
	for(int i=n ; i>viTri ;i--)   /// dan mang ra 1 phan tu ve phia cuoi
        a[i] = a[i-1];
    n++;
    a[viTri] = giaTri;
}

void PhanA(int a[], int &n , int x)  /// Chua ham chen ... nen can &n
{
    int i=0;
    while(a[i]>0 && i<n-1) /// Tim so am dau tien thi dung lai
         i++;
    ChenChiSo(a,n,i+1,x); /// neu ma i < n chung to co xuat hien so am trong mang , khong thi nguoc lai ( +1 ) la chen vao sau

}

/// MOT SO HAM HOAN VI
///Cach 3
void HoanViC(int *a, int *b) // voi ngon ngu C , goi ham nhu sau HoanViC(&a,&b)  .
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
///Cach 2
void HoanViCPP(int &a, int &b)  // void ngon ngu C++ , goi ham nhu sau HoanViCPP(a,b);
{
    int temp = a;
    a = b;
    b = temp;
}

///Canh 4 hoac co the dung ham swap(a,b) trong thu vien , goi ham nhu sau swap(a,b);

/// Cach 5 : Su dung toan tu voi bit a^=b^=a^=b; // KHONG nen dung cach nay

/// Cach 6 : a = a+b;b = a-b;a = a-b; // Su dung toan hoc
void SapXep(int a[], int n) {
	for(int i=0; i<n; i++)
    {
		for(int j=i+1; j<n; j++)
        {
			if(a[i] < a[j])
			{
				int temp = a[i];   /// Cach 7 dung bien trung gian
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

void PhanB(int a[], int n)
{
    //dk mang da sap xep giam dan
    int viTriSoLonNhatCuoiCung=0, viTriSoBeNhatDauTien=n-1;   /// De y sap xep giam dan thi so lon nhat o dau , so be nhat o cuoi
    int i=0;
    while(a[i] == a[0] || a[n-i-1] == a[n-1])   /// a[0] la so lon nhat , a[n-1] la so be nhat
    {
        if(a[i] == a[0]) viTriSoLonNhatCuoiCung++;
        if(a[n-i-1] == a[n-1]) viTriSoBeNhatDauTien--;
        i++;
    }
    while(viTriSoLonNhatCuoiCung < viTriSoBeNhatDauTien)  /// duyet tu phan tu lon nhat cuoi cung den phan tu be nhat dau tien , vd mang 8,8,4,3,2,1 -> duuyet tu 4->6 va hoan vi dau va cuoi ta duoc 8,8, 2,3,4,1
        HoanViCPP( a[viTriSoLonNhatCuoiCung++] ,a[viTriSoBeNhatDauTien--] );

}
int main(){

	int n, x;
	NhapN(n);
	int a[n+1];  /// Khai bao thua 1 phan tu vi bai nay co chen them 1 phan tu
	NhapMang(a, n);
	cout << "\nMang da nhap la: ";
	XuatMang(a, n);

	///Phan A
	cout << "\n\nSo muon chen: ";
	cin >> x;
    PhanA(a, n, x);
	cout << "\nPhan a: Mang sau khi them x: ";
	XuatMang(a, n);

	///Phan B
    SapXep(a,n);
    PhanB(a,n);
    cout << "\nPhan b: Mang sau khi sap xep : ";
    XuatMang(a, n);

	return 0;
}
