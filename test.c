#include<stdio.h>
#include<assert.h>

//��Ϊ���Ȳ������Ǹ������������޷������� ��size_t ��ʾunsigned int
size_t my_strlen(const char * arr[])//��const����˴���Ľ�׳�� 
{
	assert(arr);//���Ժ������������arrΪ��ָ���Ϊ�ٻᱨ��
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