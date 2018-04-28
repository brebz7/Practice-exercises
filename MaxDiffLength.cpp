//You are given two arrays a1 and a2 of strings.Each string is composed with letters from a to z.Let x be any string in the first array and y be any string in the second array.
//
//Find max(abs(length(x) − length(y)))

// Problem from codewars.com
#include <vector>
#include <string>
#include <iostream>
#include <cmath>

class MaxDiffLength
{
public:
	static int mxdiflg(std::vector<std::string> &a1, std::vector<std::string> &a2)
	{
		if (a1.size() == 0 || a2.size() == 0)
			return -1;

		int i;
		int max1 = 0;
		int max2 = 0;
		int min1 = a1[0].size();
		int min2 = a2[0].size();

		for (i = 0; i < a1.size(); i++)
		{
			if (a1[i].size() > max1)
				max1 = a1[i].size();
			if (a1[i].size() < min1)
				min1 = a1[i].size();
		}

		for (i = 0; i < a2.size(); i++)
		{
			if (a2[i].size() > max2)
				max2 = a2[i].size();
			if (a2[i].size() < min2)
				min2 = a2[i].size();
		}

		if (max1 == max2)
		{
			if (min1 < min2)
				return abs(max1 - min1);
			else
				return abs(max1 - min2);
		}
		else if (min1 == min2)
		{
			if (max1 > max2)
				return abs(max1 - min1);
			else
				return abs(max2 - min2);
		}
		else
		{
			if (max1 > max2)
				return abs(max1 - min2);
			else
				return abs(min1 - max2);
		}
	}
};

int main()
{
	std::vector<std::string> s1 = { "ejjjjmmtthh", "zxxuueeg", "aanlljrrrxx", "dqqqaaabbb", "oocccffuucccjjjkkkjyyyeehh" };
	std::vector<std::string> s2 = { "bbbaaayddqbbrrrv" };

	std::cout << MaxDiffLength::mxdiflg(s1, s2) << std::endl;

	system("PAUSE");
	return 0;
}