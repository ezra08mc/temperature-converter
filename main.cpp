#include <iostream>
using namespace std;

// Conversion functions
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

double celsiusToReaumur(double celsius) {
    return celsius * 4 / 5;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9 + 273.15;
}

double fahrenheitToReaumur(double fahrenheit) {
    return (fahrenheit - 32) * 4 / 9;
}

double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9 / 5 + 32;
}

double kelvinToReaumur(double kelvin) {
    return (kelvin - 273.15) * 4 / 5;
}

double reaumurToCelsius(double reaumur) {
    return reaumur * 5 / 4;
}

double reaumurToFahrenheit(double reaumur) {
    return reaumur * 9 / 4 + 32;
}

double reaumurToKelvin(double reaumur) {
    return reaumur * 5 / 4 + 273.15;
}

// Display menu function
void displayMenu() {
    cout << "==============================" << endl;
    cout << "      Temperature Converter   " << endl;
    cout << "==============================" << endl;
    cout << "1. Celsius to Fahrenheit  (°C => °F)" << endl;
    cout << "2. Celsius to Kelvin\t  (°C => K )" << endl;
    cout << "3. Celsius to Réaumur\t  (°C => °Re)" << endl;
    cout << "4. Fahrenheit to Celsius  (°F => °C)" << endl;
    cout << "5. Fahrenheit to Kelvin\t  (°F => K)" << endl;
    cout << "6. Fahrenheit to Réaumur  (°F => °Re)" << endl;
    cout << "7. Kelvin to Celsius\t  ( K => °C)" << endl;
    cout << "8. Kelvin to Fahrenheit\t  ( K => °F)" << endl;
    cout << "9. Kelvin to Réaumur\t  ( K => °Re)" << endl;
    cout << "10. Réaumur to Celsius\t  (°Re => °C)" << endl;
    cout << "11. Réaumur to Fahrenheit (°Re => °F)" << endl;
    cout << "12. Réaumur to Kelvin\t  (°Re =>  K)" << endl;
    cout << "==============================" << endl;
}

// Main function
int main() {
    double temperature;
    int choice;

    displayMenu();

    cout << "Enter your choice (1-12): ";
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
            cout << temperature << " °C = " << celsiusToReaumur(temperature) << " °Re" << endl;
            break;
        case 4:
            cout << temperature << " °F = " << fahrenheitToCelsius(temperature) << " °C" << endl;
            break;
        case 5:
            cout << temperature << " °F = " << fahrenheitToKelvin(temperature) << " K" << endl;
            break;
        case 6:
            cout << temperature << " °F = " << fahrenheitToReaumur(temperature) << " °Re" << endl;
            break;
        case 7:
            cout << temperature << " K = " << kelvinToCelsius(temperature) << " °C" << endl;
            break;
        case 8:
            cout << temperature << " K = " << kelvinToFahrenheit(temperature) << " °F" << endl;
            break;
        case 9:
            cout << temperature << " K = " << kelvinToReaumur(temperature) << " °Re" << endl; 
            break; 
        case 10:
            cout<< temperature <<" °Re = "<< reaumurToCelsius(temperature)<< " °C"<<endl; 
            break; 
        case 11:
            cout<< temperature <<" °Re = "<< reaumurToFahrenheit(temperature)<< " °F"<<endl; 
            break; 
        case 12:
            cout<< temperature <<" °Re = "<< reaumurToKelvin(temperature)<< " K"<<endl; 
            break; 
        default:
            cout<< "Invalid choice!"<<endl; 
    }

    return 0; 
}
