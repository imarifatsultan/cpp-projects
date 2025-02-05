#include <iostream>
using namespace std;


char calculateGrade(float avg) {
    if (avg >= 90)
        return 'A';
    else if (avg >= 80)
        return 'B';
    else if (avg >= 70)
        return 'C';
    else if (avg >= 60)
        return 'D';
    else
        return 'F';
}

int main() {
    int numSubjects;
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;
    
    if (numSubjects <= 0) {
        cout << "Invalid number of subjects!" << endl;
        return 1;
    }
    
    float marks[numSubjects], total = 0;
    
   
    for (int i = 0; i < numSubjects; i++) {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
        
        if (marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid marks entered!" << endl;
            return 1;
        }
        total += marks[i];
    }
    
    float avg = total / numSubjects;
    char grade = calculateGrade(avg);
    
 
    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << avg << endl;
    cout << "Grade: " << grade << endl;
    
    return 0;
}
