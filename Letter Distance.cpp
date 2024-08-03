#include<iostream>
#include<cmath>

int letterDistance(std::string str1, std::string str2) {
	int sum = 0;

	//std::string alph = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int size = std::min(str1.length(), str2.length());

	for (int i = 0; i < size; i++)
	{
		if (str1[i] != str2[i])
		{
			//sum += abs(int(alph.find(str1[i]) - alph.find(str2[i])));
			sum += abs((int)str1[i] - (int)str2[i]);
		}
	}
	return sum;
}

int main()
{
	std::string str1 = "abcde";
	std::string str2 = "Abcde";
	std::cout << letterDistance(str1, str2);
	return 0;
}