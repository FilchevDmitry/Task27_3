#include <iostream>
#include"team.h"
#include"company.h"
#include<string>
int main()
{	
	Company boss;
	int company = 0; // количество комманд
	int team = 0; // количество работников
	int freeWorker = 0;// свободных сотрудников
	int taskCount = 0; // зерно 
	std::string name;
	bool exit = true;
	std::cout << "Enter the name of the boss : ";
	std::cin >> name;
	boss.setName(name);
	std::cout << "Enter the number of commands : ";
	std::cin >> company;
	Manedger** teams=new Manedger*[company];
	for (int i = 0; i < company; ++i)
	{
		std::cout << "Enter the number of employees in the team : ";
		std::cin >> team;
		teams[i]= new Manedger(team);
		teams[i]->setManedgerNum(i);
	}
	for (int i = 0; i < company; ++i)
	{	
		std::cout << "Enter the manager's name "<<i+1<<" team: ";
		std::cin >> name;
		teams[i]->setName(name);
		for (int j = 0; j < teams[i]->workersIndex(); ++j)
		{
			std::cout << "Enter the name of the employee "<<i+1<<"  "<<j+1<<"  team : ";
			std::cin >> name;
			teams[i]->getWorkIndex(j)->setName(name);
			freeWorker++;
		}
	}
	while (exit)
	{
		std::cout << "Enter the task : ";
		std::cin >> taskCount;
		for (int i = 0; i < company; i++)
		{
			if (teams[i]->status() != true)
			{
				taskCount += teams[i]->getManedgerNum();
				std::srand(taskCount);
				taskCount = std::rand() % (teams[i]->workersIndex() + 1);
			}
		}
		std::cout << "Number of available workers -" << freeWorker << std::endl;

	}
	delete teams;
	return 0;
}