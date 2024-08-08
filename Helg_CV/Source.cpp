#include <iostream>
#include <string>

using namespace std;

int main() {
    string mode;
    cout << "Enter mode (dev/prod): ";
    cin >> mode;

    if (mode == "dev") {
        cout << "Resume: Developer" << endl;
        cout << "Name: Oleg Zamriy" << endl;
        cout << "Experience: 5 years" << endl;
        cout << "Skills: C++, Python, Java" << endl;
        cout << "Projects: Project 1, Project 2, Project 3" << endl;
    }
    else if (mode == "prod") {
        cout << "Resume: Student" << endl;
        cout << "Name: Oleg Zamriy" << endl;
        cout << "University: Technical University" << endl;
        cout << "Course: 3rd year, Computer Science" << endl;
        cout << "Skills: C++, Python" << endl;
        cout << "Projects: Course Project 1, Course Project 2" << endl;
    }
    else {
        cout << "Invalid mode. Please enter 'dev' or 'prod'." << endl;
    }

    return 0;
}