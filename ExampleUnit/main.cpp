#include<iostream>
#include"../moduleOne/Person.h"
using namespace std;

int main()
{
	Person p = { "Commit No version v2", 35, Person::MALE };

	cout << p.GetName() << endl;
}