#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int* a = new int(50);

	cout << "Адрес	         *a"<<endl;
	cout << a << " " << *a << endl;
	(*a) += 1;
	cout << a << " " << *a << endl;
	(*a++);
	cout << a << " " << *a << endl;
	*a++;
	cout << a << " " << *a << endl;

	return 0;

}