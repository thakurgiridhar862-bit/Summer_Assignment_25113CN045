#include <iostream>
using namespace std;

int main()
{
    string s1, s2;

    cout << "Enter first string: ";
    getline(cin, s1);

    cout << "Enter second string: ";
    getline(cin, s2);

    if (s1.length() != s2.length())
    {
        cout << "Not Rotation";
        return 0;
    }

    string temp = s1 + s1;

    if (temp.find(s2) != string::npos)
        cout << "String Rotation";
    else
        cout << "Not Rotation";

    return 0;
}