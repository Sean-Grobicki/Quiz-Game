#pragma once
#include <string>
class Question
{
private:
	std::string question;
	std::string answers[4];
	int correctAnswerIndex;
	
public:

	Question(std::string question,std::string* answers,int correctAnswer);

	bool checkAnswer(int theirAnswer);

	std::string* getQuestion();

	std::string* getAnswers();
};

