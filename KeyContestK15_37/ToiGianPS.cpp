#include <iostream>
#include <math.h>    // TOI GIAN PHAN SO - Bai 3
using namespace std;
int FindNumber(int a, int b) // Khong han la UCLN , Lay so lon nhat ca ma va tu chia het " bao gom so am"
{
	a=abs(a);b=abs(b);
	if(a==0 || b==0)
        return abs(a-b);
	if(a==b)
        return a;
	if(a>b)
        return FindNumber(a-b,b);
	else
	return FindNumber(a,b-a);
}
void ToiGian(int tuso, int mauso)
{
	int tuso1=tuso ,mauso1= mauso,Number=FindNumber(tuso,mauso);
	while(Number!=1)
	{
		tuso/=Number;
		mauso/=Number;
		Number=FindNumber(tuso,mauso);
		cout <<tuso<< "/"<<mauso;
	}
	if(mauso == 1 || tuso==0)  													// mau =1 thi triet mau
	{
	    cout << tuso;
	    return;
	}
	else if(mauso == -1)
    {
         cout << -tuso;
	    return;
    }
	else if(mauso <0 )
    {
        mauso=-mauso;  tuso=-tuso;

    }         // triet tu và mâu âm
    cout <<tuso<< "/"<<mauso;


//cout <<tuso1<< "\\"<<mauso1<<" = "<<tuso<< "\\"<<mauso;


}
int main()
{
	int tuso, mauso;
	cin>>tuso;	  // :v
	cin>>mauso;
	ToiGian(tuso,mauso);
	return 0;
}
