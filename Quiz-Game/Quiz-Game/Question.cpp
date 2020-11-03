#include "Question.h"
Question::Question(std::string question, std::string* answers, int correctAnswer)
{
	this->question = question;
	for (int i = 0; i < 4; i++)
	{
		this->answers[i] = answers[i];
	}
	correctAnswerIndex = correctAnswer;
};

bool Question::checkAnswer(int theirAnswer)
{
	return theirAnswer == correctAnswerIndex;
};

std::string* Question::getQuestion()
{
	return &question;
};

std::string* Question::getAnswers()
{
	return answers;
};