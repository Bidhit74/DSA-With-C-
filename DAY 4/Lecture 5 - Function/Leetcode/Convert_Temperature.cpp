// Convert the Temprature

#include <iostream>
using namespace std;

double convertFahrenheit(double celcius){
    double fahrenheit = (celcius * 1.80) + 32.00;
    return fahrenheit;
}
double convertCelcius(double fahrenheit){
    double celcius = (fahrenheit - 32.00) * 5/9;
    return celcius;
}

int main()
{
    double celcius;
    cout << "Enter celcius: "<< endl;
    cin >> celcius;
    cout << "Fahrenheit: "<< convertFahrenheit(celcius)<<endl;

    double fahrenheit;
    cout << "Enter celcius: "<< endl;
    cin >> fahrenheit;

    cout << "Celcius: " << convertCelcius(fahrenheit) << endl;

    return 0;
}