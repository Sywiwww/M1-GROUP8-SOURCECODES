#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() 
{
    double principal, annualRate, monthlyRate, numberOfYears, numberOfMonths, monthlyPayment;

    cout << "Enter loan amount (principal): ";
    cin >> principal;

    cout << "Enter annual interest rate (as a decimal, e.g., 0.05 for 5%): ";
    cin >> annualRate;

    cout << "Enter number of years: ";
    cin >> numberOfYears;

    numberOfMonths = numberOfYears * 12;
    monthlyRate = annualRate / 12;

    monthlyPayment = (principal * monthlyRate * pow(1 + monthlyRate, numberOfMonths)) /
                     (pow(1 + monthlyRate, numberOfMonths) - 1);

    cout << fixed << setprecision(2);
    cout << "The monthly payment is: " << monthlyPayment << endl;

    return 0;
}
