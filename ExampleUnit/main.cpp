#include<iostream>
#include"../moduleOne/Person.h"
using namespace std;

int main()
{
	Person p = { "FinalVersion", 35, Person::MALE };

	cout << p.GetName() << endl;
}