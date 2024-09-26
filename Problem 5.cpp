#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    double weight, height, bmi;
    
    cout << "Input your weight in kilogram: ";
    cin >> weight;
    cout << "Input your height in meters: ";
    cin >> height;
    bmi = weight / (height * height);
    cout << fixed << setprecision(2);
    cout << "Your BMI: " << bmi << endl;

    return 0;
}