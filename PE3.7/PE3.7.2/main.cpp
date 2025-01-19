#include <iostream>

using namespace std;

int main(void)
{
	const double FTOI = 12; // 英尺转英寸的转换因子
	const double ITOM = 0.0254; // 英寸转米的转换因子
	const double PTOK = 2.2; // 磅转千克的转换因子

	double height_f; // 以英尺为单位分开存储身高
	double height_i; // 以英寸为单位分开存储身高
	double total_height; // 以英寸为单位存储总身高
	double weight; // 暂时以磅为单位存储体重
	double bmi; // bmi指数

	cout << "请输入身高（以英尺和英寸用空格分开输入,例如：18.9 17.0）：";
	cin >> height_f; // 输入英尺
	cin >> height_i; // 输入英寸
	cout << "请输入体重（以磅为单位输入)：";
	cin >> weight; // 输入体重
	cout << height_f << endl;
	cout << height_i << endl;
	
	total_height = (height_f * FTOI + height_i) * ITOM; // 将英尺和英寸合并并转换为米为单位存储
	weight = weight / PTOK; // 将体重转换为千克
	bmi = weight / (total_height * total_height); // 计算bmi指数

	cout << "你的BMI指数是 " << bmi << endl;

	return 0;
}