#include <iostream>
#include <string>
using namespace std;

int main()
{
    double len, wid, area, perim;
    
    cout << "Enter length and width: ";
    cin >> len >> wid;
    
    area = len * wid;
    perim = 2 * (len + wid);
    
    cout << "The area is: " << area << endl;
    cout << "The perimeter is: " << perim;
    

    return 0;
}