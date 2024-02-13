/*
	Fahrenheit, Celsius, Kelvin Converter
	By: Marco Rangel
	Jan. 30, 2024
*/
#include <iostream>
#include <iomanip> // to use std::setprecision
#include <locale> // to use std::tolower()

// declaring functions needed
void convertFromF(float temp, int prec) {
	float tempInC = (5 / 9) * (temp - 32);
	float tempInK = tempInC + 273.15;
	std::cout << "\nYou entered " << temp << " in Fahrenheit.";
	std::cout << "\nThe temperature in Celsius is: " << std::setprecision(prec) << tempInC << "C";
	std::cout << "\nThe temperature in Kelvin is: " << std::setprecision(prec) << tempInK << "K";
}

void convertFromC(float temp, int prec) {
	float tempInF = (temp * (9 / 5)) + 32;
	float tempInK = temp + 273.15;
	std::cout << "\nYou entered " << temp << " in Celsius.";
	std::cout << "\nThe temperature in Fahrenheit is: " << std::setprecision(prec) << tempInF << "F";
	std::cout << "\nThe temperature in Kelvin is: " << std::setprecision(prec) << tempInK << "K";
}

void convertFromK(float temp, int prec) {
	float tempInC = temp - 273.15;
	float tempInF = (temp - 273.15) * 1.8 + 32;
	std::cout << "\nYou entered " << temp << " in Kelvin.";
	std::cout << "\nThe temperature in Celsius is: " << std::setprecision(prec) << tempInC << "C";
	std::cout << "\nThe temperature in Fahrenheit is: " << std::setprecision(prec) << tempInF << "F";
}

int main() {
	// define variables needed
	float temperature; // temperature to be input
	int precision; // used for setting decimal place precision
	char userChoice; // getting user choice
	
	// prompt user
	std::cout << "------- Fahrenheit, Celsius, Kelvin Converter -------\n";
	std::cout << "\nPlease enter a temperature (you may use decimal points): ";
	std::cin >> temperature;
	std::cout << "\nPlease enter the number of decimal points you'd like to be rounded to (1-3): ";
	std::cin >> precision;
	std::cout << "\nAre you entering a temperature in (F)ahrenheit, (C)elsius or (K)elvin? ";
	std::cin >> userChoice;
	

	switch (std::tolower(userChoice)) {
		case 'f':
			convertFromF(temperature, precision);
			break;
		case 'c':
			convertFromC(temperature, precision);
			break;
		case 'k':
			convertFromK(temperature, precision);
			break;
		default:
			std::cout << "\nOops, that's not a valid type of temperature." << std::endl;
			break;
	}
	
	return 0;
}