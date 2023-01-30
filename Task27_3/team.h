#pragma once
#include"company.h"

class Worker : public Company
{
private:
	char task;
public:
	Worker();
	void setTask(char inTask);
	void getTask(char inTask);
};
class Manedger:public Company
{
private:
	int manedgerNum;
	Worker** work = nullptr;
	int workersIndex = 0;
public:
	Manedger(int inIndex);
	Worker* getWorkIndex(int inIndex);
	int inWorkersIndex();
	void setManedgerNum(int& num);
	int getManedgerNum();
};