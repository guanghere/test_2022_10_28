#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��2~��i-1��֮�������Գ�i
//1.���i����������˵��i��������
//2.���2~��i-1��֮������ֶ���������i��˵��i������

//int main(){
//
//	int i = 0;
//	for (i = 100; i <= 200; i++){
//
//		int flag = 1;//����i������
//		//�ж�i�Ƿ�Ϊ����
//		int j = 0;
//		for (j = 2; j < i; j++){
//
//			if (i % j == 0){
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1){
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;//��ĸ
//	double j = 0;//����
//	int num = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		j += num* (1.0 / i);
//		num = -num;
//	}
//	printf("%lf ", j);
//	return 0;
//}


//int main()
//{
//	int arr[10] = {0};
//	for (int j = 0; j < 10; j++)
//	{
//		scanf("%d", &arr[j]);
//	}
//	//����10��
//
//	int i = 0;
//	int max = 1;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max);
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d ", max);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr1[10] = "1,2,3,4";
//	char arr2[20] = { 0 };
//
//	strcpy(arr2, arr1);
//	printf("%s ", arr2);
//
//	return 0;
//}

#include<string.h>
int main()
{
	char arr[20] = "abc bdc dac";
	memset(arr, '*', 7);
	printf("%s", arr);
	return 0;
}