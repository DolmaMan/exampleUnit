#include<iostream>
#include"../moduleOne/Person.h"
using namespace std;

int main()
{
	Person p = { "Tolyan", 35, Person::MALE };

	cout << p.GetName() << endl;
}