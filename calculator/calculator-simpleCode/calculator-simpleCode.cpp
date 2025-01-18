#include <iostream>

using namespace std;

void addition(double x, double y);
void subtraction(double x, double y);
void multiplication(double x, double y);
void division(double x, double y);
int main(){
    double a, b;

    cout << "\nEnter a Number : ";
    cin >> a;
    cout << "Enter another Number : ";
    cin >> b;

    addition(a, b);
    subtraction(a, b);
    multiplication(a, b);
    division(a, b);

    return 0;
}

void addition(double x, double y)
{
    cout << "\nSum : " << x + y;
}
void subtraction(double x, double y)
{
    cout << "\nDifference : " << x - y;
}
void multiplication(double x, double y){
    cout << "\nProduct : " << x * y;
}
void division(double x, double y)
{
    if (y != 0){
        cout << "\nQoutient : "<< x / y;
    }
    else{
        cout << "\nInvalid division- the divider must'nt be zero ...!";
    }
}

