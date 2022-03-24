#include <bits/stdc++.h>
#include <Windows.h>
using namespace std;
int Random(int from , int to)
{
   // Sleep(10);
	int number = rand() % (to - from + 1) + from;
	return number;
}
int tinhTong(int a[], int n)
{
    int tong = 0;
    for(int i=0;i<n;i++)
        tong+=a[i];
    return tong;
}
void Xuat(int a[], int n)
{
    cout <<endl;
    for(int i=0;i<n;i++)
        cout <<a[i] << " ";
    cout <<endl;
}

void Nhap(int a[], int n, int from, int to)
{
    for(int i=0;i<n;i++)
        a[i] = Random(from,to);
}
void WriteFileArr(fstream &f,int *a, int n,  string path , int flag) /// flag =0 ghi bo sung , flag=1 ghi moi
{

    if(flag)
        f.open(path,ios::out);
    else
        f.open(path,ios::app);
    f<<n<<endl;
	for(int i=0;i<n;i++){
		f<<a[i]<<" ";
	}
	f <<endl;
	f.close();
}

void WriteFileOneNumber(fstream &f,int number,  string path , int flag) /// flag =0 ghi bo sung , flag=1 ghi moi
{

    if(flag)
        f.open(path,ios::out);
    else
        f.open(path,ios::app);
    f<<number;
	f.close();
}
void ReadFileString(fstream &f,  string path )
{
    cout <<endl;
    f.open(path, ios::in);
	char s[255];
	while(!f.eof()){
		f.getline(s, 255);
		cout << s << endl;
	}
	f.close();
}

void ReadFileArr(fstream &f,int *a, int &n,  string  path )
{
    cout <<endl;
    f.open(path, ios::in);
	f>>n;
	for(int i=0;i<n;i++)
        f>>a[i];
	f.close();
}
void GennerTest(fstream &f,int a[], int n,int from, int to , string path)  // sinh 1 test
{
    string inputPath = path + ".in";
    string outputPath = path + ".out";
    cout << "\nTest thu : "+path<<endl;

    Nhap(a, n, from, to);                      // sinh test dau vao tu from -> to
    cout << "\nDu lieu sinh ra : ";
    Xuat(a,n);

    WriteFileArr(f,a,n,inputPath,1);          // ghi ra file input
    cout <<"\nGhi xong file : "+inputPath<<endl;

                              // xuat
	ReadFileArr(f,a,n,inputPath);
	cout << "\nDu lieu duoc ghi la : ";        // doc lai file vua ghi de doi chieu du lieu sinh ra va du lieu ghi co khop khong
    Xuat(a,n);

	// xu li logic theo bai toan vi du tinh tong de luu ket qua
	// thay doi phan nay voi moi bai toan
	int tong = tinhTong(a,n);
	cout << "\nDu lieu tinh toan : \n"<<tong<<endl;


	WriteFileOneNumber(f,tong,outputPath, 1);  // ghi lai ket qua ra  file
	cout <<"\nGhi xong file : "+outputPath<<endl;


	cout << "\nDu lieu duoc ghi la : ";  // doc lai file ket qua doi chieu voi du lieu tinh toan de khop
	ReadFileString(f,outputPath);

    cout << "\n\t---------------------------------\n\n"<<endl;

}
int main()
{
    int n=10;
    int a[n];
    fstream f;
    int from=-50,to = 50;
    //string basePath = "1";
    int numberOfFile =10;
    string nameFileTest[numberOfFile] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};  // ten 10 file test. tăng thêm tuy chỉnh

    srand((int)time(0));


    for(int i=0;i<numberOfFile;i++)
        GennerTest(f, a, n, from, to, nameFileTest[i]);

    return 0;
}
