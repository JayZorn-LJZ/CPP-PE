#include <iostream>

#define SECONDS_D 86400 // һ�������
#define SECONDS_H 3600 // һСʱ������
#define SECONDS_M 60; // һ�����ж�����

using namespace std;

int main(void)
{
	int days;
	int hours;
	int minutes;
	int seconds;
	int input_seconds;

	cout << "Enter the number of seconds: ";
	cin >> input_seconds;

	days = input_seconds / SECONDS_D;
	hours = input_seconds % SECONDS_D / SECONDS_H;
	minutes = input_seconds % SECONDS_D % SECONDS_H / SECONDS_M;
	seconds = input_seconds % SECONDS_D % SECONDS_H % SECONDS_M;

	cout << input_seconds << " seconds = " <<
		days << "days, " <<
		hours << "hours, " <<
		minutes << "minutes, " <<
		seconds << "seconds, ";
	
	return 0;
}