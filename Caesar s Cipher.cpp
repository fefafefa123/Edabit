#include<iostream>


std::string caesarCipher(std::string s, int k) {

	std::string res = "";

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] > 'z' || s[i] < 'a' && s[i] > 'Z' || s[i] < 'A')
		{
			res += s[i];
			continue;
		}
		if (islower(s[i]))
		{
			if (s[i] + k > 'z')
			{
				res += 'a' + k - 1 - abs(s[i] - 'z');
				continue;
			}
			res += s[i] + k;
		}
		else
		{
			if (s[i] + k > 'Z')
			{
				res += 'A' + k - 1 - abs(s[i] - 'Z');
				continue;
			}
			res += s[i] + k;
		}
	}
	
	return res;
}

int main()
{
	std::string s = "A friend in need is a friend indeed";
	int k = 20;
	std::cout << caesarCipher(s, k);

	return 0;
}