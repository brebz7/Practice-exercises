#include <iostream>

//Given an array of integers, check if array contains a sub-array (a slice from the array which is contiguous) having sum 0.

int subarray_zero(int arr[], int size) 
{
	int count = 0;
	int sum;
	int i, j;

	for (j = 0; j < size; j++)
	{ 
		sum = 0;
		for (i = j; i < size; i++)
		{
			sum += arr[i];
			if (sum == 0)
				count++;
		}
	}	
	return count;	// returns the number of sub arrays found in the array
}

// for a better solution (O(n)) check http://www.techiedelight.com/difference-between-subarray-subsequence-subset/. They are using hashing. Atm I dont know how to use that concept.

int main()
{
	int arr[] = {3, 4, -7, 3, 1, 3, 1, -4, -2, -2};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	std::cout << subarray_zero(arr, n);

	std::cin.get();
	return 0;
}