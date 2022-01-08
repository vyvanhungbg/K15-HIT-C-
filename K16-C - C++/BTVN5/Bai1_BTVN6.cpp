#include<iostream>
using namespace std;
void NhapMang(int a[], int n)
{
	for(int i=0; i<n; i++)
    {
		do
        {
            cin >> a[i];
            if(a[i] <= 0 )
                cout<<"Nhap so nguyen duong . Nhap lai"<<endl;
        }while(a[i] <= 0);
	}
}

//void NhapMang(int a[], int &n)  /// neu nhap ca n trong ham thi can truyen & de n nhan gia tri khi ra khoi ham
//{
//    do
//    {
//        cout<<"n = ";cin>>n;
//        if(n <= 0 || n >= 100)
//            cout<<"Sai dieu kien . Nhap lai"<<endl;
//    }while(n <= 0 || n >= 100);
//	for(int i=0; i<n; i++)
//    {
//		do
//        {
//            cin >> a[i];
//            if(a[i] <= 0 )
//                cout<<"Nhap so nguyen duong . Nhap lai"<<endl;
//        }while(a[i] <= 0);
//	}
//}

void XuatMang(int a[], int n)
{
	for(int i=0; i<n; i++)
		cout << a[i] << " ";
}

bool SoDenDui(int n) {
	while(n != 0)
    {
		int du = n % 10;
		if(du != 4 && du != 7) {  /// xuat hien so khac 4 va 7 thi sai luon
			return false;
		}
		n = n / 10;
	}
	return true;
}

void XoaChiSo(int a[], int &n, int viTri) {   /// xoa thi so luong phan tu giam can truyen &n
	for(int i=viTri; i<n-1; i++) {
		a[i] = a[i+1];
	}
	n--;
}

void XoaTatCaCacSoDenDui(int a[], int &n) {
	for(int i=0; i<n; i++) {
		if(SoDenDui(a[i])) {
			XoaChiSo(a, n, i);
			i--;   /// i-- de tranh loi 2 phan so den dui dung gan nhau , co the dung while thi khong phai i--
		}
	}
}

void SapXep(int a[], int n) {
	for(int i=0; i<n; i++)
    {
		for(int j=i+1; j<n; j++)
        {
			if(a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}

int main() {

	int n;
    do
    {
        cout<<"n = ";cin>>n;
        if(n <= 0 || n >= 100)
            cout<<"Sai dieu kien . Nhap lai"<<endl;
    }while(n <= 0 || n >= 100);
	int a[n];
	NhapMang(a, n);
	XoaTatCaCacSoDenDui(a, n);
	SapXep(a, n);
	XuatMang(a, n);
	return 0;
}
