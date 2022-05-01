#include "pch.h"
#include "CppUnitTest.h"
#include "../lab4.2/Line.h"
#include "../lab4.2/Line.cpp"
#include"../lab4.2/Curves.h"
#include"../lab4.2/Curves.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Line a(1, 2, 5);
			int b = a.y();
			Assert::AreEqual(b, 7);
		}
	};
}
