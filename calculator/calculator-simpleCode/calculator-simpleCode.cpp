#include <iostream>

using namespace std;

void division(double x, double y){
    if (y != 0){
        cout << "\nQoutient : "<< x / y;
    }
    else{
        cout << "\nInvalid division- the divider must'nt be zero ...!";
    }
}

int main(){
    double a, b;

    cout << "Enter a Number : ";
    cin >> a;
    cout << "Enter another Number : ";
    cin >> b;

    cout << "\n\nSum : " << a + b;
    cout << "\nDifference : " << a - b;
    cout << "\nProduct : " << a * b;
    division(a, b);

    return 0;
}