#include <iostream>
#include <iomanip> // khai bao su dung setw()
using namespace std;

int main()
{
    // xuat doc cho de nhin nhe
    cout <<setw(4)<<"VT"<<setw(10)<< "KQ"<<endl;

    for(int i=-50; i<51 ;i++)
    {
        int vitri = i+51;
        if(vitri %5 == 0 && vitri %3 == 0)
            cout <<setw(4)<<vitri<<setw(10)<< "fizzbuzz"<<endl;
        else if(vitri %3 == 0)
            cout <<setw(4)<<vitri<<setw(10)<< "fizz"<<endl;
        else if(vitri %5 == 0)
            cout <<setw(4)<<vitri<<setw(10)<< "buzz"<<endl;
        else
            cout <<setw(4)<<vitri<<setw(10)<<i<<endl;
    }

    return 0;
}
