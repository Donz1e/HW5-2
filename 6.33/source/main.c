#include <stdio.h>
#include <stdlib.h>

int low = 0, high = 13;
int binarySearch(int a[], int n);

int main(void)
{
	int n, ans;
	int a[11] = { 2,3,4,5,6,7,8,9,10,11,12 };
	
	do
	{
		printf("請輸入欲搜尋的資料(2~12) : ");
		scanf_s("%d", &n);
	} while (n > 12 || n < 2);
	
	binarySearch(a, n);

	while(1)
	{
		printf("請輸入欲搜尋的資料(2~12) : ");
		scanf_s("%d", &n);
		binarySearch(a, n);
	}

	system("pause");
	return 0;
}

int binarySearch(int a[], int n)
{
	int mid = (low + high) / 2;

	if (a[mid] == n)
	{
		printf("在第%d筆資料找到%d\n", mid + 1, n);
	}
	else if (a[mid] > n)
	{
		high = mid - 1;
		binarySearch(a, n);
	}
	else if (a[mid] < n)
	{
		low = mid + 1;
		binarySearch(a, n);
	}
}
