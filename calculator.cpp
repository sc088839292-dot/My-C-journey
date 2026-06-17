#include <iostream>
using namespace std;
void calculator( double num1,double num2, char op)
{
    switch (op)
    {
    case '+':
    cout << "Result :" << num1 + num2 << endl;
        break;
    case '-':
    cout << "Result :" << num1 -num2 << endl;
        break;
    case '*':
    cout << "Result :" <<  num1*num2 << endl;
        break;
        case '/':
        if(num2 != 0)
        {
            cout << "Result:" << num1/num2 << endl;
        }
        else
        {
            cout << "Error! Zero se divide nahi kae sakte." << endl;
        }
     break;
    default:
    cout << "Galat operator daala hai!" <<endl;
        
    }
}
int main()
{
    double n1,n2;
    char operation;
    cout << "=== SMART CALCULATOR ===" << endl;
    cout << "Pehla Number daalo:";
    cin >> n1;
    cout << " Operatior daalo (+,-,*,%)";
    cin >> operation;
    cout << "Dusra Number daalo:";
    cin >> n2;
    calculator(n1,n2,operation);
    return 0;
}