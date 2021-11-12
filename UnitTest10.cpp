#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\marki\Desktop\Yaryna visual studio\laba7.1.1\laba7.1.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest10
{
	TEST_CLASS(UnitTest10)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int S = 0, k = 0;
			int** r = new int* [7];
		
			for (int i = 0; i < 7; i++)
				r[i] = new int[6];
			for (int i = 0; i < 7; i++)
				for (int j = 0; j < 7; j++)
					r[i][j] = j + 1;
			Calc(r, 7,7, S, k);
			Assert::AreEqual(k, 37);
		}
	};
}
