#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age, num;
    double gpa;
    string name;
    
    cout << "Name: ";
    getline(cin, name);
    cout << "Age: ";
    cin >> age;
    cout << "Student Number: ";
    cin >> num;
    cout << "GPA: ";
    cin >> gpa;
    
    cout << "Student's Name: " << name << endl;
    cout << "Student's Age: " << age << endl;
    cout << "Student's Number: " << num << endl;
    gpa += 0.5;
    cout << "Student's GPA: " << gpa << endl;
    

    return 0;
}