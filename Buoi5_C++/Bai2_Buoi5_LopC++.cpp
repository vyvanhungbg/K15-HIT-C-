#include <bits/stdc++.h>
using namespace std;

 void XoaChiSoK(char *&str, int k)
{
    int len = strlen(str)-1;
    for(int i=k;i<len ;i++)
        str[i] = str[i+1];
    str[len] = '\0'; /// ki tu ket thuc chuoi
    str = (char*) realloc(str,(len+1)*sizeof(char));
}
void ChuanHoa(char *str)
{
    while(str[0] == ' ') /// Xoa Dau cach o dau
        XoaChiSoK(str,0);

    while(str[strlen(str)-1] == ' ') /// Xoa Dau cach cuoi
        XoaChiSoK(str,strlen(str)-1);

    for(int i=1; i<strlen(str)-1; i++) /// Xoa 2 dau cach gan nhau
    {
        if(str[i] == ' ' && str[i+1] == ' ')
        {
            XoaChiSoK(str,i+1);
            i--;
        }
    }

    strlwr(str); /// chuyen het chuoi ve thuong
    str[0] -=32;
    for(int i=1; i<strlen(str)-1; i++) /// Viet hoa sau dau cach va chu dau dong ,
    {
        if(str[i] == ' ' && str[i+1] != ' ')
        {
           str[i+1] -= 32; /// Xem ma ascii
        }
    }
}
void XoaCacChuSo(char *str)
{   int tong=0;
    for(int i=1; i<strlen(str)-1; i++)
    {
        if(str[i] >= '0' && str[i] <='9')
        {
            tong+= int(str[i]) -48;
            XoaChiSoK(str,i);
            i--;
        }
    }
    cout << "\nTong cac chu so :"<<tong<<endl;
}

int main()
{

    char *a;
    int n=100;
    //cin>>n;
    a = new char[n];
    cin.ignore();
    cin.getline(a,n);
    //a = new char[100];
    //gets(a);
    cout<< "Chuoi la :" <<a;
    XoaCacChuSo(a);
    ChuanHoa(a);
    cout <<strlen(a);



    delete []a;
    return 0;
}
//a = (int*) realloc(a,n*sizeof(int));
