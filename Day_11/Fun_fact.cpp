#include <iostream>
using namespace std;
int fact(int a)
{
    long long int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int x;
    cout << "Enter a number :";
    cin >> x;
    cout << "Factorial of this number is : " << fact(x);
    return 0;
}