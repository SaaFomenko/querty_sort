#include <iostream>
#include "quick_sort.h"


void quick_sort(int* arr, int size)
{
	if (size != 1)
	{
    int left = 0;
		int right = size;
		int i = left;
		int j = right;
  
		int pivot =	arr[size / 2];
  
		while (i <= j) {
  
			while (arr[i] < pivot) ++i;
			while (arr[j] > pivot) --j;
  
			if (i <= j)
			{
				if (arr[i] > arr[j])
				{
					int tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
				}
  
				++i;
				--j;
			}
		};
  
			std::cout << "pi sub_arr[" << (size / 2) << "] = " << arr[size / 2] << std::endl;
			std::cout << "right sub_arr[" << j << "] = " << arr[j] << std::endl;
			std::cout << "left sub_arr[" << i << "] = " << arr[i] << std::endl;
  
		if (left < j)
		{
			quick_sort(arr, j);
		}
		if (i < right)
		{
			quick_sort(&arr[i], right);
		}
	}
}
