#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "Size = ";
	int size;
	cin >> size;

	int* arr = new int[size];

	delete[] arr;
	return 0;
}