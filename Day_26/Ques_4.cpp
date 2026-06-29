#include <iostream>
using namespace std;

int main()
{
    int score = 0;
    int ans;

    cout << "========== QUIZ APPLICATION ==========\n\n";

    // Q1
    cout << "Q1. Who developed C++?\n";
    cout << "1. Dennis Ritchie\n2. Bjarne Stroustrup\n3. James Gosling\n4. Guido van Rossum\n";
    cout << "Enter Answer: ";
    cin >> ans;
    if (ans == 2)
    {
        cout << "Correct!\n\n";
        score++;
    }
    else
        cout << "Wrong!\n\n";

    // Q2
    cout << "Q2. Which symbol is used for input in C++?\n";
    cout << "1. >>\n2. <<\n3. ==\n4. &&\n";
    cout << "Enter Answer: ";
    cin >> ans;
    if (ans == 1)
    {
        cout << "Correct!\n\n";
        score++;
    }
    else
        cout << "Wrong!\n\n";

    // Q3
    cout << "Q3. Which loop executes at least once?\n";
    cout << "1. for\n2. while\n3. do-while\n4. None\n";
    cout << "Enter Answer: ";
    cin >> ans;
    if (ans == 3)
    {
        cout << "Correct!\n\n";
        score++;
    }
    else
        cout << "Wrong!\n\n";

    // Q4
    cout << "Q4. Which keyword is used to create a function?\n";
    cout << "1. function\n2. define\n3. return\n4. None of these\n";
    cout << "Enter Answer: ";
    cin >> ans;
    if (ans == 4)
    {
        cout << "Correct!\n\n";
        score++;
    }
    else
        cout << "Wrong!\n\n";

    // Q5
    cout << "Q5. Which data type stores decimal values?\n";
    cout << "1. int\n2. char\n3. float\n4. bool\n";
    cout << "Enter Answer: ";
    cin >> ans;
    if (ans == 3)
    {
        cout << "Correct!\n\n";
        score++;
    }
    else
        cout << "Wrong!\n\n";

    // Q6
    cout << "Q6. Which operator is used for equality comparison?\n";
    cout << "1. =\n2. ==\n3. !=\n4. <=\n";
    cout << "Enter Answer: ";
    cin >> ans;
    if (ans == 2)
    {
        cout << "Correct!\n\n";
        score++;
    }
    else
        cout << "Wrong!\n\n";

    // Q7
    cout << "Q7. Which loop is best when number of iterations is known?\n";
    cout << "1. for\n2. while\n3. do-while\n4. switch\n";
    cout << "Enter Answer: ";
    cin >> ans;
    if (ans == 1)
    {
        cout << "Correct!\n\n";
        score++;
    }
    else
        cout << "Wrong!\n\n";

    // Q8
    cout << "Q8. Which header file is required for cout and cin?\n";
    cout << "1. math.h\n2. stdio.h\n3. iostream\n4. string\n";
    cout << "Enter Answer: ";
    cin >> ans;
    if (ans == 3)
    {
        cout << "Correct!\n\n";
        score++;
    }
    else
        cout << "Wrong!\n\n";

    // Q9
    cout << "Q9. Which statement is used to exit a loop?\n";
    cout << "1. continue\n2. break\n3. exit\n4. return\n";
    cout << "Enter Answer: ";
    cin >> ans;
    if (ans == 2)
    {
        cout << "Correct!\n\n";
        score++;
    }
    else
        cout << "Wrong!\n\n";

    // Q10
    cout << "Q10. Which keyword is used to return a value from a function?\n";
    cout << "1. stop\n2. output\n3. return\n4. void\n";
    cout << "Enter Answer: ";
    cin >> ans;
    if (ans == 3)
    {
        cout << "Correct!\n\n";
        score++;
    }
    else
        cout << "Wrong!\n\n";

    cout << "=====================================\n";
    cout << "Your Final Score: " << score << "/10\n";

    if (score >= 8)
        cout << "Excellent!";
    else if (score >= 5)
        cout << "Good Job!";
    else
        cout << "Keep Practicing!";

    return 0;
}