#include <iostream>


//Pointer Basics:
// Write a program that declares an integer variable a and a pointer p to an integer.
// Assign the address of a to p.
// Print the address stored in p and the value of a using p. 
// Change the value of a using p and print the new value of a.
//




int main()
{
	// Write a program that declares an integer variable a and a pointer p to an integer.
	int a = 5;

	int* pA;


	// Assign the address of a to p.
	pA = &a;


	// Print the address stored in p and the value of a using p. 
	std::cout << "pointer 'pA' = " << *pA << "\n" << "register address 'a' = " << &a << std::endl;


	// Change the value of a using p and print the new value of a.
	*pA = 50;

	std::cout << "pointer 'pA' = " << *pA << std::endl;


	return 0;



}


