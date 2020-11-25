#define CURL_STATICLIB
#include "QuizControl.h"
#include "curl/curl.h"

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
	CURL* curl;
	CURLcode res;

	curl = curl_easy_init();
	if (curl)
	{
		curl_easy_setopt(curl,CURLOPT_URL, "https://opentdb.com/api.php?amount=5&difficulty=easy&type=multiple");
	}
	res = curl_easy_perform(curl);
	if (res != CURLE_OK)
	{
		fprintf(stderr, "curl_easy_perform() failed: %s\n",
			curl_easy_strerror(res));
	}
	curl_easy_cleanup(curl);
}


	//First 5 questions easy url
//https://opentdb.com/api.php?amount=5&difficulty=easy&type=multiple
	//Second 5 questions medium url
//https://opentdb.com/api.php?amount=5&difficulty=medium&type=multiple
	//Last 5 questions hard url
//https://opentdb.com/api.php?amount=5&difficulty=hard&type=multiple

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


