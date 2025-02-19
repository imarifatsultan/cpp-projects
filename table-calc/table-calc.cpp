#include <iostream>
using namespace std;

int main(){
    int number;

    cout << "Enter a number to create a multiplication table : ";
    cin >> number;

    for (int i = 0; i < 10; i++){
        cout << endl << number << " X " << i;
    }

    return 0;
}