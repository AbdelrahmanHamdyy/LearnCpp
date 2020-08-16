#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int score[5];
void getScore() {
    for (int i = 0; i < 5; i++) {
        cout << "Score: ";
        cin >> score[i];
        while (score[i] < 0 || score[i] > 100) {
            cout << "The score should be a positive number and less than zero! Please re-enter: ";
            cin >> score[i];
        }
    }
}
int findLowest() {
    int min;
    min = score[0];
    for (int i = 1; i < 5; i++) {
        if (score[i] < min)
            min = score[i];
    }
    return min;
}
void calcAverage() {
    int i = 0;
    int sum = 0;
    double avg;
    for (int i = 0; i <= 4; i++) {
        if (score[i] != findLowest())
            sum += score[i];
    }
    avg = sum / 4;
    cout << "Average = " << avg << endl;
}

int main() {
    getScore();
    cout << "The lowest score was = " << findLowest() << endl;
    calcAverage();
}