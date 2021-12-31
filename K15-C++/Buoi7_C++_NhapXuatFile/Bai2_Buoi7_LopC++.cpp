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

void SapXepTang(int *a, int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j] > a[j+1])
                swap(a[j],a[j+1]);
}

void ghiFile(fstream &f,int *a, int n, const char * path , int flag) /// flag =0 ghi bo sung , flag=1 ghi moi
{

    if(flag)
        f.open(path,ios::out);
    else
        f.open(path,ios::app);
	for(int i=0;i<n;i++){
		f<<a[i]<<" ";
	}
	f <<endl;
	f.close();
}
void docFile(fstream &f,int *a, int n, const char * path )
{
    cout <<endl;
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
    int *a,n=5; /// do while n ?
    const char *path ="ABC01.TXT";
    fstream f;
    a = new int [n]{3,6,2,1,7};

    XuatMang(a,n);
    ghiFile(f,a,n,path,1);
    SapXepTang(a,n);
    ghiFile(f,a,n,path,0);
    docFile(f,a,n,path);

    delete []a;
    return 0;
}

