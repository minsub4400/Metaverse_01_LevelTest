//#include <iostream>
//#include <time.h>
//#include <string>
//int main()
//{
//	srand(time(NULL));
//
//	// �Է�
//	// ��, ��, ��, �� ������ A ~ 10, J, Q, K, Joker ī��
//	std::string Card1[14] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "Joker"};
//	std::string Card2[4] = {"��", "��", "��", "��"};
//
//	std::string player1[7] = { "0" };
//	std::string player1_pattern[7] = { "0" };
//
//	std::string player2[7] = { "0" };
//	std::string player2_pattern[7] = { "0" };
//
//	// ó��
//	// �÷��̾� 1
//	for (int i = 0; i < 7; i++) // 7���� ī�带 �̾ƾ� �ϴϱ� 7�� ����
//	{
//		int numberCard = rand() % 14; // ���� ī�忡�� �������� ����
//		player1[i] = Card1[numberCard];
//
//		int patternCard = rand() % 4; // ��� ī�忡�� �������� ����
//		player1_pattern[i] = Card2[patternCard];
//
//		if (player1[i] == "0") // ���� ó��
//			{
//				return 0;
//			}
//
//		// �ڽ��� ī�� �ߺ� ���� ó��
//		while (player1[i] == player1[i + 1])
//		{
//			if (player1_pattern[i] == player1_pattern[i + 1])
//			{
//				int numberCard = rand() % 14;
//				player1[i] = Card1[numberCard];
//				int patternCard = rand() % 4;
//				player1_pattern[i] = Card2[patternCard];
//			}
//		}
//	}
//
//	// �÷��̾�2
//	for (int i = 0; i < 7; i++) // 7���� ī�带 �̾ƾ� �ϴϱ� 7�� ����
//	{
//		int numberCard = rand() % 14; // ���� ī�忡�� �������� ����
//		player2[i] = Card1[numberCard];
//
//		int patternCard = rand() % 4; // ��� ī�忡�� �������� ����
//		player2_pattern[i] = Card2[patternCard];
//
//		if (player2[i] == "0") // ���� ó��
//		{
//			return 0;
//		}
//
//		// �ڽ��� ī�� �ߺ� ���� ó��
//		while (player2[i] == player2[i + 1])
//		{
//			if (player2_pattern[i] == player2_pattern[i + 1])
//			{
//				int numberCard = rand() % 14;
//				player2[i] = Card1[numberCard];
//				int patternCard = rand() % 4;
//				player2_pattern[i] = Card2[patternCard];
//			}
//		}
//	}
//
//	
//	// ���� ī�忡�� �ߺ� ����
//
//	// ���
//
//	std::cout << "Player1 : ";
//	for (int i = 0; i < 7; i++) // 7���� ī�带 �̾ƾ� �ϴϱ� 7�� ����
//	{
//		if (player1[i] != "Joker")
//		{
//			std::cout << player1_pattern[i] << "";
//		}
//		std::cout << player1[i] << " ";
//	}
//
//	std::cout << std::endl;
//
//	std::cout << "Player2 : ";
//	for (int i = 0; i < 7; i++)
//	{
//		if (player2[i] != "Joker")
//		{
//			std::cout <<  player2_pattern[i] << "";
//		}
//		std::cout << player2[i] << " ";
//	}
//}	