#include <iostream>
#include"team.h"
#include"company.h"
#include<string>
int main()
{	
	Company boss;
	int company = 0;
	int team = 0;
	std::string name;
	std::cout << "Enter the name of the boss : ";
	std::cin >> name;
	boss.setName(name);
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
	for (int i = 0; i < teams[i]->inWorkersIndex(); i++)
	{	
		std::cout << "Enter the manager's name "<<i+1<<" team: ";
		std::cin >> name;
		teams[i]->setName(name);
		for (int j = 0; j < teams[i]->inWorkersIndex(); j++)
		{
			std::cout << "Enter the name of the employee "<<i+1<<"  "<<j+1<<"  team : ";
			std::cin >> name;
			teams[i]->getWorkIndex(j)->setName(name);
		}
	}
	
	delete teams;
	return 0;
}
/*	
	for (int i = 0; i < teams[i]->inWorkersIndex(); i++)
	{
		for (int j = 0; j < teams[i]->inWorkersIndex(); j++)
		{
			
			teams[i]->getWorkIndex(j)->getName(name);
			std::cout << name << std::endl;
		}	
	}
	*/