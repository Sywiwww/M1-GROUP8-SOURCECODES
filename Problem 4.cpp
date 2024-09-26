#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    double cel, fah;
    
    cout << "Input a temperature in Celcius: ";
    cin >> cel;
    fah = (1.8 * cel) + 32;
    cout << fixed << setprecision(1);
    cout << "Conversion to Fahrenheit: " << fah <<endl;

    return 0;
}