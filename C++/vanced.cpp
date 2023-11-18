#include<iostream>
using namespace std;
int main ()
    {
    int numberOfitems;

    double lc=1, number, result = 0;
    char operation;

    cout << "Enter number of items: ";
    cin >> numberOfitems;

    while (lc<=numberOfitems)
    {
    cout << "Enter a number: ";
    cin >> number;

    if(lc < numberOfitems)
    {
    cout <<"Operations +,-,* or /: ";
    cin>>operation;
    }

    switch(operation)
    {
    case '+':
    {
    result=result+number;  //do stuff +
    } break;

    case '-':
    {
    result=result-number;//do stuff -
    }
    break;

    default:
    {
    cout << "Invalid Operation\n";
    }
    break;
    }

    lc++;
    }

    cout<<"____________"<<"\nTotal answer is = "<<result<<endl;
}