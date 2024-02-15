#include <iostream> // The line above is the preprocessor. It adds the headers file iostream to the code. 

int main() // Main function.

{ // Begining of the block of code
	
	/*
		This code is similar to the one in the first exercise.
		The only difference is it divides the message through the lines.
		The \n is used to skip lines - it's the easiest way to skip lines.
	*/
	std::cout << "I \n will \n learn \n to  \n code \n in \n C++  \n language" << std::endl;
	
	system("PAUSE");
	/*
		system -> allows us to use the System Functions, related to the O.S.
		PAUSE -> Pauses the Command Prompt window and asks for a random key to unpause it (most keys of the keyboard will do).
	*/
	
	return 0; // return 0 -> Returns to the Windows shell if the code runned without errors.

} // End of the block of code