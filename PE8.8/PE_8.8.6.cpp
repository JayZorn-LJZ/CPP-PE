#include <iostream>

using namespace std;

template <typename T> T maxn(T*, int);
template <> const char* maxn<const char*>(const char**, int);

int main(void)
{
	int a1[] = {1, 2, 34, 543, 1, 3};
	double a2[] = { 32.4, 65.23, 54.6, 53.1, 1.2, 4.7 };
	const char* s1[] = {
		"hello world",
		"me who you",
		"fdsj",
		"fdsafjdsfdsjlf",
		"nihaoshijie"
	};

	cout << maxn(a1, 6) << endl;
	cout << maxn(a2, 6) << endl;
	cout << maxn(s1, 5) << endl;

	return 0;
}

template <typename T> T maxn(T* array, int num)
{
	T temp = array[0];
	
	for (int i = 1; i < num; i++)
	{
		temp = temp > array[i] ? temp : array[i];
	}

	return temp;
}
template <> const char* maxn<const char*>(const char** array, int num)
{
	const char* temp = array[0];

	for (int i = 1; i < num; i++)
	{
		temp = strlen(temp) > strlen(array[i]) ? temp : array[i];
	}

	return temp;
}