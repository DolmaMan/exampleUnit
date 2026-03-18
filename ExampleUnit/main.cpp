#include<iostream>
#include"../moduleOne/Person.h"
using namespace std;

int main()
{
	Person p = { "Commit version", 35, Person::MALE };

	cout << p.GetName() << endl;
}