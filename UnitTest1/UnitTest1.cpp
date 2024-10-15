#include "pch.h"
#include "CppUnitTest.h"
#include "../pr5.1/pr.cpp"  // шлях до вашого основного файлу з функціями

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			auto t = k(1.0, 1.0);
			Assert::AreEqual(t, 1.38177, 0.0001);
		}
	};
}
