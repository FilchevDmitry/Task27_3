#pragma once
class Company
{
private:
	std::string name = "None";
	int task = 0;
public:
	void setName(std::string& inName);
	void getName(std::string& inName);
};