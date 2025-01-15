#include <iostream>
using namespace std;

class temp
{
public:
    int a, b, c;
    char op;

    void getValue1();
    void getValue2();
    void getOperator();

    void add();
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

    while (obj.op)
    {
        if(obj.op == '=')
        {
            obj.getValue2();

            switch (obj.op)
            {
            case '+':
                obj.add();
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
                cout << "Invalid Operator chosen;" << endl;
                break;
            }
        }
    }
    return 0;
}

void temp::getValue1()
{
    cout << "Enter the value :: ";
    cin >> a;
}

void temp::getValue2()
{
    cout << "Enter the value :: ";
    cin >> b;
}

void temp::getOperator()
{
    cout << "Enter the Operator :: ";
    cin >> op;
}

void temp::add()
{
    c = a + b;
    cout << a << "+" << b << " :: " << c;
    a = c;
    b = 0;
}

void temp::subtract()
{
    c = a - b;
    cout << a << " - " << b << " :: " << c;
    a = c;
    b = 0;
}

void temp::multiply()
{
    c = a * b;
    cout << a << " * " << b << " :: " << c;
    a = c;
    b = 0;
}

void temp::divide()
{
    if (b == 0)
    {
        cout << "Error: Division by zero!" << endl;
    }
    else
    {
        c = a / b;
        cout << a << " / " << b << " :: " << c << endl;
        a = c;
        b = 0;
    }
}
