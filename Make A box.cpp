//Making a Box

#include<iostream>
#include<vector>

std::vector<std::string> makeBox(int n) {
	std::vector<std::string> box;

	for (int i = 0; i < n; i++)
	{
		std::string s = "";
		if (!i)
		{
			for (int j = 0; j < n; j++)
			{
				s += "#";
			}
		}
		else if (i == n - 1)
		{
			for (int j = 0; j < n; j++)
			{
				s += "#";
			}
		}
		else
		{
			s += "#";
			for (int j = 1; j < n - 1; j++)
			{
				s += " ";
			}
			s += "#";
		}
		box.push_back(s);
	}
	return box;
}

int main()
{
	int n = 5;
	std::vector<std::string> box = makeBox(n);
	for (int i = 0; i < box.size(); i++)
	{
		std::cout << box[i] << std::endl;
	}
	return 0;
}