#include <cstdlib>
#include <iostream>
#include "laba.h"
using namespace std;

int main()
{
	int q;
	cout << "������� ������� �������� a = ";
	cin >> q;
	laba obj;
	obj.setDate(q);
	cout << "������� �������� = ";
	cout << obj.sum() << endl;

	system("pause");
	return 0;
}