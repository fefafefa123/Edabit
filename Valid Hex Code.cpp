#include<iostream>

bool isValidHexCode(std::string str) {
	int size = str.length();
	if (size != 7)
	{
		return 0;
	}
	if (str[0] != '#')
	{
		return 0;
	}

	std::string alphUp = "ABCDEF";
	std::string alphLow = "abcdef";
	
	int count = 0;
	for (int i = 1; i < size; i++)
	{
		for (int j = 0; j < size-1; j++)
		{
			if (str[i] == alphLow[j] || str[i] == alphUp[j])
			{
				count++;
				break;
			}
		}
	}
	
	if (count != size-1)
	{
		return 0;
	}

	return 1;
}

int main()
{
	std::string str = "#CD1CaC";
	std::cout << isValidHexCode(str);
	return 0;
}