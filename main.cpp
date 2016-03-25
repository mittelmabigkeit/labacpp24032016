#include <cstdlib>
#include <iostream>
#include "laba.h"
using namespace std;

int main()
{
	int q;
	cout << "¬ведите сторону квадрата a = ";
	cin >> q;
	laba obj;
	obj.setDate(q);
	cout << "ѕлощадь квадрата = ";
	cout << obj.sum() << endl;

	system("pause");
	return 0;
}