#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//https://www.hackerrank.com/challenges/variable-sized-arrays/problem

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n, q, size, element;
	int vecPos, elementPos;
	int i;
	vector<vector<int>> vecOfVec;

	cin >> n >> q;
	for (i = 0; i < n; i++)
	{
		vector<int> elementVector;

		cin >> size;
		for (int k = 0; k < size; k++)
		{
			cin >> element;
			elementVector.push_back(element);
		}
		vecOfVec.push_back(elementVector);
	}
	
	for (i = 0; i < q; i++)
	{
		cin >> vecPos >> elementPos;
		cout << vecOfVec[vecPos][elementPos];
	}
	return 0;
}
