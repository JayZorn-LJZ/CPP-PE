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

	piza_inf* p;
	p = new piza_inf;
	cout << "������������˾�����ƣ�";
	getline(cin, p->name);
	cout << "������������ֱ����";
	cin >> p->dia;
	cout << "������������������";
	cin >> p->weight;

	cout << "\n������˾����: " << p->name << endl;
	cout << "����ֱ����" << p->dia << endl;
	cout << "����������" << p->weight << endl;
}