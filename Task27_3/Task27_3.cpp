#include <iostream>
#include"team.h"
#include<string>
int main()
{	
	int company = 0;
	int team = 0;
	std::cout << "Enter the number of commands : ";
	std::cin >> company;
	Manedger** teams=new Manedger*[company];
	for (int i = 0; i < company; i++)
	{
		std::cout << "Enter the number of employees in the team : ";
		std::cin >> team;
		teams[i]= new Manedger(team);
		teams[i]->setManedgerNum(i);
	}

	return 0;
	
	delete teams;
}
/*	for (int i = 0; i <teams[i]->inWorkersIndex(); i++)
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
	*/