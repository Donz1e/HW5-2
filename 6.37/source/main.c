#include <stdio.h>
#include<stdlib.h>

int x = 0, max = 0;
void recursiveMaximum(const int a[], int size);

int main(void)
{
	int a[100], size, i;

	printf("��J�}�C�j�p : ");
	scanf_s("%d", &size);

	printf("��J%d�Ӿ�� : ", size);
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
		printf("�}�C������%d�Ӧ�m���̤j��%d\n", x, max);
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