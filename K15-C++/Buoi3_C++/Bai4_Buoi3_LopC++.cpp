#include <iostream>
#include <string.h>
#include <string>
using namespace std;
void XoaChiSoK(char str[], int k)
{
    for(int i=k;i<strlen(str)-1 ;i++)
        str[i] = str[i+1];
    str[strlen(str)-1] = '\0'; /// ki tu ket thuc chuoi
}
void ChuanHoa(char str[])
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

/// Dung kdl string trong thu vien <string>
void lower_string(string &str)
{
	for(int i=0;str[i]!='\0';i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	}
}
void ChuanHoaHamCoSan(string &str)
{
    /// Xoa dau cach o dau va cuoi
    str.erase(0, str.find_first_not_of(' '));
    str.erase(str.find_last_not_of(' ') + 1);
    /// Xoa dau cach o dau
    for(int i=0;i<str.length()-1 ;i++)
        if(str[i] == ' ' && str[i+1] == ' ')
        {
            str.erase(i+1);
            i--;
        }

    lower_string(str);
    str[0]-=32;
    for(int i=1;i<str.length()-1; i++) /// Viet hoa sau dau cach va chu dau dong ,
        if(str[i] == ' ' && str[i+1] != ' ')
           str[i+1] -= 32; /// Xem ma ascii
}
int main()
{
    char str[] = "  vY VaN HuNG   ";
    ChuanHoa(str);
    cout <<str<<endl;

    /// string
    string Str = "  vY VaN HuNG   ";
    ChuanHoaHamCoSan(Str);
    cout <<Str;

    return 0;
}
