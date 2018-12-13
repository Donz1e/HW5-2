#include <stdio.h>
#include<stdlib.h>

int x = 0, max = 0;
void recursiveMaximum(const int a[], int size);

int main(void)
{
	int a[100], size, i;

	printf("輸入陣列大小 : ");
	scanf_s("%d", &size);

	printf("輸入%d個整數 : ", size);
	for (i = 0; i < size; i++)
		scanf_s("%d", &a[i]);
 
	recursiveMaximum(a, size);

	system("pause");
	return 0;
}

void recursiveMaximum(const int a[], int size)
{
	if (size == 0)
	{
		printf("陣列中的第%d個位置為最大值%d\n", x, max);
	}
	else
	{
		if (a[size - 1] > max)
		{
			max = a[size - 1];
			x = size;
		}
		recursiveMaximum(a, size - 1);
	}
}