#include <bits/stdc++.h>
using namespace std;
void NhapMang(float *a, int n)
{
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void XuatMang(float *a, int n)
{
    cout <<"\nMang :";
    for(int i=0;i<n;i++)
        cout <<a[i] << " ";
}

void XoaChiSoK(float *&a,int &n,int vt){
	for(int i=vt;i<n-1;i++){
		a[i]=a[i+1];
	}
	n--;
	a = (float*)realloc(a,n*sizeof(float));
}
float TimMax(float *a , int n)
{
    float Max=a[0];
    for(int i=0;i<n;i++)
        if(Max <a[i])
            Max=a[i];
    return Max;
}
int XoaTatCaMax(float *&a , int &n)
{
    int dem=0;
    float Max=TimMax(a,n);
    for(int i=0;i<n;i++)
    {
        if(a[i] == Max)
        {
            XoaChiSoK(a,n,i--);
            dem++;
        }
    }
    return dem;
}
void ghiFile(float *a, int &n, const char * path)
{
    fstream f;
    f.open(path,ios::out);
    int dem = XoaTatCaMax(a,n);
	for(int i=0;i<n;i++){
		f<<a[i]<<" ";
	}
	f <<endl;
	f << "So phan tu da xoa la : "<<dem<< " phan tu"<<endl;
	f.close();
}
void docFile(float *a, int n, const char * path )
{
    cout <<endl;
    fstream f;
    f.open(path, ios::in);
	char s[255];
	while(!f.eof()){
		f.getline(s, 255);
		cout << s << endl;
	}
	f.close();
}
int main()
{
    float *a;
    int n=7;
    const char *path ="ABC03.TXT";
    a = new float [n]{3,5.5,1,5.5,5,5,3};

    XuatMang(a,n);
    ghiFile(a,n,path);
    docFile(a,n,path);
    delete []a;
    return 0;
}

