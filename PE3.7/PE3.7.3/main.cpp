#include <iostream>

#define MTOD 60 // ��ת��
#define STOM 60 // ��ת��

using namespace std;

int main(void)
{
	double degree; // ��
	double minutes; // ��
	double seconds; // ��
	double total_latitude; // ת�������γ�����

	cout << "Enter latitude in degress, minutes, and seconds: " << endl;
	cout << "First, enter the degrees: ";
	cin >> degree;
	cout << "Next, enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally, enter the seconds of arc: ";
	cin >> seconds;

	total_latitude = degree + minutes / MTOD + seconds / STOM / MTOD;

	cout << degree << " degrees, " << minutes << " minutes, "
		<< seconds << " seconds = " << total_latitude << " degrees\n";

	return 0;
}