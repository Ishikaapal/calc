#include <iostream>
using namespace std;

int main()
{
    float result = 0;
    cout << "Welcome to the Calculator" << endl;
    float num, num2;
    while (true)
    {

        if (result == 0)
        {
            cout << "Enter Number : ";
            cin >> num;
            result = num;
            cout << "You entered :" << result << endl;
        }

        cout << "***********************************************" << endl;
        cout << " + for Addition       " << "\t - for Subtraction" << endl;
        cout << " * for Multiplication " << "\t / for Division" << endl;
        cout << " c for Clear          " << "\t e for Exit" << endl;

        cout << "***********************************************" << endl;

        string user_choice;
        cout << "Enter your choice : ";
        cin >> user_choice;

        if (user_choice == "+" || user_choice == "-" || user_choice == "*" || user_choice == "/")
        {
            cout << "Enter a number : ";
            cin >> num;
            if (user_choice == "+")
            {
                cout<<result<<" + "<<num<<" = ";
                result = result + num;
                cout << result << endl;
            }
            if (user_choice == "-")
            {
                cout<<result<<" - "<<num<<" = ";
                result = result - num;
                cout << result << endl;
            }
            if (user_choice == "*")
            {
                cout<<result<<" * "<<num<<" = ";
                result = result * num;
                cout << result << endl;
            }
            if (user_choice == "/")
            {
                if (num != 0)
                {
                    cout<<result<<" / "<<num<<" = ";
                    result = result / num;
                    cout << result << endl;
                }
                else
                {
                    cout << "Invalid" << endl;
                }
            }
        }
        else
        {
            if (user_choice == "c" || user_choice == "C")
            {
                result = 0;
                cout << "Cleared, Start Again" << endl<<endl;
            }
            else if (user_choice == "e" || user_choice == "E")
            {
                break;
            }
            else
            {
                cout << "Invalid Input , Choose from the following" << endl;
            }
        }
    }

    cout << "Thank you for using." << endl;
}