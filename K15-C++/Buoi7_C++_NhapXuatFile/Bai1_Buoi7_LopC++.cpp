#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    char hoTen[20];
    int tuoi;
    double diemToan , diemHoa , diemLy;

    /// constructor co doi (co tham so truyen vao)
    SinhVien(const char * hoTen,int tuoi, double diemToan, double diemHoa,double diemLy)
    {
        strcpy(this->hoTen,hoTen);
        this->tuoi = tuoi;
        this->diemToan = diemToan;
        this->diemHoa = diemHoa;
        this->diemLy = diemLy;
    }
    /// constructor khong doi
    SinhVien()
    {
        strcpy(this->hoTen,"");
        this->tuoi = 0;
        this->diemToan = 0;
        this->diemHoa = 0;
        this->diemLy = 0;
    }

    void nhap()
    {
        cout << "\nNhap ho Ten : ";fflush(stdin);gets(hoTen);
        cout << "\nNhap Tuoi   : ";cin>>tuoi;
        cout << "\nNhap diem Toan : ";cin>>diemToan;
        cout << "\nNhap diem Hoa  : ";cin>>diemHoa;
        cout << "\nNhap diem Ly   : ";cin>>diemLy;
    }
    void xuat()
    {
        cout <<setw(10)<<hoTen<<setw(10)<<tuoi<<setw(10)<<diemToan<<setw(10)<<diemHoa<<setw(10)<<diemLy<<setw(10)<<(diemHoa+diemLy+diemToan)/3<<endl;
    }

};

void NhapDSSV(SinhVien sv[], int n)
{
    cout << "--------------Nhap DSSV --------------"<<endl;
    for(int i=0;i<n;i++)
    {
        cout << "Nhap sinh vien thu : "<<i;
        sv[i].nhap();
    }
}
void XuatDSSV(SinhVien sv[], int n)
{
    cout <<setw(10)<<"ho Ten"<<setw(10)<<"tuoi"<<setw(10)<<"diem Toan"<<setw(10)<<"diem Hoa"<<setw(10)<<"diem Ly"<<setw(10)<<"DiemTB"<<endl;
    for (int i=0;i<n ;i++ )
    {
        sv[i].xuat();
    }

}

SinhVien testNhanh(const char * hoTen,int tuoi, double diemToan, double diemHoa,double diemLy)
{
    SinhVien x;
        strcpy(x.hoTen,hoTen);
        x.tuoi = tuoi;
        x.diemToan = diemToan;
        x.diemHoa = diemHoa;
        x.diemLy = diemLy;
        return x;
}
int main()
{
    int n=5;
//    do
//    {
//        cin>>n;
//    }while(n<2);
//
//    SinhVien sv[n];
//    NhapDSSV(sv,n);
    SinhVien sv[n]={
        testNhanh("Hung",19,10,8,5.6),
        testNhanh("Ha",19,7,10,5.9),
        testNhanh("Hong",19,9.5,9.5,7),
        testNhanh("Mai",20,8.5,8.5,6),
        testNhanh("Long",19,6.5,8.5,6),

    };

    XuatDSSV(sv,n);
    return 0;
}
