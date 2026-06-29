#include <iostream>
using namespace std;

int main()
{
    string s, result = "";
    cout << "Enter string: ";
    getline(cin, s);

    bool visited[256] = {false};

    for (int i = 0; i < s.length(); i++)
    {
        if (visited[s[i]] == false)
        {
            result += s[i];
            visited[s[i]] = true;
        }
    }

    cout << "After removing duplicates: " << result;

    return 0;
}