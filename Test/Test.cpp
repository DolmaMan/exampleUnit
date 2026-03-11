#include "pch.h"
#include "CppUnitTest.h"
#include "../moduleOne/Person.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test
{
	TEST_CLASS(moduleOne)
	{
	public:
		
		TEST_METHOD(MaxLenghtName)
		{
			std::string name(50, 'a');
			Person person{ name };
			std::string expected(42, 'a');
			Assert::AreEqual(expected, person.GetName());

		}
		
		TEST_METHOD(NormalName)
		{
			std::string name = "Tolyan";
			Person person{ name };
			Assert::AreEqual(person.GetName(), name);
		}
		TEST_METHOD(NameEmptyNoname)
		{
			std::string name = "";
			Person person{ name };
			std::string expected = "NoName";
			Assert::AreEqual(expected, person.GetName());
		}



		TEST_METHOD(AgeOverMax)
		{
			Person person(123345);
			int expected = 0;
			Assert::AreEqual(expected, person.GetAge());
		}
		TEST_METHOD(AgeBelowMin)
		{
			Person person(-123345);
			int expected = 0;
			Assert::AreEqual(expected, person.GetAge());
		}
		TEST_METHOD(AgeNormal)
		{
			int age = 36;
			Person person(age);
			Assert::AreEqual(age, person.GetAge());
		}



		TEST_METHOD(GenderNormal)
		{
			Person person1{ Person::Gender::MALE },
				person2{ Person::Gender::FEMALE },
				person3{Person::Gender::UNDEF};

			if (person1.GetGender() != Person::Gender::MALE ||
				person2.GetGender() != Person::Gender::FEMALE ||
				person3.GetGender() != Person::Gender::UNDEF)
				Assert::Fail();
		}
	};
}
