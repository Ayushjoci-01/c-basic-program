*#include <iostream>
using namespace std;
double calculateCharge(int units) {
    double totalCharge = 0;
    if (units <= 100) {
        totalCharge = units * 0.60;
    } else if (units <= 300) {
        totalCharge = 100 * 0.60 + (units - 100) * 0.80;
    } else {
        totalCharge = 100 * 0.60 + 200 * 0.80 + (units - 300) * 0.90;
    }
    if (totalCharge < 50) {
        totalCharge = 50; 
    }
    if (totalCharge > 300) {
        totalCharge += totalCharge * 0.15; 
    }
    return totalCharge;
}
int main() {
    int units;
    cout << "Enter the number of units consumed: ";
    cin >> units;
    double charge = calculateCharge(units);
    cout << "Total charge: " << charge << " INR" << endl;
    return 0;
}
