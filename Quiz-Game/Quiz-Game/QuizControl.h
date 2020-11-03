#pragma once
#include "Question.h"
#include "UI.h"

class QuizControl
{
private:
	Question* questions[15];
	UI* ui;
	int questionCount;
public:
	QuizControl();

	void runQuiz();

	void selectQuestions();

	bool answerQuestion(int answer);

	bool endGame();

};

