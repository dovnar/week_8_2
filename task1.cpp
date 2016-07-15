#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int const size = 10;
	int arr[size]{12, 24, 9, 18, 2, 37, 23, 16, 5, 50};
	int arr1[5];
	int arr2[5];
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
	for (int j = 0; j < size; j++)
	{
		if (j<5)
		{
			arr1[j] = arr[j];
		}
		else
		{
			arr2[j-5] = arr[j];
		}
	}
	for (int j = 0; j < size; j++)
	{
		if (j == 0)
		{
			cout << "первый масив = ";
		}
		if (j == 5)
		{
			cout << endl << "второй масив = ";
		}
		if (j < 5)
		{
			cout << arr1[j] <<' ';
		}
		else
		{
			cout << arr2[j - 5] << ' ';
		}
	}
	cout << endl; 
	return 0;
}