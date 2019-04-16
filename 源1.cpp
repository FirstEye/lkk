#include<iostream>
#include"±êÍ·.h"
using namespace std;

ArrayMaxSum::ArrayMaxSum()
{
	cin >> number;
	if (number > 0)
	{
		array_ = new int[10];
		for (int i = 0; i < number; i++)
		{
			cin >> *(array_ + i);
		}
	}
	else
	{
		number = 0;
		array_ = NULL;
	}
}
ArrayMaxSum::ArrayMaxSum(int* a, int n)
{
	array_ = new int[10];
	for (int i = 0; i < n; i++)
	{
		array_[i] = a[i];
	}
	number = n;
}
ArrayMaxSum::~ArrayMaxSum()
{
	delete[]array_;
	array_ = NULL;
}
int ArrayMaxSum::getArrayMaxSum()
{
	if (array_ == NULL)return 0;
	int tempsum = array_[0];
	int maxsum = tempsum>0?tempsum:0;
	for (int i = 1; i < number; i++)
	{
		tempsum = tempsum + array_[i] > array_[i] ? tempsum + array_[i] : array_[i];
		maxsum = tempsum > maxsum ? tempsum : maxsum;
	}
	return maxsum;
}
