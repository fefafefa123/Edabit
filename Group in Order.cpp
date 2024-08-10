#include<iostream>
#include<vector>

std::vector<std::vector<int>> group(std::vector<int> arr, int size) {
	int arrsize = arr.size();
	std::vector<std::vector<int>> res;
	std::vector<int> subarr;
	bool isempty = 0;

	if (arrsize % size != 0 && arrsize % size != 1)
	{
		size --;
	}
	
	for (int i = 0; i < arrsize / size; i++)
	{
		for (int j = i; j < arrsize; j+= arrsize / size)
		{
			subarr.push_back(arr[j]);
		}
		res.push_back(subarr);
		subarr.clear();
	}

	return res;
}

int main()
{
	std::vector<std::vector<int>> group1;
	std::vector<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	int size = 4;

	group1 = group(arr, size);

	for (int i = 0; i < group1.size(); i++)
	{
		for (int j = 0; j < group1[i].size(); j++)
		{
			std::cout << group1[i][j] << " ";
		}
		std::cout << std::endl;
	}
}