#include <iostream>
#include "../quick_sort.h"


int main()
{
	const std::string in_arr = "Исходний массив: ";
	const std::string out_arr = "Отсортированный массив: ";

	int arr[] = { 3, 43, 38, 29, 18, 72, 57, 61, 2, 33 };
	int size = sizeof(arr) / sizeof(arr[0]);

	std::cout << in_arr << "size = " << size << std::endl;

	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;

	quick_sort(arr, size);

	std::cout << out_arr << std::endl;

	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;

	return 0;
}
