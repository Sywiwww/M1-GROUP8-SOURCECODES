#include <iostream>
using namespace std;
int main()
{
    int principal, time;
    double rate, simple_interest;

    cout << "Principal: ";
    cin >> principal;
    cout << "Rate: ";
    cin >> rate;
    cout << "Years: ";
    cin >> time;

    cout << "   "<< endl;
    cout << "Principal: " << principal << endl;
    cout << "Rate " << rate <<" % "<< endl;
    cout << "Time: " << time << " Years" << endl;
    cout << "   "<< endl;
    simple_interest = principal * rate * time / 100;
    cout << "Simple Interest: " << simple_interest << endl;
    return 0;
}
