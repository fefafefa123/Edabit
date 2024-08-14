#include <iostream>
#include<vector>

std::string ticTacToe(std::vector<std::vector<char>> inputs) {
	
	short int winner = 0;
	char P1 = 'X';
	char P2 = 'O';
	char Empty = '#';
	std::string temp = "";

	for (int i = 0; i < inputs.size(); i++)
	{
		for (int j = 0; j < inputs[i].size(); j++)
		{
			if (inputs[i][j] != Empty)
			{
				temp.clear();
				temp.push_back(inputs[i][0]);
				temp.push_back(inputs[i][1]);
				temp.push_back(inputs[i][2]);
				if (temp == "XXX")
				{
					winner = 1;
					break;
				}
				else if (temp == "OOO")
				{
					winner = 2;
					break;
				}
				temp.clear();
				temp.push_back(inputs[0][0]);
				temp.push_back(inputs[1][1]);
				temp.push_back(inputs[2][2]);
				if (temp == "XXX")
				{
					winner = 1;
					break;
				}
				else if (temp == "OOO")
				{
					winner = 2;
					break;
				}
				temp.clear();
				temp.push_back(inputs[0][2]);
				temp.push_back(inputs[1][1]);
				temp.push_back(inputs[2][0]);
				if (temp == "XXX")
				{
					winner = 1;
					break;
				}
				else if (temp == "OOO")
				{
					winner = 2;
					break;
				}
				temp.clear();
				temp.push_back(inputs[0][j]);
				temp.push_back(inputs[1][j]);
				temp.push_back(inputs[2][j]);
				if (temp == "XXX")
				{
					winner = 1;
					break;
				}
				else if (temp == "OOO")
				{
					winner = 2;
					break;
				}
			}
		}
		if (winner)
		{
			break;
		}
	}

	switch (winner)
	{
	case 1:
		return "Player 1 is winner";
	case 2:
		return "Player 2 is winner";
	default:
		return "Tie";
	}
}

int main()
{
	//setlocale(LC_ALL, "En");
	std::vector<char> line1 = { 'O', 'X', 'O'};
	std::vector<char> line2 = { 'O', 'X', 'O'};
	std::vector<char> line3 = {'X', 'O', 'X'};

	std::vector<std::vector<char>> inputs = { line1,line2,line3 };

	std::cout << ticTacToe(inputs);
	return 0;
}