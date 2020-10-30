#include <iostream>
#include "Question.h"
using namespace std;

int main()
{
	string* answers = new string[4]{ "Europe","Asia","Africa","South America" };
	Question* question1 = new Question("What is the largest continent in the world?",answers,1);

	cout << question1->getQuestion() << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << question1->getAnswers()[i] << endl;
	};
	cin
};

