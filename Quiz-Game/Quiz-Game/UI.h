#pragma once
#include "Question.h"
#include "User.h";

class UI
{
public:
	UI();

	std::string nameInput();

	void updateAnswer(User* user,bool correct);

	int getAnswer();

	void displayQuestion(Question* question);

	void endGame(User* user);


};

