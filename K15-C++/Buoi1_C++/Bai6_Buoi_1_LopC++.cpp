#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int soDien; // dk soDien>0
    double tienDien = 0;
    do
    {
        cout << "Nhap so dien : ";cin>>soDien;
        if(soDien<0)
            cout << "So dien >0 , Nhap lai ! "<<endl;
    }while(soDien<0);

    if(soDien < 50)
        tienDien = soDien * 1500;
    else if(soDien >= 50 && soDien < 100)
        tienDien = 49 * 1500 + (soDien - 49) * 2500;
    else if(soDien >= 100 && soDien < 150 )
        tienDien = 49 * 1500 + 50 * 2500 + (soDien - 99)*3500;
    else if(soDien >= 150 && soDien < 200)
        tienDien = 49 * 1500 + 50 * 2500 + 50 * 3500 + (soDien - 149)*4000;
    else
        tienDien = 49 * 1500 + 50 * 2500 + 50 * 3500 + 50 * 4000 + (soDien - 199) * 5000;

    cout << "Tien Dien la : "<<setprecision(3)<<fixed<<tienDien<<endl;
    return 0;
}
