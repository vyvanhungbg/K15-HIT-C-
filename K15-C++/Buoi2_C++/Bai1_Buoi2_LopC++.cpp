#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    for(int i=0;i<100;i++)
    {
        if((i) % 10 ==0 && i !=0)  // ke tu dong thu 2 thi i %10 se xuong dong
            cout <<endl;
        cout <<setw(3)<<i;    // ham setw(x) trong thu vien iomanip de thay doi
                            // don rong khi xuat du lieu , mac dinh la can phai
    }
    return 0;
}
