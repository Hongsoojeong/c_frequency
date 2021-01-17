#include <stdio.h>
#include <stdlib.h>
int main() {
	
	int frequency[1000] = {};
	int number;
	for (int i = 0; i <= 999; i++)
	{
	
		number = ((rand() % 20) + 1);
		frequency[number] += 1;
	}
	for (int i = 0; i <= 19; i++)
	{
		printf("%d >>>> ", i + 1);
		printf("%d", frequency[number]);
		printf("\n");
	}
	return 0;
}