#include <iostream>
using namespace std;
int main()
{
    int age, citizen;
    cout << "Enter your age : ";
    cin >> age;
    cout << "Are you an Indian citizen? (Yes = 1 / No = 0):";
    cin >> citizen;
    if (age < 0)
    {
        cout << "Wrorng input !!";
        return 0;
    }
    if (citizen != 0 && citizen != 1)
    {
        cout << "Wrong input!!";
        return 0;
    }
    if (age >= 18 && citizen == 1)
    {
        cout << "You are eligible to vote !!";
    }
    else
    {
        cout << "You are not eligible to vote !!";
    }
    return 0;
}