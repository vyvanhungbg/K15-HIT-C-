#include <iostream>

using namespace std;
void InforPoiter(int *&x, char tencontro)
{
    cout << "\nThong tin con tro "<<tencontro<<" luc nay : "<<endl;
    cout << "Ten : "<<tencontro<<endl;
    cout << "Gia tri : "<<*x<<endl;
    cout << "Dia Chi : "<<x<<endl; /// vi x la con tro roi nen x mang dia chi tro vao , neu &x se la dia chi cua con tro
}
int main()
{

    cout << "\n Ly Thuyet "<<endl;
    cout << "Con tro x thi : "<<endl;
    cout << "x la con tro no chua DIA CHI cua bien khac hoac  con tro khac .."<<endl;
    cout << "&x la DIA CHI cua con tro khong quan tam lam !"<<endl;
    cout << "*x la gia tri cua con tro mang ! no chua gia tri bt , thuong la cua bien khac "<<endl;
    cout << "---------------------------------------------------"<<endl;
    int *a , *b;
    a = new int;
    b = new int;
    cout << "Con tro ban dau khoi tao : "<<endl;
    InforPoiter(a,'a');
    InforPoiter(b,'b');


   /// Ngoai tru khai bao ra thi *a mang y nghia la gia tri cua con tro , &a la dia chi cua con tro , a la con tro

    /// gan thu gia tri
    cout << "\n\n\nPhan1------Gan Gia tri cho con tro -----"<<endl;
    *a = 3; /// anh gan gia tri con tro a = 3
    *b = 5;  /// anh gan gia tri con tro b = 5
    InforPoiter(a,'a');
    InforPoiter(b,'b');
    cout << "\nNhan xet :  thay 2 con tro cap phat co 2 dia chi khac nhau nen khong anh huong den nhau \n";



    /// gan dia chi
    cout << "\n\n\nPhan2------ Gan dia chi con tro a = dia chi con tro b -------\n";
    /// &a la dia chi con tro a, nhung minh khong su dung no gan &a=&b ma dung a = b | vi &a la lay dia chi in ra man hinh;
    /// a moi la con tro , vay gan dia chi con tro a = dia chi con tro b la gan con tro a tro den con tro b ,
    a = b;
    InforPoiter(a,'a');
    InforPoiter(b,'b');
    cout << "\n Nhan xet : vi cung 1 dia chi ( o nho ) nen gia tri cua a cung bi thay doi , ( o nho la thu chua gia tri )  "<<endl;
    cout << "o nho A chua gia tri X thi con tro nao tro vao o nho A deu co gia tri X  "<<endl;


    /// Gan dia chi  bien thuong vao con tro de quan li
    int c=3;
    cout << "\n\n\nPhan3------ Gan dia chi con tro a = dia chi bien c -------\n\n";
    a = &c;  /// a la con tro , &c la dia chi bien c , a= &c la gan dia chi bien c vao con tro a;
    cout << "\nDia chi bien c la : &c = "<<&c<<endl;
    cout << "\nGia tri bien c la : c = "<<c<<endl;
    InforPoiter(a,'a');
    cout << "\n Nhan xet : ro rang la con tro a tro vao bien c : thi a mang gia tri dia chi c ( a la con tro nen mang dia chi )"<<endl;
    cout << "\n Duong nhien con tro a tro vao dia chi bien c nen gia tri c cung la gia tri cua con tro a ( *a =c = 3 )"<<endl;

    /// gan dia chi vao mang de quan li
    int *Arr;
    Arr = new int [3];
    Arr[0] = 1;
    Arr[1] = 100;
    Arr[2] = 3;
    /// Ban chat mang la 1 con tro quan li n o nho , con tro nay tro vao dau mang o day la con tro Arr;
    a = Arr ;/// tro con tro a vao o nho ma con tro Arr dang tro ( noi cach khac la gan dia chi con tro Arr vao con tro a )
    cout << "\nDia chi con tro Arr : "<<Arr<<endl;
    InforPoiter(a,'a');
    /// thu duyet mang bang con tro a nhe
    cout << "Mang la : ";
    for(int i=0;i<3;i++)
        cout <<*(a+i)<< " ";



    cout << "\n\n\nTONG KET : Khi con tro A tro vao o nho X thi Con tro A co quyen thay doi gia tri cua x, mac dinh x la bien co dia chi do nen gia tri thay doi theo ( tru khi bien const ) \n";
    cout << "Quan li con tro tot, hieu con tro se giup tranh duoc nhung bug ngam , ! \n\n";



    //delete a;
    //delete b;
    //delete []Arr;

    cout << "----Khai bao duoc thi xoa duoc dung quen nhe :)---\n\n\n";
    return 0;
}
