#pragma once
#include "Question.h"
class UI
{
public:
	UI();

	void updateAnswer();

	int getAnswer();

	void displayQuestion(Question* question);

	void endGame();


};

