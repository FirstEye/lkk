#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Project1/标头.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			int a[] = { -2,11,-4,-8,13,-5,-2 };
			ArrayMaxSum asm2 = ArrayMaxSum(a, 7);
			Assert::AreEqual(13, asm2.getArrayMaxSum());
		}
		TEST_METHOD(TestMethod2)
		{
			// TODO: 在此输入测试代码
			int* a = {};
			ArrayMaxSum asm2 = ArrayMaxSum(a, 0);
			Assert::AreEqual(0, asm2.getArrayMaxSum());
		}
	};
}