#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int b = 50;
	int* a = &b;

	cout << "Адрес	         *a  b"<<endl;
	cout << a << " " << *a << " " << b << endl;
	b += 10;
	cout << a << " " << *a << " " << b << endl;
	*a = 100;
	cout << a << " " << *a << " " << b << endl;

	return 0;

}