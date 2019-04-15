#include<iostream>
#include"БъЭЗ.h"
using namespace std;

int main()
{
	int a[] = { -2,11,-4,-8,13,-5,-2 };
	ArrayMaxSum ams1 = ArrayMaxSum(a, 7);
	cout << ams1.getArrayMaxSum() << endl;
	ArrayMaxSum ams2 = ArrayMaxSum();
	cout << ams2.getArrayMaxSum() << endl;
	system("pause");
	return 0;
}
//6 -2 11 -4 13 -5 -2 