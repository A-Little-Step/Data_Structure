#pragma once

#include <assert.h>

//����ұ�ʽ
int BinarySearch(int *Array, int x,size_t size)
{
	assert(Array);
	int left = 0;
	int right = size - 1;
	
	while (left <= right)
	{
		int mid = left + (right - left) / 2;  
		//û��д��mid = (left + right) / 2��Ϊ�˷�ֹ�������
		if (x < Array[mid])
		{
			right = mid - 1;
		}
		else if (x > Array[mid])
		{
			left = mid + 1;
		}
		else
		{
			return Array[mid];
		}
	}
	return -1;   //���� -1 ��ʾû���ҵ�
}

//����ҿ�ʽ
int BinarySearch(int *Array, int x, size_t size)
{
	assert(Array);

	int left = 0;
	int right = size;

	while (left < right)
	{
		int mid = left + (right - left) / 2;   
		//û��д��mid = (left + right) / 2��Ϊ�˷�ֹ�������
		if (x < Array[mid])
		{
			right = mid;
		}
		else if (x > Array[mid])
		{
			left = mid + 1;
		}
		else
		{
			return Array[mid];
		}
	}
	return -1;   //���� -1 ��ʾû���ҵ�
}