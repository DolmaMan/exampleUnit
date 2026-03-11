#include "Person.h"
#include "pch.h"

Person::Person(std::string n, int a, Gender g) : name{ n }, age{ a }, gender {g}
{
	if (name.empty())
		name = "NoName";


	if (name.size() > 42)
		name.erase(name.begin() + 42, name.end());

	if (age <= 0 || age > 100)
		age = 0;

	if (gender < UNDEF || gender > FEMALE)
		gender = UNDEF;
}

Person::Person(std::string n, int a) : Person(n, 0, Person::UNDEF)
{
}

Person::Person(std::string n, Gender g) : Person(n, 0, g)
{
}

Person::Person(std::string n) : Person(n, 0, Person::UNDEF)
{
}

Person::Person(int a) : Person("NoName", a, Person::UNDEF)
{
}

Person::Person(Gender g) : Person("NoName", 0, g)
{
}

Person::Person() : Person("NoName", 0, Person::UNDEF)
{
}

std::string Person::GetName()
{
	return name;
}

int Person::GetAge()
{
	return age;
}

Person::Gender Person::GetGender()
{
	return gender;
}
