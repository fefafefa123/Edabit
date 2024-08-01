#include<iostream>
#include<vector>

std::vector<std::vector<int>> transposeMatrix(std::vector<std::vector<int>> arr) {
	std::vector<std::vector<int>> result;
	std::vector<int> temp;
	int count = 0;
	for (int i = 0; i < arr[count].size(); i++)
	{
		for (int j = 0; j < arr.size(); j++)
		{
			temp.push_back(arr[j][i]);
		}
		result.push_back(temp);
		temp.clear();
	}
	return result;
}

int main()
{
	std::vector<std::vector<int>> arr = { {1,2,3},{1,2,3},{1,2,3} };

	arr = transposeMatrix(arr);
	std::cout << "Completed";
	return 0;
}