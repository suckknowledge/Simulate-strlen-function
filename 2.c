#include<stdio.h>
#include<assert.h>
size_t my_strlen(const char* arr[])//因为长度不可能是负数，所以用无符号整形 ，size_t 表示unsigned int
{
	assert(arr);
	size_t count = 0;
	while (*arr++)
	{
		count++;
	}
	return count;
}
int main()
{
	int a = 0;
	char arr[] = "1233334";
	a = my_strlen(arr);
	printf("%d", a);
	return 0;
}