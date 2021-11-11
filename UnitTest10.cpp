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
			double S;
			S = 2011.0;
			Assert::AreEqual(S, 2011.0);
		}
	};
}
