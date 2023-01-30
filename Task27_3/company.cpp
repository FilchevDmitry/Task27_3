#include<iostream>
#include"company.h"
#include<string>

void Company::setName(std::string& inName)
{
	name = inName;
}
void Company::getName(std::string& inName)
{
	inName = name;
}