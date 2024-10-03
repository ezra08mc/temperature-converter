
#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9 + 273.15;
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9 / 5 + 32;
}
void displayMenu() {
    cout << "==============================" << endl;
    cout << "      Temperature Converter   " << endl;
    cout << "==============================" << endl;
    cout << "1. Celsius to Fahrenheit (°C => °F)" << endl;
    cout << "2. Celsius to Kelvin\t (°C => K)" << endl;
    cout << "3. Fahrenheit to Celsius (°F => °C)" << endl;
    cout << "4. Fahrenheit to Kelvin\t (°F => K)" << endl;
    cout << "5. Kelvin to Celsius\t (K => °C)" << endl;
    cout << "6. Kelvin to Fahrenheit\t (K => °F)" << endl;
    cout << "==============================" << endl;
}

int main() {
    double temperature;
    int choice;

    displayMenu();

    cout << "Enter your choice (1-6): ";
    cin >> choice;

    cout << "Enter the temperature: ";
    cin >> temperature;

    switch (choice) {
        case 1:
            cout << temperature << " °C = " << celsiusToFahrenheit(temperature) << " °F" << endl;
            break;
        case 2:
            cout << temperature << " °C = " << celsiusToKelvin(temperature) << " K" << endl;
            break;
        case 3:
            cout << temperature << " °F = " << fahrenheitToCelsius(temperature) << " °C" << endl;
            break;
        case 4:
            cout << temperature << " °F = " << fahrenheitToKelvin(temperature) << " K" << endl;
            break;
        case 5:
            cout << temperature << " K = " << kelvinToCelsius(temperature) << " °C" << endl;
            break;
        case 6:
            cout << temperature << " K = " << kelvinToFahrenheit(temperature) << " °F" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
