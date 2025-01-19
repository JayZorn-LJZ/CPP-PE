#include <iostream>

using namespace std;

int main(void)
{
	int distance;

	cout << "请输入以long为单位的距离（一long等于220码）：";
	cin >> distance;
	cout << "你输入的距离为" 
		 << distance * 220 
		 << "码";

	return 0;
}