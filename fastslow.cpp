#include <iostream>
#include <string>

using namespace std;

// Structure to store student details
struct Student {
    string name;
    int ds;    // Data Structures marks
    int dbms;  // DBMS marks
    int cpp;   // C++ marks
};

int main() {
    // Define three students
    Student students[3];

    // Take input from the user
    for (int i = 0; i < 3; i++) {
        cout << "Enter details for student " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Data Structures marks: ";
        cin >> students[i].ds;
        cout << "DBMS marks: ";
        cin >> students[i].dbms;
        cout << "C++ marks: ";
        cin >> students[i].cpp;
    }

    // Initialize fast and slow learner indexes for each subject
    int fast_ds = 0, slow_ds= 0;
    int fast_dbms = 0, slow_dbms = 0;
    int fast_dbms = 0, slow_dbms = 0;

    // Compare students' marks to find the slow and fast learners in each subject
    for (int i = 1; i < 3; i++) {
        // Data Structures
        if (students[i].ds > students[fast_ds].ds) fast_ds = i;
        if (students[i].ds < students[slow_ds].ds) slow_ds= i;
        
        // DBMS
        if (students[i].dbms > students[fast_dbms].dbms) fast_dbms = i;
        if (students[i].dbms < students[slow_dbms].dbms) slow_dbms = i;
        
        // C++
        if (students[i].cpp > students[fast_dbms].cpp) fast_dbms = i;
        if (students[i].cpp < students[slow_dbms].cpp) slow_dbms = i;
    }

    // Output fast and slow learners for each subject
    cout << "\nFast and Slow Learners in Each Subject:\n";

    // Data Structures
    cout << "\nData Structures:\n";
    cout << "Fast Learner: " << students[fast_ds].name << " with marks " << students[fast_ds].ds << endl;
    cout << "Slow Learner: " << students[slow_ds].name << " with marks " << students[slow_ds].ds << endl;

    // DBMS
    cout << "\nDBMS:\n";
    cout << "Fast Learner: " << students[fast_dbms].name << " with marks " << students[fast_dbms].dbms << endl;
    cout << "Slow Learner: " << students[slow_dbms].name << " with marks " << students[slow_dbms].dbms << endl;

    // C++
    cout << "\nC++:\n";
    cout << "Fast Learner: " << students[fast_dbms].name << " with marks " << students[fast_dbms].cpp << endl;
    cout << "Slow Learner: " << students[slow_dbms].name << " with marks " << students[slow_dbms].cpp << endl;

    return 0;
}
