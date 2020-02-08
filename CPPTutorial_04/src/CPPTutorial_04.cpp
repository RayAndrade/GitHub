//============================================================================
// Name        : CPPTutorial_04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : C++ Tutorial - Derek Banas 33:00
// http://www.newthinktank.com/2018/03/c-tutorial-26/
// https://youtu.be/N5HgK1bTLOg
//============================================================================

#include <iostream>
// #include <cstdlib>

// #include <string>
// #include <vector>
// #include <sstream>
#include <limits>


int main() {
	std::string sQuestion ("Enter Number 1 : ");
	std::string sNum1, sNum2;
	std::cout << sQuestion;

	getline(std::cin, sNum1);
	std::cout << "Enter Number 2 : ";
	getline(std::cin, sNum2);

    int nNum1 = std::stoi(sNum1);
    int nNum2 = std::stoi(sNum2);

    printf("%d + %d = %d\n",nNum1, nNum2,
    		(nNum1 + nNum2));

    printf("%d - %d = %d\n",nNum1, nNum2,
        		(nNum1 - nNum2));

    printf("%d * %d = %d\n",nNum1, nNum2,
        		(nNum1 * nNum2));

    printf("%d / %d = %d\n",nNum1, nNum2,
        		(nNum1 / nNum2));


    printf("%d %% %d = %d\n",nNum1, nNum2,
        		(nNum1 % nNum2));



	// 28:00
	return 0;
}
