#include <iostream>
using namespace std;

main()
{
    char op; //Operators such as + - * /
    int a, b; //Operands

    cin >> a >> op >> b; //Gradually input the calculation

    switch (op) //operation sector using switch
        {

        case '+':
            cout << " = " << a + b; //will do addition
            break;

        case '-':
            cout << a - b; //will do subtraction
            break;

        case '*':
            cout << a * b; //will do multiplication
            break;

        case '/':
            cout << a / b; //will do division
            break;

        default:
            cout << "Error!"; //only if operator is incorrect
            break;
    }

    return 0;
}
