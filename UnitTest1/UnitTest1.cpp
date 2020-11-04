#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_1/Lab_05_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			const double x = 0;
			const double y = 0;
			t = g(x, y);
			Assert::AreEqual(t, 1.);
		}
	};
}
