#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int findnum(int a[][3], int x, int y, int f) 
//{
//	int i = 0, j = x - 1; 
//
//	while (j >= 0 && i < y)
//	{
//		if (a[i][j] < f) 
//			i++; 
//		else if (a[i][j] > f)
//			j--;
//		else
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int a[][3] = { {1, 3, 5},
//				   {3, 5, 7},
//				   {5, 7, 9} }; 
//
//	if (findnum(a, 3, 3, 2))
//	{
//		printf("It has been found!\n");
//	}
//	else
//	{
//		printf("It hasn't been found!\n");
//	}
//
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int findRound(const char* src, char* find)
//{
//	char tmp[256] = { 0 }; 
//	strcpy(tmp, src); 
//	strcat(tmp, src); 
//	return strstr(tmp, find) != NULL; 
//}
//int main()
//{
//	char arr[] = "ABCDEF";
//	char arr2[] = "BCDEFA";
//	int result = findRound(arr, arr2);
//	if (result == 1)
//	{
//		printf("YES!");
//	}
//	else
//	{
//		printf("NO!");
//	}
//	return 0;
//}
//#include<stdio.h>
//void choose(char* arr)
//{
//	int i;
//	int temp = arr[0];
//	for (i = 0; i < 3; i++)
//	{
//		arr[i] = arr[i + 1];
//	}
//	arr[3] = temp;
//}
//int main()
//{
//	int k;
//	scanf("%d", &k);
//	char arr[] = "ABCD";
//	for (int i = 0; i < k; i++)
//	{
//		choose(arr);
//	}
//	printf("%s", arr);
//	return 0;
//}