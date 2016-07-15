#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	int const size = 5;
	int arr1[size]{ 23, 65, 15, 42, 85 };
	int arr2[size]{ 97, 81, 12, 34, 68 };
	int sumArr[size];

	for (int i = 0; i < size; i++)
	{
		sumArr[i] = arr1[i] + arr2[i];
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr1[i] << '+' << arr2[i] << '=' << sumArr[i] << endl;
	}
}