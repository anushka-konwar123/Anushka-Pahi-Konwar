#include <iostream>
#include <iomanip> // For setting decimal precision
#include <cctype>  // For tolower() function

using namespace std;

int main() {
    char choice;
    double temperature, convertedTemperature;

    // Display menu
    cout << "Enter 'c' (or 'C') to convert Fahrenheit to Celsius\n";
    cout << "Enter 'f' (or 'F') to convert Celsius to Fahrenheit\n";
    cout << "Your choice: ";
    cin >> choice;

    // Convert to lowercase to handle both cases
    choice = tolower(choice);

    if (choice == 'c') {
        // Fahrenheit to Celsius conversion
        cout << "Enter the temperature in Fahrenheit: ";
        cin >> temperature;
        convertedTemperature = (temperature - 32) * 5.0 / 9.0;
        cout << fixed << setprecision(1);
        cout << temperature << " Fahrenheit is " << convertedTemperature << " Celsius.\n";
    } else if (choice == 'f') {
        // Celsius to Fahrenheit conversion
        cout << "Enter the temperature in Celsius: ";
        cin >> temperature;
        convertedTemperature = (temperature * 9.0 / 5.0) + 32;
        cout << fixed << setprecision(1);
        cout << temperature << " Celsius is " << convertedTemperature << " Fahrenheit.\n";
    } else {
        // Invalid choice
        cout << "Invalid choice. Please enter 'c' or 'f'.\n";
    }

    return 0;
}
