// Classes-Objects-OOP.cpp 
#include <iostream>

// by default, class accessibility is private
// while struct accessibility is public
class MyClass {
// public properties are accessible by functions even outside of the class
public:
	int myNum;
	std::string myString;

	// constructors are methods that get called first automatically
	// (usually used to initialize attributes(variables defined within class))
	MyClass() {
		myNum = 0;
		myString = "";
	}
	// Other following functions are called Class methods
	// Class methods can be defined inside (like these) or outside of the class
	void setAttributes(int num, std::string name) {
		myNum = num;
		myString = name;
	}
	void myOutsideMethod();
	void printAttributes() {
		std::cout << "myNum: " << myNum << std::endl;
		std::cout << "myString: " << myString << std::endl;
	}
	// public setters and getters
	void setPrivateAtts(int id, std::string email) {
		idNum = id;
		userEmail = email;
	}
	void getPrivateAtts() {
		std::cout << "User id number: " << idNum << std::endl;
		std::cout << "User email: " << userEmail << std::endl;
	}

// private properties are only accessible within the class 
// When trying to access private attributes, we can declare public setters and getters
private:
	int idNum;
	std::string userEmail;

};

// defining class method outside of class using scope resolution operator :: 
// (method still needs to be declared inside class)
void MyClass::myOutsideMethod() {
	std::cout << "This is a method that was defined OUTside of the class!" << std::endl;
}

int main() {
	// Creating an instance (or Object) of a class
	MyClass test;
	test.setAttributes(5, "Mark");
	test.printAttributes();
	test.myOutsideMethod();
	// Accessing private attributes with setters and getters
	test.setPrivateAtts(12345, "markR@gmail.com");
	test.getPrivateAtts();

	return 0;
}