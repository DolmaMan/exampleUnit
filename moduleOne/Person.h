#pragma once
#include<string>



class Person
{
public:
	enum Gender { UNDEF, MALE, FEMALE };
private:
	std::string name;
	int age;
	Gender gender;
public:
	Person(std::string n, int a, Gender g);
	Person(std::string n, int a);
	Person(std::string n, Gender g);
	Person(std::string n);
	Person(int a);
	Person(Gender g);
	Person();

	std::string GetName();
	int GetAge();
	Gender GetGender();
};
