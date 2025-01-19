#include <iostream>

using namespace std;

int main(void)
{
	int height;
	const double CF = 1.0 / 12.0; // 注意，不能用整数除法，C++标准会将整数除法进行趋零截断，导致返回零。解决方法是添加小数点

	cout << "请输入你的身高（单位：英寸）：";
	cin >> height;
	cout << "你的身高是 " << double(height) * CF << " 英尺\n";

	return 0;
}