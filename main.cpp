
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
void tampilkanMenu() {
    cout << "==============================" << endl;
    cout << "      Konversi Suhu         " << endl;
    cout << "==============================" << endl;
    cout << "1. Celsius ke Fahrenheit (°C => °F)" << endl;
    cout << "2. Celsius ke Kelvin\t (°C =>  K)" << endl;
    cout << "3. Fahrenheit ke Celsius (°F => °C)" << endl;
    cout << "4. Fahrenheit ke Kelvin\t (°F =>  K)" << endl;
    cout << "5. Kelvin ke Celsius\t ( K => °C)" << endl;
    cout << "6. Kelvin ke Fahrenheit\t ( K => °F)" << endl;
    cout << "==============================" << endl;
}

int main() {
    double suhu;
    int pilihan;

    tampilkanMenu();

    cout << "Masukkan pilihan (1-6): ";
    cin >> pilihan;

    cout << "Masukkan suhu: ";
    cin >> suhu;


    switch (pilihan) {
        case 1:
            cout << suhu << " °C = " << celsiusToFahrenheit(suhu) << " °F" << endl;
            break;
        case 2:
            cout << suhu << " °C = " << celsiusToKelvin(suhu) << " K" << endl;
            break;
        case 3:
            cout << suhu << " °F = " << fahrenheitToCelsius(suhu) << " °C" << endl;
            break;
        case 4:
            cout << suhu << " °F = " << fahrenheitToKelvin(suhu) << " K" << endl;
            break;
        case 5:
            cout << suhu << " K = " << kelvinToCelsius(suhu) << " °C" << endl;
            break;
        case 6:
            cout << suhu << " K = " << kelvinToFahrenheit(suhu) << " °F" << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
    }

    return 0;
}
