#include <stdio.h>
#include <stdlib.h>
//int  Find_min_subsequence(int a[], int left, int right);
int Max3(int a, int b, int c);
int find_the_primary_element(int *a, int length);

int main()
{
	int a[10] = { -1,2,3,5,6,-5,3,-11,-8,7 };
	//给出数组的最小子序列和
	//printf("%d",Find_min_subsequence(a, 0, 9));
	//给出数组的主要元素
	int b[10] = { 2,3,4,2,2,2,7,7,2,2 };
	printf("%d", find_the_primary_element(b, 10));
	return 0;
}

/*
{//求最小子序列和
	int Find_min_subsequence(int a[], int left, int right)
	{
		int minleftsum, minrightsum;
		int minleftbordersum, minrightbordersum;
		int leftbordersum, rightbordersum;
		int center, i;
		if (left == right)//基准情况
			return a[left];
		center = (left + right) / 2;
		minleftsum = Find_min_subsequence(a, left, center);
		minrightsum = Find_min_subsequence(a, center + 1, right);
		minleftbordersum = minrightbordersum = leftbordersum = rightbordersum = 0;
		for (i = center; i >= left; i--)
		{
			leftbordersum += a[i];
			if (minleftbordersum > leftbordersum)
				minleftbordersum = leftbordersum;
		}
		for (i = center + 1; i <= right; i++)
		{
			rightbordersum += a[i];
			if (minrightbordersum > rightbordersum)
				minrightbordersum = rightbordersum;
		}
		return Max3(minleftsum, minrightsum, minleftbordersum + minrightbordersum);
	}
	int Max3(int a, int b, int c)//返回三个数中最小值
	{
		return a < b ? a < c ? a : c : b < c ? b : c;
	}
}
*/

int find_the_primary_element(int *a, int length)
{
	int *b;
	b = (int*)malloc(length * sizeof(int));
	if (length == 2)
	{
		printf("没有主元素！");
		return 0;
	}
	if (length == 1)
	{
		printf("主元素为%d", a[0]);
		return 0;
	}
	int i = 0; int j = 0;
	for (; i < length; i += 2, j + 1)
	{
		if (a[i] == a[i + 1])
			b[j] = a[i];
		return 0;

	}
	find_the_primary_element(b, j);
	return 0;
}