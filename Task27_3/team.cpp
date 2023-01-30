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
}
Worker* Manedger::getWorkIndex(int inIndex)
{
	if (inIndex < 0) return nullptr;
	if (inIndex >= workersIndex) return nullptr;
	return work[inIndex];
}
Manedger::Manedger(int inIndex):workersIndex(inIndex)
{
	work = new Worker*[inIndex];
	for (int i=0; i < workersIndex; i++)
	{
		work[i] = new Worker();
	}
}
int Manedger::inWorkersIndex()
{
	return workersIndex;
}