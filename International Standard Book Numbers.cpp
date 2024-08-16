#include<iostream>

int ASCII(char a)
{
	if (a == 88 || a == 120)
	{
		return 10;
	}
	for (int i = 48; i <= 57; i++)
	{
		if (i == a)
		{
			return i;
		}
	}
}


std::string isbn13(std::string str) {
	std::string Valid = "Valid";
	std::string Invalid = "Invalid";
	
	if (str.length() != 10 && str.length() != 13)
	{
		return Invalid;
	}
	
	std::string ISBNumber = "978";
	std::string temp = "";
	bool isvalid = false;
	short int sum = 0;


	for (int i = 0; i < 3; i++)
	{
		temp.push_back(str[i]);
	}
	if (temp != ISBNumber)
	{
		for (int i = 0; i < str.size(); i++)
		{
			sum += ASCII(str[i]) * (10 - i);
		}
			
		if (sum % 11 == 0)
		{
			temp = ISBNumber + str;
			while (!isvalid)
			{
				sum = 0;
				for (int i = 0; i < temp.size(); i++)
				{
					if (i % 2 == 0 || i == 0)
					{
						sum += ASCII(temp[i]);
					}
					else
					{
						sum += ASCII(temp[i]) * 3;
					}
				}

				if (sum % 10 == 0)
				{
					isvalid = true;
					return temp;
				}

				short int newnumber = abs(ASCII(temp[temp.length() - 1]) - 1);
				temp.pop_back();
				temp.push_back(newnumber);

			}
		}
		else
		{
			return Invalid;
		}
	}
	else 
	{
		while (!isvalid)
		{
			sum = 0;
			for (int i = 0; i < str.size(); i++)
			{
				if (i % 2 == 0 || i == 0)
				{
					sum += ASCII(str[i]);
				}
				else
				{
					sum += ASCII(str[i]) * 3;
				}
			}

			if (sum % 10 == 0)
			{
				isvalid = true;
				return Valid;
			}

			short int newnumber = abs(ASCII(str[str.length() - 1]) - 1);
			str.pop_back();
			str.push_back(newnumber);

		}
	}
}

int main()
{
	std::string str = "0316066524";
	std::cout << isbn13(str);

	return 0;
}