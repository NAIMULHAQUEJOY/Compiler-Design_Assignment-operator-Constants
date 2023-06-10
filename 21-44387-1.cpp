#include <iostream>
#include <fstream>
#include <string>
using namespace std;                                                     //MOHAMMAD NAIMUL HAQUE
                                                                        //ID: 21-44387-1
                                                                        //SEC-D MID LAB EXAM
int main()
{
    ifstream input("input.txt");  // Open input file
    string expression;
    getline(input, expression);   // Read input expression from file

    cout << "Input expression: " << expression << endl;
    cout << "Assignment Operators: ";

    for (int i = 0; i < expression.length(); i++)
        {
            if (expression[i] == '=' ) {
            cout << expression[i];
        }
        }
        cout << endl;

        cout << "Operators: ";

    for (int i = 0; i < expression.length(); i++)
        {
            if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
            cout << expression[i] << " ";
        }
        }
           cout << endl;
           cout << endl << "Constants: ";

    for (int i = 0; i < expression.length(); i++)
    {
        if (isdigit(expression[i]) && !isalpha(expression[i+1]) && !isalpha(expression[i+2]))
        {
            cout << expression[i];
        }

        else if (isdigit(expression[i]) && isalpha(expression[i+1]))
        {
            cout<<"INVALID!!";
            break;
        }
    }

    return 0;
}
