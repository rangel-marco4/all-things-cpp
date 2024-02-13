// References_Values_Pointers.cpp
#include <iostream>


// functions using default values
int addition(int a = 5, int b = 8) {
	return a + b;
}

// passing by reference
void swapNums(int& a, int& b) {
	std::cout << "num1 before swap: " << a << std::endl;
	std::cout << "num2 before swap: " << b << std::endl;
	int temp = a;
	a = b;
	b = temp;
}

// passing arrays as parameters
void iterateArr(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << i << ": " << arr[i] << std::endl;
	}
}



int main() {
	// -------------------------References------------------------------
	// references are done with the & and are merely references to other values/variables
	std::string food = "tacos";
	std::string& mexFood = food;

	std::cout << mexFood << std::endl; // will output "tacos"

	// the & can also be used to access memory locations of a variable
	int myNum = 5;

	std::cout << "Memory address of myNum: " << &myNum << std::endl;
	// References & Pointers are important because they allow you to manipulate data in the 
	// computers memory leading to reducing code and improving performance.

	// -------------------------Pointers----------------------------

	// Pointers are varaibles that store memory addresses as their values.
	// pointers point to a data type of the same type and is created with the * operator
	
	// Using myNum value from line 15, we can create the pointer:
	int* ptr = &myNum;
	std::cout << "Pointer ptr memory address: " << ptr << std::endl;

	// we can also get the actual value (not memory address) from the pointer using dereferencing *()
	std::cout << "Pointer ptr value: " << *(ptr) << std::endl;

	// using dereferencing, we can now change values of the pointer (just know that this
	// will also change the original value, NOT the memory address)
	*(ptr) = 10;
	std::cout << "New *(ptr) value: " << *(ptr) << std::endl;
	std::cout << "New myNum value: " << myNum << std::endl;

	// -----------------------Passing By Reference----------------------
	// passing parameters by reference to a function are useful when we need to change the value of the arguments
	int num1 = 23;
	int num2 = 53;
	swapNums(num1, num2);

	std::cout << "num1 after swap: " << num1 << std::endl;
	std::cout << "num2 after swap: " << num2 << std::endl;

	// ------------------------Passing arrays to functions---------------------------------
	int myArr[] = {2, 4, 12, 5, 35, 64};
	iterateArr(myArr, 6);

	return 0;
}
