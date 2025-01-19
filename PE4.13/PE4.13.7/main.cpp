#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	struct piza_inf
	{
		string name;
		int dia;
		int weight;
	};

	piza_inf p;
	cout << "请输入披萨公司的名称：";
	getline(cin, p.name);
	cout << "请输入披萨的直径：";
	cin >> p.dia;
	cout << "请输入披萨的重量：";
	cin >> p.weight;

	cout << "\n披萨公司名称: " << p.name << endl;
	cout << "披萨直径：" << p.dia << endl;
	cout << "披萨重量：" << p.weight << endl;

	return 0;
}