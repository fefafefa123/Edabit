#include<iostream>


bool firstBeforeSecond(std::string str, std::string first, std::string second) {
	if (str.find(first) < str.find(second) && str.find_last_of(first) < str.find(second))
	{
		return 1;
	}
	return 0;
}

int main()
{
	std::string str = "happy birthday";
	std::string first = "a";
	std::string second = "y";
	std::cout << firstBeforeSecond(str, first, second);

	return 0;
}