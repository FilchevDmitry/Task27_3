#pragma once
#include"company.h"

class Worker : public Company
{
private:
	bool status=false;
	char task;
public:
	Worker();
	void setTask(char inTask);
	void getTask(char inTask);
	bool getStatus();
};
class Manedger:public Company
{
private:
	int manedgerNum;
	Worker** work = nullptr;
	int index = 0;
	bool statusTeam = false;
public:
	Manedger(int &inIndex);
	Worker* getWorkIndex(int inIndex);
	int workersIndex();
	void setManedgerNum(int& num);
	int getManedgerNum();
	bool status();
};