#include <iostream>
#include "quick_sort.h"
// #include "./lib/rand_of_range/rand_of_range.h"


int pivoting(int* arr, int size, int pi)
{
	int left = 0;
	int right = size - 1;
	int pivot = arr[pi];

	while (true)
	{
		while (arr[left] < pivot)
		{
			++left;
		}
		while (arr[right] > pivot)
		{
			--right;
		}

		if (left >= right)
		{
			return left;
		}

		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		++left;
		--right;
	}
}

void quick_sort(int* arr, int size)
{
	if (size == 1)
	{
		return;
	}
//		int pi = rand_of_range(0, size - 1);
		int pi = size / 2;
		int border = pivoting(arr, size, pi);

/*		std::cout << "border arr[" << border << "] = " << arr[border] << std::endl;
		for (int i = 0; i < size; ++i)
		{
			std::cout << arr[i] << " "; 
		}
		std::cout << std::endl; 
*/
		if (size == 2 && arr[0] <= arr[border])
		{
			return;
		}

		quick_sort(arr, border + 1);
		quick_sort(&arr[border], size - border);
}
