#include <iostream>
#include "quick_sort.h"


void swap(int& i, int& j)
{
	int temp = i;
	i = j;
	j = temp;
}

void quick_sort(int* arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "size = " << size << std::endl;

	if (size < 3) 
		return;

	int i = 0;
	int j = size - 1;
	int pivot = arr[size / 2];

	while (i < j)
	{
		while (arr[i] < pivot)
		{
			++i;
		}

		while (arr[j] > pivot)
		{
			--j;
		}

		swap(arr[i], arr[j]);
//		++i;
//		--j;
	}

/*	if (arr[i] > pivot)
	{
		swap(arr[i], arr[size / 2]);
	}
*/
	
	int left_size = i + 1;
//	int right_size = size - left_size;
	int right_size = size - i;

	quick_sort(arr, left_size);
	quick_sort(&arr[i], right_size);
}
