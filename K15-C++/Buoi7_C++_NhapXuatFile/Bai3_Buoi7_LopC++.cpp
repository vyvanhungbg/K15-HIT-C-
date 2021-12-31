#include <bits/stdc++.h>

/// Bai 3 can luu y la neu khong co phan tu nao chan thi khong co tbc -> mang k thay the
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

void LamPhangMang(int *a, int n)
{
    int tong=0,dem=0,tbc;
    for(int i=0;i<n;i++)
    {
        if(a[i] %2 ==0)
        {
            dem++;
            tong+=a[i];
        }
    }
    if(dem!=0)
    {
        tbc = tong/dem;
        for(int i=0;i<n;i++)
            if(a[i] < tbc)
                a[i] = tbc;
    }

}

void ghiFile(int *a, int n, const char * path) /// flag =0 ghi bo sung , flag=1 ghi moi
{
    fstream f;
    f.open(path,ios::out);
	for(int i=0;i<n;i++){
		f<<a[i]<<" ";
	}
	f <<endl;
	f.close();
}
void docFile(int *a, int n, const char * path )
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
    int *a,n=6;
    const char *path ="ABC02.TXT";
    a = new int [n]{1,7,3,5,5,9};

    XuatMang(a,n);
    LamPhangMang(a,n);
    ghiFile(a,n,path);
    docFile(a,n,path);

    delete []a;
    return 0;
}

