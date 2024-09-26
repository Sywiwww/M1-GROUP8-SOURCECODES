#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double Radius, Area, Circumference,result;
    cout << " Enter a Radius: ";
    cin >> Radius;
    
    result = Radius * Radius;
    Area = 3.1416 * result;
    Circumference = 2 * 3.1416 * Radius;
    cout << fixed << setprecision(2);
    cout << " Area: "<< Area << endl;
    cout << " Circumference: "<< Circumference << endl;

    
    return 0;
}