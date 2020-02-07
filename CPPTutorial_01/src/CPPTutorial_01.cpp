//============================================================================
// Name        : CPPTutorial_01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : C++ Tutorial - Derek Banas
//============================================================================

#include <iostream>
// #include <cstdlib>
// #include <iostream>
// #include <string>
// #include <vector>
// #include <sstream>


int main(int argc, char** argv) {

	std::cout << "Hello Cruel World\n";

	if(argc != 1){
		std::cout << "You entered " << argc<< " arguments" << std::endl;
	}

	for(int i=0; i < argc; ++i){
		std::cout << argv[i] << std::endl;
	}

	return 0;
}
