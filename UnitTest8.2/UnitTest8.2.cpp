#include "pch.h"
#include "CppUnitTest.h"
#include "../laboratory8.2/laboratory8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestReplace_NoParentheses)
		{
			string input = "Hello, world!";
			replace(input);
			Assert::AreEqual(string("Hello, world!"), input);
		}
	};
}
