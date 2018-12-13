#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(void)
{
	int i, a, b, roll[11] = { 0 };

	srand(time(NULL));
	for (i = 1; i <= 36000; i++)
	{
		a = rand() % 6 + 1;
		b = rand() % 6 + 1;
		a = a + b-2;
		roll[a] += 1;
	}

	for (i = 0; i <= 10; i++)
	{
		printf("兩顆骰子加總為%d的次數有 : %d\n", i + 2, roll[i]);
	}

	system("pause");
	return 0;
}