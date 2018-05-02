#include <iostream>

int partition(int arr[], int low, int high) // ordoneaza numerele raportat la un pivot. Numerele mai mici sunt puse in stanga pivotului, iar cele mai mari in dreapta (nu le pune sortat)
{
	int i, j;
	int pivot;
	int temp = 0;
	i = (low - 1);
	pivot = arr[high];

	for (j = low; j < high; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
		}
	}
	temp = arr[high];
	arr[high] = arr[i + 1];
	arr[i + 1] = temp;

	return i + 1;
}

void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

int main()
{
	int arr[] = { 10, 80, 30, 90, 40, 50, 70 };
	int high = sizeof(arr) / sizeof(arr[0]);
	high--;
	quickSort(arr, 0, high);

	for (int i = 0; i < high + 1; i++)
	{
		std::cout << arr[i] << std::endl;
	}
	system("PAUSE");
	return 0;
}