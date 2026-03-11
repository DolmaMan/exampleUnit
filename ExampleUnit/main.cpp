#include<iostream>
#include"../moduleOne/Person.h"
using namespace std;

int main()
{
	Person p = { "RomaFacts", 35, Person::MALE };

	cout << p.GetName() << endl;
}