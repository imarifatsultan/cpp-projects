#include <iostream>
using namespace std;

class calculator
{
public:
    int a, b, c;
    char op;

    void getValue1();
    void getValue2();
    void getOperator();

    void addition();
    void subtract();
    void multiply();
    void divide();
} obj;

int main()
{
    cout << "\nOperators\n\n";
    cout << "(+) For Addition\n";
    cout << "(-) For Subtraction\n";
    cout << "(*) For Multiplication\n";
    cout << "(/) For Division\n";
    cout << "(=) Total\n\n";

    obj.getValue1();
    obj.getOperator();

    if (obj.op == '=')
    {
        cout << "\nTotal : " << obj.a; 
    }
    else
    {
        while (obj.op != '=')
        {
            obj.getValue2();

            switch (obj.op)
            {
            case '+':
                obj.addition();
                break;
            case '-':
                obj.subtract();
                break;
            case '*':
                obj.multiply();
                break;
            case '/':
                obj.divide();
                break;
            default:
                cout << "Invalid Operator chosen!" << endl;
                break;
            }
            obj.getOperator(); 
        }
        cout << "\nTotal : " << obj.c << endl; 
    }
    return 0;
}

void calculator::getValue1()
{
    cout << "Enter the value :: ";
    cin >> a;
    c = a; 
}

void calculator::getValue2()
{
    cout << "Enter the value :: ";
    cin >> b;
}

void calculator::getOperator()
{
    cout << "Enter the Operator :: ";
    cin >> op;
}

void calculator::addition()
{
    c = a + b;
    cout << a << " + " << b << " = " << c << endl;
    a = c; 

void calculator::subtract()
{
    c = a - b;
    cout << a << " - " << b << " = " << c << endl;
    a = c;
}

void calculator::multiply()
{
    c = a * b;
    cout << a << " * " << b << " = " << c << endl;
    a = c;
}

void calculator::divide()
{
    if (b == 0)
    {
        cout << "Error: Division by zero!" << endl;
    }
    else
    {
        c = a / b;
        cout << a << " / " << b << " = " << c << endl;
        a = c;
    }
}
