#include "UI.h"
#include <iostream>

UI::UI()
{

}

void UI::updateAnswer(User* user,bool correct)
{
	if (correct)
	{
		std::cout << "That was the correct answer! You have earned "<<(char) 156 << user->getMoney() << std::endl;
	}
	else
	{
		std::cout << "That answer was incorrect!" << std::endl;
	}
	if (user->reachedCheckpoint())
	{
		std::cout << "You have reached a checkpoint and are now guaranteed " << (char) 156 << user->getMoney() << std::endl;
	}
}

std::string UI::nameInput()
{
	std::string name;
	std::cout << "Enter your name: " << std::endl;
	std::cin >> name;
	return name;
}

void UI::displayQuestion(Question* question)
{
	std::cout << *question->getQuestion() << std::endl;
	for (int i = 0; i < 4; i++)
	{
		std::cout << question->getAnswers()[i] << std::endl;
	}
}

int UI::getAnswer()
{
	char input;
	while (true)
	{
		std::cout << "Type A,B,C,D to enter answer." << std::endl;
		std::cin >> input;
		input = std::tolower(input);
		if (input == 'a')
		{
			return 0;
		}
		else if (input == 'b')
		{
			return 1;
		}
		else if (input == 'c')
		{
			return 2;
		}
		else if (input == 'd')
		{
			return 3;
		}
	}
}

void UI::endGame(User* user)
{
	std::cout << "Game over " << user ->getName() <<" you earned "<< (char) 156 << user->getLossMoney() << std::endl;
}



