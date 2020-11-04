#pragma once
#include "Question.h"
#include "UI.h"
#include "User.h"

class QuizControl
{
private:
	Question* questions[15];
	User* user;
	UI* ui;
	int questionCount;
	bool ended;

public:
	QuizControl();

	void runQuiz();

	void selectQuestions();

	bool answerQuestion(int answer);

	bool endGame();

};

