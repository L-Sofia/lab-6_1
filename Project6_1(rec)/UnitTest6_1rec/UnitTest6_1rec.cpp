#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6_1(rec)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61rec
{
	TEST_CLASS(UnitTest61rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 25;
			int p[size];
			int Low = 15;
			int High = 94;

			Create(p, size, Low, High, 0);

			for (int i = 0; i < size; i++)
				Assert::IsTrue(p[i] >= Low && p[i] <= High);
		}
	};
}
