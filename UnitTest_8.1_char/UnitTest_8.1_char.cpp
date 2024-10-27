#include "pch.h"
#include "CppUnitTest.h"
#include "../8.1_char/8.1_char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace UnitTest81char
{
	TEST_CLASS(UnitTest81char)
	{
	public:

		TEST_METHOD(TestFindThirdDot)
		{
			char testStr1[] = "a.b.c.d";
			Assert::AreEqual(5, FindThirdDot(testStr1));

			char testStr2[] = "ab.cd.ef.gh";
			Assert::AreEqual(8, FindThirdDot(testStr2));

			char testStr3[] = "ab.c"; 
			Assert::AreEqual(-1, FindThirdDot(testStr3));
		}
	};
}
