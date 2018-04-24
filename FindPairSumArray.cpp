#include <iostream>
#include <algorithm>

//Given an unsorted array of integers, find a pair with given sum in it.

void findPair(int arr[], int sum, int size)  // solutie O(n^2)
{
	int i, j;
	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			if (arr[i] + arr[j] == sum && j > i)
				std::cout << "Pair found at index " << i << " and " << j << " (" << arr[i] << " + " << arr[j]<<")"<<std::endl;
		}
}

void findPair_sortedArray(int arr[], int n, int sum) // solutie mai buna O(nlgn)
{
	std::sort(arr, arr + n);
	int low = 0;
	int high = n - 1;

	while (low < high)
	{
		if (arr[low] + arr[high] == sum)
		{
			std::cout << "Pair found at index " << low << " and " << high << " (" << arr[low] << " + " << arr[high] << ")" << std::endl;		
		}

		(arr[low] + arr[high] < sum) ? low++ : high--;
	}
}
int main()
{
	int arr[] = { 8, 7, 2, 5, 3, 1 };
	int sum = 10;
	int size = sizeof(arr) / sizeof(arr[0]); //Nu poti sa calculezi lungimea arrayului in functie, pentru ca sizeof(arr) va returna marimea pointerului trimis in functie si nu marimea intregului array.

	findPair(arr, sum, size);
	std::cout << std::endl;
	findPair_sortedArray(arr, size, sum);

	std::cin.get();
	return (0);
}