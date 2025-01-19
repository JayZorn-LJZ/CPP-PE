#include <iostream>

#define MTOD 60 // 分转秒
#define STOM 60 // 秒转分

using namespace std;

int main(void)
{
	double degree; // 度
	double minutes; // 分
	double seconds; // 秒
	double total_latitude; // 转换后的总纬度相加

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