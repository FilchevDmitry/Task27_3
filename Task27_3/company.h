#pragma once
class Company
{
private:
	std::string name = "None";
	
public:
	void setName(std::string& inName);
	std::string getName();
	char simbol();
};