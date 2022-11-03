#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.0/Lab_5.0.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab050UnitTest
{
	TEST_CLASS(Lab050UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			const double x = 1;
			const double y = 1;
			t = h(x, y);
			Assert::AreEqual(t, 8.);
		}
	};
}
