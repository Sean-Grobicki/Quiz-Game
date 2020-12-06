#include "User.h"

User::User(std::string name)
{
	this->name = name;
	currentMoney = 0;
	checkpoint = 0;
}

int User::getMoney()
{
	return money[currentMoney];
}

int User::getLossMoney()
{
	return money[checkpoint];
}

bool User::reachedCheckpoint()
{
	return currentMoney == 5 || currentMoney == 10;
}

void User::nextMoney()
{
	currentMoney++;
	if (currentMoney == 5)
	{
		checkpoint = currentMoney;
	}
	else if (currentMoney == 10)
	{
		checkpoint = currentMoney;
	}
}

std::string User::getName()
{
	return name;
}