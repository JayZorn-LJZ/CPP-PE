#include <iostream>

using namespace std;

int main(void)
{
	const double FTOI = 12; // Ӣ��תӢ���ת������
	const double ITOM = 0.0254; // Ӣ��ת�׵�ת������
	const double PTOK = 2.2; // ��תǧ�˵�ת������

	double height_f; // ��Ӣ��Ϊ��λ�ֿ��洢���
	double height_i; // ��Ӣ��Ϊ��λ�ֿ��洢���
	double total_height; // ��Ӣ��Ϊ��λ�洢�����
	double weight; // ��ʱ�԰�Ϊ��λ�洢����
	double bmi; // bmiָ��

	cout << "��������ߣ���Ӣ�ߺ�Ӣ���ÿո�ֿ�����,���磺18.9 17.0����";
	cin >> height_f; // ����Ӣ��
	cin >> height_i; // ����Ӣ��
	cout << "���������أ��԰�Ϊ��λ����)��";
	cin >> weight; // ��������
	cout << height_f << endl;
	cout << height_i << endl;
	
	total_height = (height_f * FTOI + height_i) * ITOM; // ��Ӣ�ߺ�Ӣ��ϲ���ת��Ϊ��Ϊ��λ�洢
	weight = weight / PTOK; // ������ת��Ϊǧ��
	bmi = weight / (total_height * total_height); // ����bmiָ��

	cout << "���BMIָ���� " << bmi << endl;

	return 0;
}