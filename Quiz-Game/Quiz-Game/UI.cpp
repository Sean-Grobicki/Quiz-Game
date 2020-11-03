#include "UI.h"
#include <iostream>

UI::UI()
{

}

void UI::updateAnswer()
{

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

void UI::endGame()
{

}



