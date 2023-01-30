#include <iostream>
#include"team.h"
#include<string>
int main()
{
	std::string name;
	Manedger** teams=new Manedger*[2];
	for (int i = 0; i < 10; i++)
	{
		teams[i]= new Manedger(2);
	}
	for (int i = 0; i <teams[i]->inWorkersIndex(); i++)
	{	
		for (int j = 0; j < teams[i]->inWorkersIndex(); j++)
		{
			name = std::to_string(j);
			teams[i]->getWorkIndex(j)->setName(name);
		}
	}
	for (int i = 0; i < teams[i]->inWorkersIndex(); i++)
	{
		for (int j = 0; j < teams[i]->inWorkersIndex(); j++)
		{
			
			teams[i]->getWorkIndex(j)->getName(name);
			std::cout << name << std::endl;
		}	
	}
	return 0;
	




	delete teams;
}
