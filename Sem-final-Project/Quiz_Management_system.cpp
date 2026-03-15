#include <iostream>
#include <cctype>
using namespace std;

const int totalQuestions = 5;
int score = 0;

string questions[5] = {
    "1.Who developed C++?",
    "2.Which symbol is used for comments in C++ (single line)?",
    "3.Which keyword is used to declare a constant variable in C++?",
    "4.Which header file is used for input/output operations in C++?",
    "5.What will be the output of the following code snippet?\n\nint x = 5;\ncout << x++ << endl;"};

string options[5][4] = {
    {"A. Dennis Ritchie", "B. Bjarne Stroustrup", "C. James Gosling", "D. Guido van Rossum"},
    {"A. /* */", "B. #", "C. --", "D. //"},
    {"A. static", "B. final", "C. const", "D. immutable"},
    {"A. <stdio.h>", "B. <conio.h>", "C. <fstream>", "D. <iostream>"},
    {"A. 6", "B. 4", "C. Compilation error", "D. 5"}};

char correctAnswers[5] = {'B', 'D', 'C', 'D', 'D'};

string explanations[5] = {
    "B. Bjarne Stroustrup developed C++ in 1983 as an extension of the C programming language.",
    "D. // is used for single-line comments in C++. /* */ is used for multi-line comments.",
    "C. The keyword 'const' is used to declare a constant variable in C++.",
    "D. <iostream> is the header file used for input/output operations in C++.",
    "D. The output will be 5 because the post-increment operator (x++) returns the value before incrementing."};

void startQuiz()
{
    score = 0;
    char userAnswer;

    for (int i = 0; i < totalQuestions; i++)
    {
        cout << "\n"
             << questions[i] << endl;

        for (int j = 0; j < 4; j++)
        {
            cout << options[i][j] << endl;
        }
        cout << "Enter your answer (A/B/C/D): ";
        cin >> userAnswer;
        do{
            if (userAnswer != 'A' && userAnswer != 'B' && userAnswer != 'C' && userAnswer != 'D' && userAnswer != 'a' && userAnswer != 'b' && userAnswer != 'c' && userAnswer != 'd')
            {
                cout << "Invalid option. Please enter A, B, C, or D.\n";
                cout << "Enter your answer (A/B/C/D): ";
                cin >> userAnswer;
            }
        }while (userAnswer != 'A' && userAnswer != 'B' && userAnswer != 'C' && userAnswer != 'D' && userAnswer != 'a' && userAnswer != 'b' && userAnswer != 'c' && userAnswer != 'd');

        if (toupper(userAnswer) == correctAnswers[i])
        {
            cout << "Correct!" << endl;
            score++;
        }
        else
        {
            cout << "Wrong Answer!" << endl;
            cout << "Correct answer: " << correctAnswers[i] << endl;
            cout << "Explanation: " << explanations[i] << endl;
        }
    }

    cout << "\nQuiz Completed! Your score: " << score << "/" << totalQuestions << endl;
}

void viewscore()
{
    cout << "\nYour current score is: " << score << "/" << totalQuestions << endl;
    if (score >= 4)
    {
        cout << "Performance: Excellent";
    }
    else if (score == 3)
    {
        cout << "Performance: Good";
    }
    else if (score == 2)
    {
        cout << "Performance: Average";
    }
    else
    {
        cout << "Performance: Needs Improvement";
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n -------- Quiz Management System -------- \n";
        cout << "1. Start Quiz" << endl;
        cout << "2. View Score" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            startQuiz();
            break;
        case 2:
            viewscore();
            break;
        case 3:
            cout << "\nExiting the quiz. Goodbye!" << endl;
            break;
        default:
            cout << "\nInvalid choice. Please try again." << endl;
            break;
        }
    } while (choice != 3);
    return 0;
}
