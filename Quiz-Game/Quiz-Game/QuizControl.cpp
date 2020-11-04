#include "QuizControl.h"

QuizControl::QuizControl()
{
	questionCount = 0;
	ui = new UI();
	user = new User(ui->nameInput());
	selectQuestions();
	runQuiz();
}

void QuizControl::runQuiz()
{
	while (questionCount < 15 && !ended)
	{
		ui->displayQuestion(questions[questionCount]);
		int answer = ui->getAnswer();
		ui->updateAnswer(user,answerQuestion(answer));
		questionCount++;
	}
	ui->endGame(user);
}

void QuizControl::selectQuestions()
{
	for (int i = 0; i < 15; i++)
	{
		std::string* answers = new std::string[4]{"Europe","Asia","Africa","South America"};
		questions[i] = new Question("What is the largest continent in the world?", answers, 1);
	}
}

bool QuizControl::answerQuestion(int answer)
{
	bool returnValue = questions[questionCount]->checkAnswer(answer);
	if (returnValue)
	{
		user->nextMoney();
	}
	ended = !returnValue;
	return returnValue;
}

bool QuizControl::endGame()
{
	return false;
}


