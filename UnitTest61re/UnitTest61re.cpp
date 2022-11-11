#include "pch.h"
#include "CppUnitTest.h"
#include "/Student/Lab_06_1_re/Lab_06_1_re/Lab_06_1_re.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61re
{
	TEST_CLASS(UnitTest61re)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x;

			const int n = 24;
			const int i = 24;
			int p[i] = { -7, 7,-1, -7, 5, -6, 0, -10, -9, -6, -8, 0, 7, -2, 3, -3, 11, 1, 8, 12, 6, -7, 7, 4 };
			

			int count = 19;

			x = Sum(p, n, 0, 0, count);

			Assert::AreEqual(x, 14);
		}
	};
}
