#include<iostream>
#include<vector>

int countSmileys(std::vector<std::string> arr) {
	std::string eyes = ":;";
	std::string nose = "-~";
	std::string mouth = ")D";

	int counter = 0;
	int simillar;

	for (int i = 0; i < arr.size(); i++)
	{
		simillar = 0;
		for (int j = 0; j < arr[i].length(); j++)
		{
			if (arr[i][j] == eyes[0] || arr[i][j] == eyes[1] || arr[i][j] == nose[0] || arr[i][j] == nose[1] || arr[i][j] == mouth[0] || arr[i][j] == mouth[1])
			{
				simillar++;
			}
		}
		if (simillar == arr[i].length())
		{
			counter++;
		}
	}
	return counter;
}


int main()
{
	std::vector<std::string> arr = { ";]", ":[", ";*", ":$", ";-D" };
	std::cout << countSmileys(arr);
	return 0;
}