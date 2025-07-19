#include <iostream>
using namespace std;

int main() {

    double netObtainedMarks, netTotalMarks;
    double matricObtainedMarks, matricTotalMarks;
    double interObtainedMarks, interTotalMarks;
    double aggregatePercentage;

    cout << "=== NUST Aggregate Calculator ===\n\n";

    cout << "Enter Obtained NET Marks: ";
    cin >> netObtainedMarks;
    cout << "Enter Total NET Marks: ";
    cin >> netTotalMarks;

    cout << "Enter Obtained Matric Marks: ";
    cin >> matricObtainedMarks;
    cout << "Enter Total Matric Marks: ";
    cin >> matricTotalMarks;

    cout << "Enter Obtained Intermediate Marks: ";
    cin >> interObtainedMarks;
    cout << "Enter Total Intermediate Marks: ";
    cin >> interTotalMarks;

    aggregatePercentage = (netObtainedMarks / netTotalMarks) * 0.75 * 100
                        + (matricObtainedMarks / matricTotalMarks) * 0.10 * 100
                        + (interObtainedMarks / interTotalMarks) * 0.15 * 100;

    cout << "\nYour NUST Aggregate Percentage is: " << aggregatePercentage << "%" << endl;

    return 0;
}
