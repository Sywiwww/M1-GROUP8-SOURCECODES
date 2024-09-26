#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
    double price1, price2, price3;
    double subtotal, discount, finalAmount, salesTax;
    cout << "Enter the price of the first item: ";
    cin >> price1;
    cout << "Enter the price of the second item: ";
    cin >> price2;
    cout << "Enter the price of the third item: ";
    cin >> price3;
    subtotal = price1 + price2 + price3;
    if (subtotal > 100) {
        discount = subtotal * 0.10;
    } else {
        discount = 0;
    }
    finalAmount = subtotal - discount;
    salesTax = finalAmount * 0.07;
    finalAmount += salesTax;
    double cutSubtotal = (int)(subtotal * 100) / 100.0;
    double cutDiscount = (int)(discount * 100) / 100.0;
    double cutSalesTax = (int)(salesTax * 100) / 100.0;
    cout << fixed << setprecision(2);
    if (cutSubtotal == (int)cutSubtotal) {
        cout << "Subtotal: " << (int)cutSubtotal << endl;
    } else {
        cout << "Subtotal: " << cutSubtotal << endl;
    }
    if (cutDiscount == (int)cutDiscount) {
        cout << "Discount: " << (int)cutDiscount << endl;
    } else {
        cout << "Discount: " << cutDiscount << endl;
    }
    if (cutSalesTax == (int)cutSalesTax) {
        cout << "Sales Tax: " << (int)cutSalesTax << endl;
    } else {
        cout << "Sales Tax: " << cutSalesTax << endl;
    }
    cout << "Total Amount Due: " << fixed << finalAmount << endl;
    return 0;
}
