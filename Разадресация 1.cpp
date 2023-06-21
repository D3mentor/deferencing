#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int* a = new int(50);
	int b = *a;

	cout << "Адрес	         *a  b"<<endl;
	cout << a << " " << *a << " " << b << endl;
	*a = 100;
	cout << a << " " << *a << " " << b << endl;

	return 0;

}