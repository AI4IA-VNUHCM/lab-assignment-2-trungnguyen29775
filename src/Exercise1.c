/*
1. Write a Taxi meter program to calculate the taxi fare for a given mileage.
	a. The 1st 2km is 15,000 VND
	b. The next 250m will cost 2000 VND
	c. If the travel distance is larger than 30km then each extra km will cost only 5000VND
Receive the travel distance in Km and print the amount of money to be paid
______________________________________
| Input: 32.5                        |
| Output: 251500                     |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	float distance = atof(argv[1]);
	int result;
	if (distance <= 2)
		result = 15000;
	else if (distance > 2 && distance <= 30)
		result = 15000 + (((distance - 2) / 0.25) * 2000);
	else if (distance > 30)
		result = 15000 + (28 / 0.25) * 2000 + (distance - 30) * 5000;
	printf("%d", result);
	return 0;
}
