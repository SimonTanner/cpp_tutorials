#include <iostream>

using namespace std;

main() {
    int score;
    cout << "Please enter your exams score: ";
    cin >> score;

    string message;
    int maxScore = 100;

    if (score > 50 && score <= maxScore)
        message = "Well done you passed the exam!";
    else if (score <=50 && score <= maxScore)
        message = "You didn't pass the exam!";
    else if (score > maxScore)
        message = "ERROR. The number of points is invalid!";

    cout << message << endl;
}