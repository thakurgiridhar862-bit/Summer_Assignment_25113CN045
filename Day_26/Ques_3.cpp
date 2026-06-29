#include <iostream>
using namespace std;
int main()
{
    int balance = 10000;
    cout << "============== ATM DASHBOARD ====================" << endl;

    while (true)
    {
        cout << "1. BALANCE" << endl;
        cout << "2. DEPOSIT" << endl;
        cout << "3. WITHDRAW" << endl;
        cout << "4. EXIT" << endl;
        int choice;
        cout << "SELECT A OPITON (1-4) : ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Your Balance is : " << balance << endl;
        }
        else if (choice == 2)
        {
            int amt;
            cout << "Enter amount you want to deposit : ";
            cin >> amt;
            if (amt > 0)
            {
                balance += amt;
                cout << "Your amount has been Deposited !!";
            }
            else
            {
                cout << "Invalid Operation Performed !!";
            }
        }
        else if (choice == 3)
        {
            int amt;
            cout << "Enter the amount you want to withdraw : ";
            cin >> amt;
            if (amt > 0)
            {
                if (amt <= balance)
                {
                    balance -= amt;
                    cout << "Your amount has been withdrawn !! " << endl;
                }
                else
                {
                    cout << "Insufficient Balance !!";
                }
            }
            else
            {
                cout << "Invalid Operation Performed !!";
            }
        }
        else if (choice == 4)
        {
            cout << "Thank You For Choosing ATM !!";
            break;
        }
        else
        {
            cout << "Invalid choice !!" << endl;
        }
    }
    return 0;
}