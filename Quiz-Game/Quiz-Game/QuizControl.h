#pragma once
#include "Question.h"
#include "UI.h"

class QuizControl
{
private:
	Question questions[15];
	UI ui;

public:
	void runQuiz();

	void selectQuestions();

	bool answerQuestion(int answer);

	bool endGame();

};

