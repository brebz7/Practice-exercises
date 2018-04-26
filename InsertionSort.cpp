#include <iostream>

void insertionSort(int arr[], int size)	// O(n^2) (in-space) sorting algorithm.
{
	int i, j;
	int temp = 0;
	for (j = 1; j < size; j++)
	{
		for (i = j; i > 0; i--)
		{
			if (arr[i] < arr[i - 1])
			{
				temp = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = temp;
			}
		}
	}
}

int main()
{
	int arr[] = { 94298, 539291, 634212, 146908, 821049, 942465, 931716, 882407, 93636, 737832, 370757, 657972, 2001, 532304, 525419, 787692, 817130, 506767, 137832, 618594, 881415, 82861, 573282, 421021, 425645, 525108, 616190, 819664, 399122, 734004, 415812, 72775, 552691, 830067, 508985, 974502 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int i = 0;

	insertionSort(arr, n);
	for (i = 0; i < n; i++)
		std::cout << arr[i] << std::endl;

	std::cin.get();
	return 0;
}