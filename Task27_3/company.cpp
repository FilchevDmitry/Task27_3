#include<iostream>
#include"company.h"
#include<string>

void Company::setName(std::string& inName)
{
	name = inName;
}
std::string Company::getName()
{
	return name;
}
char Company::simbol()
{
	std::srand(time(NULL));
	return 65 + rand() % (3);
}