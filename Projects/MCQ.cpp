#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	char CorrectAnswers[10] = { 'A','D','B','C','B','D','A','C','A','B' };
	char Answers[10];
	int incorrect[10];
	int c, w, m;
	c = 0;
	w = 0;
	cout << "~~ Welcome to your Driving Liscence Multiple choice Exam! Please answer all of the following questions from 1-10. ~~" << endl;
	cout << "Submit your final answers here:- " << endl;
	for (int i = 0; i <= 9; i++) {
		cout << "Question #" << i + 1 << " - ";
		cin >> Answers[i];
		while (Answers[i] != 'A' && Answers[i] != 'B' && Answers[i] != 'C' && Answers[i] != 'D') {
			cout << "You should only enter A , B , C , or D" << endl;
			cout << "Question #" << i + 1 << " - ";
			cin >> Answers[i];
		}
	}
	for (int i = 0; i <= 9; i++) {
		if (Answers[i] == CorrectAnswers[i])
			c += 1;
		else {
			w += 1;
			incorrect[i] = i + 1;
		}

	}
	if (c >= 5)
		cout << "Congratulations! You passed the exam successfully! You can now recieve your liscence from our office." << endl;
	else
		cout << "You Failed! No liscence for you unfortunately :(  We will email you the exact date where you can come again and repeat the exam" << endl;
	cout << "Number of Correctly answered questions: " << c << endl;
	cout << "--------------------------------------- " << endl;
	cout << "Number of incorrectly answered questions: " << w << endl;
	cout << "--------------------------------------- " << endl;
	cout << "The wrong questions are: " << endl;
	for (int i = 0; i <= 9; i++) {
		if (incorrect[i] > 0 && incorrect[i] <= 10) {
			cout << "Number: " << incorrect[i] << " --- ";
			cout << "The correct answer was: " << CorrectAnswers[i] << " --- Your answer was: " << Answers[i] << endl;
		}
	}
}
