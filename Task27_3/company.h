#pragma once
class Company
{
private:
	std::string name = "None";
	
public:
	void setName(std::string& inName);
	void getName(std::string& inName);
};