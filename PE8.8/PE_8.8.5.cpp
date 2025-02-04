#include <iostream>

using namespace std;

template <typename T> T func(T*);

int main(void)
{
	int a1[] = { 1, 2, 3, 4, 5 };
	double a2[] = { 5.6, 7.4, 5.43, 2.4, 1.0 };

	cout << func(a1) << endl;
	cout << func(a2) << endl;

	return 0;
}

template <typename T> T func(T* array)
{
	T temp = array[0];

	for (int i = 1; i < 5; i++)
	{
		temp = temp > array[i] ? temp : array[i];
	}

	return temp;
}