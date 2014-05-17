#include "stdafx.h"
#include "CppUnitTest.h"
#include "Aricia.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestNative
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestPositiveImageExists)
		{
			std::string baseImage("..\\..\\TestImages\\KDE550.JPG");
			std::string targetImage("..\\..\\TestImages\\target2.JPG");
				
			Assert::IsTrue(exists(baseImage, targetImage, 0));
		}

		TEST_METHOD(TestNegativeImageExists)
		{
			std::string baseImage("..\\..\\TestImages\\KDE550.JPG");
			std::string targetImage("..\\..\\TestImages\\target.JPG");

			Assert::IsFalse(exists(baseImage, targetImage, 0));
		}

	};
}