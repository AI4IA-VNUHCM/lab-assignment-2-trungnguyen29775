/*
3. Write a function to represent a given integer as product of prime numbers
Ex:
______________________________________
| Input: 24                          |
| Output: 2 * 2 * 2 * 3              |
|____________________________________|
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	int a[1000];
	int dem = 0;
	int kt = 0;
	for (int i = 2; i <= testcase - 1; i++)
		if (testcase % i == 0)
			kt = 1;
	if (kt == 0)
		printf("%d", testcase);
	if (kt == 1)
	{
		for (int i = 2; i <= testcase - 1; i++)
		{
			if (i == 2)
			{
				a[dem] = i;
				dem += 1;
			}
			else
			{
				int kt2 = 0;
				for (int j = 2; j <= i - 1; j++)
					if (i % j == 0)
						kt2 = 1;
				if (kt2 == 0)
				{
					dem += 1;
					a[dem] = i;
				}
			}
		}
		int i = 0;
		while (testcase != 1)
		{
			if (testcase == a[i])
			{
				testcase = 1;
				printf("%d", a[i]);
			}
			else if (testcase % a[i] == 0)
			{
				testcase /= a[i];
				printf("%d * ", a[i]);
			}
			else if (testcase % a[i] != 0)
				i += 1;
		}
	}
	return 0;
}
