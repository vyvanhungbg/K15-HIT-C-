#include <iostream>
#include <string>
#include <fstream>  // (1)

using namespace std;

int main()
{
	fstream f;                    // (2)
	f.open("input.txt", ios::in); // (2)

	string data;                  // (3)
	getline(f, data);             // (3)

	f.close();                    // (4)

	cout << data;
}
