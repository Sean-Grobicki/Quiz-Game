#include "QuizControl.h"

QuizControl::QuizControl()
{
	questionCount = 0;
	ui = new UI();
	selectQuestions();
	runQuiz();
}

void QuizControl::runQuiz()
{
	while (questionCount < 15)
	{
		ui->displayQuestion(questions[questionCount]);
		int answer = ui->getAnswer();
		answerQuestion(answer);
		questionCount++;
	}
}

void QuizControl::selectQuestions()
{
	for (int i = 0; i < 15; i++)
	{
		std::string* answers = new std::string[4]{ "Europe","Asia","Africa","South America" };
		questions[i] = new Question("What is the largest continent in the world?", answers, 1);
	}
}

bool QuizControl::answerQuestion(int answer)
{
	return false;
}

bool QuizControl::endGame()
{
	return false;
}


