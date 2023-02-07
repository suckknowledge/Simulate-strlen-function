#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	//打印偶数位
	for (i = 31;i >= 1; i-=2)
	{
		printf("%d",(n >>i) & 1);
	}
	printf("\n");
	//打印奇数位
	for (i = 30;i >= 0; i-=2)
	{
		printf("%d", (n >> i) & 1);
	}
	return 0;
}


//void my_strlen(char arr[])
//{
//	int i = 0;
//	int count = 0;
//	while (arr[i] != '\0')
//	{
//		count++;
//		i++;
//	}
//	printf("%d",count);
//}
