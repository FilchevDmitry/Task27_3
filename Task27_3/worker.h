#pragma once
#include"company.h"
class Worker :public Company
{
private:
	char type='-';
public:
	void setType(char &inType);
	void getType(char &inType);
};
