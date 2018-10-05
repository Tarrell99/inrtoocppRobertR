#include<iostream>

int main()
{ 
	char gamePiece = 'X';
	char gamePiece2 = 'O';
	char board[3][3] = { { '| | ', '| | ', '| | ', },{ '| | ', '| | ', '| | ', },{ '| | ', '| | ', '| | ', } };
	int placementNum;
	char placementCha;
	
	std::cout << "This is the Tic Tac Toe Game to play all you need to do is use the number pad as a borad for  player2" << std::endl;
	std::cout << " Player 1 will use 'q,w,e,a,s,d,z,x,c' as the pad " << std::endl;
	std::cout << " If you try to place a piece that all ready has one it will bypass your turn so try not to or it may be game over " << std::endl;
	system("pause");
	system("cls");

	for ( int i = 1; i < 10; i++)
	{
		
		if (i %2 == 0)
		{
			system("cls");
			std::cout << "its " << gamePiece2 << " Turn" << std::endl;
			std::cout << "|" << board[0][0] << "|" << board[0][1] << "|" << board[0][2] << "|" << std::endl;
			std::cout << "|" << board[1][0] << "|" << board[1][1] << "|" << board[1][2] << "|" << std::endl;
			std::cout << "|" << board[2][0] << "|" << board[2][1] << "|" << board[2][2] << "|" << std::endl;
			

			std::cin >> placementNum;

			if (placementNum == 9)
			{
				
				if (board[0][2] == ' ')
				{
					board[0][2] = gamePiece2;
				}
			}
			if (placementNum == 8)
			{
				
				if (board[0][1] == ' ')
				{
					board[0][1] = gamePiece2;
				}
			}
			if (placementNum == 7)
			{
				
				if (board[0][0] == ' ')
				{
					board[0][0] = gamePiece2;
				}
			}
			if (placementNum == 6)
			{
				
				if (board[1][2] == ' ')
				{
					board[1][2] = gamePiece2;
				}
			}
			if (placementNum == 5)
			{
				
				if (board[1][1] == ' ')
				{
					board[1][1] = gamePiece2;
				}
			}
			if (placementNum == 4)
			{
				
				if (board[1][0] == ' ')
				{
					board[1][0] = gamePiece2;
				}
			}
			if (placementNum == 3)
			{
				
				if (board[2][2] == ' ')
				{
					board[2][2] = gamePiece2;
				}
			}
			if (placementNum == 2)
			{
				
				if (board[2][1] == ' ')
				{
					board[2][1] = gamePiece2;
				}
			}
			if (placementNum == 1)
			{
				
				if (board[2][0] == ' ')
				{
					board[2][0] = gamePiece2;
				}
			}
			
			system("cls");
			std::cout << "|" << board[0][0] << "|" << board[0][1] << "|" << board[0][2] << "|" << std::endl;
			std::cout << "|" << board[1][0] << "|" << board[1][1] << "|" << board[1][2] << "|" << std::endl;
			std::cout << "|" << board[2][0] << "|" << board[2][1] << "|" << board[2][2] << "|" << std::endl;
		}


		if (i %2 == 1 )
		{
			
			system("cls");
			std::cout << "its " << gamePiece << " Turn" << std::endl;
			std::cout << "|" << board[0][0] << "|" << board[0][1] << "|" << board[0][2] << "|" << std::endl;
			std::cout << "|" << board[1][0] << "|" << board[1][1] << "|" << board[1][2] << "|" << std::endl;
			std::cout << "|" << board[2][0] << "|" << board[2][1] << "|" << board[2][2] << "|" << std::endl;
			std::cin >> placementCha;

			if (placementCha == 'e' || placementCha == 'E')
			{
				
				if (board[0][2] == ' ')
				{
					board[0][2] = gamePiece;
				}
			}
			if (placementCha == 'w' || placementCha == 'W')
			{
				
				if (board[0][1] == ' ')
				{
					board[0][1] = gamePiece;
				}
			}
			if (placementCha == 'q'|| placementCha == 'Q')
			{
				
				if (board[0][0] == ' ')
				{
					board[0][0] = gamePiece;
				}
			}
			if (placementCha == 'd' || placementCha == 'D')
			{
				
				if (board[1][2] == ' ')
				{
					board[1][2] = gamePiece;
				}
			}
			if (placementCha == 's' || placementCha == 'S')
			{
				
				if (board[1][1] == ' ')
				{
					board[1][1] = gamePiece;
				}
			}
			if (placementCha == 'a' || placementCha == 'A')
			{
				
				if (board[1][0] == ' ')
				{
					board[1][0] = gamePiece;
				}
			}
			if (placementCha == 'c' || placementCha == 'C')
			{
			
				if (board[2][2] == ' ')
				{
					board[2][2] = gamePiece;
				}
			}
			if (placementCha == 'x' || placementCha == 'X')
			{
			
				if (board[2][1] == ' ')
				{
					board[2][1] = gamePiece;
				}
			}
			if (placementCha == 'z' || placementCha == 'Z')
			{
				
				if (board[2][0] == ' ')
				{
					board[2][0] = gamePiece;
				}
			}
		
		}
		system("cls");
		std::cout << "|" << board[0][0] << "|" << board[0][1] << "|" << board[0][2] << "|" << std::endl;
		std::cout << "|" << board[1][0] << "|" << board[1][1] << "|" << board[1][2] << "|" << std::endl;
		std::cout << "|" << board[2][0] << "|" << board[2][1] << "|" << board[2][2] << "|" << std::endl; 
		
		



		// Top row win
			if (board[0][0] == board[0][1] && board[0][2] == board[0][1] && (board[0][1] == gamePiece || board[0][1] == gamePiece2))
			{
				std::cout << board[0][0] << " Won " << std::endl;
				break;
			}
		// Middle row win
			else if (board[1][0] == board[1][1] && board[1][2] == board[1][1] && (board[1][1] == gamePiece || board[1][1] == gamePiece2))
			{
				std::cout << board[1][0] << " Won " << std::endl;
				break;
			}
		// bottion row win
			else if (board[2][0] == board[2][1] && board[2][2] == board[2][1] && (board[2][1] == gamePiece || board[2][1] == gamePiece2))
			{
				std::cout << board[2][0] << " Won " << std::endl;
				break;
			}
		// Middle collom win
			else if (board[0][1] == board[1][1] && board[2][1] == board[1][1] && (board[1][1] == gamePiece || board[1][1] == gamePiece2))
			{
				std::cout << board[0][1] << " Won " << std::endl;
				break;
			}
		// Right collom win
			else if (board[0][2] == board[1][2] && board[2][2] == board[1][2] && (board[1][2] == gamePiece || board[1][2] == gamePiece2))
			{
				std::cout << board[0][2] << " Won " << std::endl;
				break;
			}
		// left \ win
			else if (board[0][0] == board[1][1] && board[2][2] == board[1][1] && (board[1][1] == gamePiece || board[1][1] == gamePiece2))
			{
				std::cout << board[0][0] << " Won " << std::endl;
				break;
			}
		// left collom win
			else if (board[0][0] == board[1][0] && board[2][0] == board[1][0] && (board[1][0] == gamePiece || board[1][0] == gamePiece2))
			{
				std::cout << board[0][0] << " Won " << std::endl;
				break;
			}
		// Right / win 
			else if (board[0][2] == board[1][1] && board[2][0] == board[1][1] && (board[1][1] == gamePiece || board[1][1] == gamePiece2))
			{
				std::cout << board[0][2] << " Won " << std::endl;
				break;
			}

	}
	std::cout << "Game Over";
	system("pause"); 
}