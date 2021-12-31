#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    // chu y khong duoc dap gach , phai lat du dien tich
    int n,m,a;
    cin >>n>>m>>a;
    //cach 1 : su dung ham lam tron so nguyen gan nhat ceil(x) trong thu vien math.h
    cout << "So vien gach can mua la : "<<ceil((float)m/a) * ceil((float)n/a)<<endl;

    // cach 2 :
    int soVienCanhN= n / a ,soVienCanhM = m / a;
    if(n % a != 0)
        soVienCanhN ++; // neu le thi them 1 vien chu k dap
    if(m % a != 0)
        soVienCanhM ++; // neu le thi them 1 vien chu k dap
    cout << "So vien gach can mua la : "<<soVienCanhM*soVienCanhN<<endl;
    return 0;
}

