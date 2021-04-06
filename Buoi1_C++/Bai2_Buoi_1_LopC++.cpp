#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b;
    cin >>a>>b;
    cout <<a<< " + "<<b<< " = "<<a+b<<endl;
    cout <<a<< " - "<<b<< " = "<<a-b<<endl;
    cout <<a<< " * "<<b<< " = "<<a*b<<endl;
    cout <<a<< " % "<<b<< " = "<<a%b<<endl;
    cout <<a<< " / "<<b<< " = "<<setprecision(2)<<fixed<<(float)a/b<<endl;
    //setprecision(int n) in ra va lay n chu so dau tien (20/3 = 6.667)
    // fixed : lay x so sau dau thap phan (20/3 = 6.6667) n = 2
    // khai bao thu vien iomanip
    return 0;
}
