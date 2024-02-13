// Basics-Fundamentals.cpp 
#include <iostream>

void printGreeting() {
	std::cout << "Hello! I am a function!" << std::endl;
};
int addition(int a, int b);

int main() {
	// data types & variables
	int userInt = 5;
	float userFloat = 34.64;
	double userDouble = 123.453;
	char userChar = 'd';
	std::string userString = "This is a string";
	bool userBool = true;

	// Input/Output
	int userChoice;
	std::cout << "Please enter an integer: ";
	std::cin >> userChoice;
	std::cout << "\nYou entered " << userChoice << " as your choice.\n";

	// Control Flow / Conditionals
	int num1 = 4;
	int num2 = 8;
	if (num1 == num2) {
		std::cout << num1 << " and " << num2 << " are equal!" << std::endl;
	}
	else if (num1 > num2) {
		std::cout << num1 << " is greater than " << num2 << std::endl;
	}
	else {
		std::cout << num1 << " is less than " << num2 << std::endl;
	}

	// switch-case statement
	int num = 4;
	switch (num) {
		case 0:
			std::cout << 0 << std::endl;
			break;
		case 1:
			std::cout << 1 << std::endl;
			break;
		case 2:
			std::cout << 2 << std::endl;
			break;
		case 3:
			std::cout << 3 << std::endl;
			break;
		case 4:
			std::cout << 4 << std::endl;
			break;
		default:
			std::cout << "Oops! Invalid input!\n";
			break;
	}

	// Logic Operators AND, OR, NOT
	if (true && false) {
		std::cout << true << std::endl;
	}
	else {
		std::cout << false << std::endl;
	}

	if (true || false) {
		std::cout << true << std::endl;
	}
	else {
		std::cout << false << std::endl;
	}

	if (!true) {
		std::cout << true << std::endl;
	}
	else {
		std::cout << false << std::endl;
	}

	// Loops (for and while)
	for (int i = 0; i < 0; i++) {
		std::cout << i << std::endl;
	}
	int controlVar = 0;
	while (controlVar != 5) {
		std::cout << "While: " << controlVar << std::endl;
		controlVar++;
	}

	// Functions
	printGreeting();
	int sum = addition(5, 4);
	std::cout << "Sum of 5 and 4 is: " << sum << std::endl;

	return 0;
}

int addition(int a, int b) {
	return a + b;
}