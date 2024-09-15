#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  
    // Print the header row
    cout << left << setw(10) << "Course"
         << right << setw(10) << "Students" << endl;

    // Print the row for C++
    cout << left << setw(10) << "C++"
         << right << setw(10) << 100 << endl;

    // Print the row for JavaScript
    cout << left << setw(10) << "JavaScript"
         << right << setw(10) << 50 << endl;

    return 0;
}
