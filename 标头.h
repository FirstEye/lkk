#pragma once

class ArrayMaxSum
{
private:
	int* array_;
	int number;
public:
	ArrayMaxSum();
	ArrayMaxSum(int* a, int n);
	~ArrayMaxSum();
	int getArrayMaxSum();
};

