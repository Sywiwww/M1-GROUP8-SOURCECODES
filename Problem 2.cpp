#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, post;
    double money, bonus;
    
    cout << "Name: ";
    getline(cin, name);
    cout << "Position: ";
    getline(cin, post);
    cout << "Salary: ";
    cin >> money;
    cout << "Bonus: ";
    cin >> bonus;
    cout << "\v\v";
    
    money += bonus;
    cout << "Employee's Name: " << name << endl;
    cout << "Employee's Position: " << post << endl;
    cout << "Employee's Salary: " << money << endl;
    

    return 0;
}