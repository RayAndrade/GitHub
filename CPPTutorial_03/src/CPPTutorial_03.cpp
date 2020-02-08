//============================================================================
// Name: CPPTutorial_03.cpp
// Author  :
// Version :
// Copyright   : Your copyright notice
// Description : C++ Tutorial - Derek Banas 22:00
//============================================================================

#include <iostream>
//#include <cstdlib>

//#include <string>
//#include <vector>
//#include <sstream>
#include <limits>

int g_iRandNum = 0;
const double PI = 3.1415926535897932;

int main() {

	// Show float precision
	float fBigFloat = 1.1111111111;


	double dbBigFloat = 1.11111111111111111111;
	double dbBigFloat2 = 1.11111111111111111111;
	double dbFloatSum = dbBigFloat + dbBigFloat2;

	// Allows you to print with formatting
	// Double addition has 15 digits of precision
	printf("dbFloatSum Precision : %.20f\n", dbFloatSum);

	// long doubles range from 3.3621e-4932 to 1.18973e+4932
	long double ldPi = 3.1415926535897932;

	// You can have the compiler assign a type
	auto whatWillIBe = true;

	// SHOW DATA TYPES MIN & MAX VALUES

	std::cout << "Min bool " << std::numeric_limits<bool>::min() << "\n";
	std::cout << "Max bool " << std::numeric_limits<bool>::max() << "\n";

	std::cout << "Min unsigned short int " <<
	std::numeric_limits<unsigned short int>::min() << "\n";
	std::cout << "Max unsigned short int " <<
	std::numeric_limits<unsigned short int
	>::max() << "\n";

	std::cout << "Min short int " <<
	std::numeric_limits<short int>::min() << "\n";
	std::cout << "Max short int " <<
	std::numeric_limits<short int
	>::max() << "\n";

	std::cout << "Min int " << std::numeric_limits<int>::min() << "\n";
	std::cout << "Max int " << std::numeric_limits<int>::max() << "\n";

	std::cout << "Min long " << std::numeric_limits<long int>::min() << "\n";
	std::cout << "Max long " << std::numeric_limits<long int>::max() << "\n";

	std::cout << "Min float " <<
	std::numeric_limits<float>::min() << "\n";
	std::cout << "Max float " <<
	std::numeric_limits<float>::max() << "\n";

	std::cout << "Min long double " <<
	std::numeric_limits<long double>::min() << "\n";
	std::cout << "Max long double " <<
	std::numeric_limits<long double>::max() << "\n";

	// Get the number of bytes used by a type
	std::cout << "int Size " << sizeof(int) << "\n";

	// More about printf()
	// char, int, 5 space right justified int,
	// 3 decimal float / double, string specifiers
	printf("%c %d %5d %.3f %s\n", 'A', 10, 5, 3.1234, "Hi");

	return 0;
}
