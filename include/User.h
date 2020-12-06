#pragma once
#include<string>

class User
{
private:
	int money[16] = {0,100,200,300,500,1000,2000,4000,8000,16000,32000,64000,125000,250000,500000,1000000};
	int currentMoney;
	int checkpoint;
	std::string name;

public: 

	User(std::string name);

	int getLossMoney();

	bool reachedCheckpoint();

	int getMoney();

	std::string getName();

	void nextMoney();


};

