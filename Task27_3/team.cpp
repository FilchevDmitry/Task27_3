#include<iostream>
#include<string>
#include"team.h"

Worker::Worker()
{
	task = '-';
}
void Worker::getTask(char inTask)
{
	inTask = task;
}
void Worker::setTask(char inTask)
{
	task = inTask;
	status = true;
}
Worker* Manedger::getWorkIndex(int inIndex)
{
	if (inIndex < 0) return nullptr;
	if (inIndex >= index) return nullptr;
	return work[inIndex];
}

Manedger::Manedger(int &inIndex): index(inIndex)
{
	work = new Worker*[inIndex];
	for (int i=0; i < index; i++)
	{
		work[i] = new Worker();
	}
}
int Manedger::workersIndex()
{
	return index;
}
void Manedger::setManedgerNum(int& num)
{
	manedgerNum = num;
}
int Manedger::getManedgerNum()
{
	return manedgerNum;
}
int Manedger::taskTeam(int& taskCount)
{
	std::srand(taskCount);
	return 0;
}
bool Manedger::status()
{
	return statusTeam;
}