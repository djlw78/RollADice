#include <iostream>
#include "time.h"

int main(int argc, const char * argv[]) {

	srand((unsigned)time(NULL));

	//number of times to loop
	int times;

	//asigning all values to zero
	int coolz[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; // In future update for loop is more effective for this.

	//max min for dice sies
	int max = 6, min = 1;

	std::cout << "Enter number of times to roll" << std::endl;
	std::cin >> times; std::cout << std::endl;

	//master loop
	for (int a = 0; a < times; a++) {

		int result = rand() % ((max + 1) + min) + rand() % ((max + 1) + min);
	   //roll dice x times totals it up
		coolz[result - 2]++;

	}

	//Results
	for (int b = 0; b < 11; b++)
	{

		std::cout << "You got this many " << b + 2 << "'s : " << coolz[b] << std::endl;
	}
	
	system("PAUSE"); //Not supported on mac
	return 0;
}