#include<stdio.h>
#include<assert.h>

//因为长度不可能是负数，所以用无符号整形 ，size_t 表示unsigned int
size_t my_strlen(const char * arr[])//加const提高了代码的健壮性 
{
	assert(arr);//断言函数，这里如果arr为空指针就为假会报错
	int i = 0;
	size_t count = 0;
	while (arr[i] != '\0')
	{
		count++;
		i++;
	}
	return count;
}
int main()
{
	int a = 0;
	char arr[] = "1233334";
	a=my_strlen(arr);
	printf("%d", a);
	return 0;
}

//int main()
//{
//	int a = 0;
//	char arr [] = "123456";
//	printf("%d",strlen(arr));
//
//	return 0;
//}


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