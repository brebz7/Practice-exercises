#include <iostream>
#include <vector>


// Sort binary array

void sort(std::vector<int> &binary)	//trying out vectors. They are passed by value by default!
{
	int i;
	int zero = 0;
	int size = binary.size();

	for (i = 0; i < size; i++)
		if (binary[i] == 0)
			zero++;

	for (i = 0; i < zero; i++)
		binary[i] = 0;

	for (; i < size; i++)
		binary[i] = 1;
}

int main()
{
	std::vector<int> binary{ 0, 1, 1, 0, 1 };

	sort(binary);

	for (int i = 0; i < binary.size(); i++)
	{
		std::cout << binary[i] << std::endl;
	}
	system("PAUSE");
	return 0;
}