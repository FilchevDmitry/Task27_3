#include <iostream>
#include"team.h"
#include"company.h"
#include<string>
#include<stdlib.h>
int main()
{	
	Company boss;
	int company = 0; // количество комманд
	int team = 0; // количество работников
	int freeWorker = 0;// свободных сотрудников
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
		int taskCount = 0; // зерно 
		std::cout << "Enter the task : ";
		std::cin >> taskCount;
		for (int i = 0; i < company; i++)
		{
			int count = 0;
			if (taskCount!=0&& teams[i]->getstatus()!=true)
			{
				taskCount += teams[i]->getManedgerNum();
				std::srand(taskCount);
				taskCount = std::rand() % (teams[i]->workersIndex() + 1);
				std::cout << "The task was received by the manager - " << teams[i]->getName() << std::endl;
				for (int j = 0; j < teams[i]->workersIndex(); j++)
				{
					if (teams[i]->getWorkIndex(j)->getStatus() == false && taskCount != 0)
					{
						teams[i]->getWorkIndex(j)->setTask(teams[i]->simbol());
						std::cout << "Task '" << teams[i]->getWorkIndex(j)->getTask() << "' was received by an employee named " <<
							teams[i]->getWorkIndex(j)->getName() << std::endl;
						taskCount--;
						freeWorker--;
					}
					if(teams[i]->getWorkIndex(j)->getStatus() == true) count++;

					if (count == teams[i]->workersIndex())
						teams[i]->setstatus(true);
				}
			}
		}
		std::cout << "Number of available workers " << freeWorker << std::endl;
		if (freeWorker == 0)exit = false;
	}
	delete teams;
	return 0;
}