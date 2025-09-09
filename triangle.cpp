#include <iostream>
#include <cmath> // for sqrt() function
using namespace std;

int main() {
    double a, b, c; // sides of the triangle

    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;

    // Calculate semi-perimeter
    double s = (a + b + c) / 2;

    // Calculate area using Heron's formula
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "The area of the triangle is: " << area << endl;

    return 0;
}