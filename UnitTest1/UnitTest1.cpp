#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.2 iter/lab6.2 iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestiter
{
	TEST_CLASS(UnitTestiter)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			const int n = 10;
			int a[n] = { 46, 24, 36, 20, 24, 12, 56, 66, 40, 6 };

			int sum = 0;
			int count = 0;

			int expectedSum = 46+24+36+20+24+12+56+66+40+6;

			Calculate(a, n, sum, count);

			Assert::AreEqual(expectedSum, sum);
		}
	};
}