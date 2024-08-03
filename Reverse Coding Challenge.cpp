#include<iostream>

std::string mysteryFunc(std::string s) {
	std::string res = "";
	std::string num = "0123456789";
	for (int i = 1; i < s.length(); i+=2)
	{
		for (int j = 0; j < num.find(s[i]); j++)
		{
			res.push_back(s[i - 1]);
		}
	}
	return res;

}

int main()
{
	std::string s = "A1B2C3D4";
	std::cout << mysteryFunc(s);

	return 0;
}