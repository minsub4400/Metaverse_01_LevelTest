//#include <iostream>
//#include <time.h>
//#include <string>
//int main()
//{
//	srand(time(NULL));
//
//	// 입력
//	// ♠, ♣, ♥, ◆ 문양의 A ~ 10, J, Q, K, Joker 카드
//	std::string Card1[14] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "Joker"};
//	std::string Card2[4] = {"◆", "♠", "♣", "♥"};
//
//	std::string player1[7] = { "0" };
//	std::string player1_pattern[7] = { "0" };
//
//	std::string player2[7] = { "0" };
//	std::string player2_pattern[7] = { "0" };
//
//	// 처리
//	// 플레이어 1
//	for (int i = 0; i < 7; i++) // 7장의 카드를 뽑아야 하니까 7번 돌림
//	{
//		int numberCard = rand() % 14; // 숫자 카드에서 랜덤으로 뽑음
//		player1[i] = Card1[numberCard];
//
//		int patternCard = rand() % 4; // 모양 카드에서 랜덤으로 뽑음
//		player1_pattern[i] = Card2[patternCard];
//
//		if (player1[i] == "0") // 예외 처리
//			{
//				return 0;
//			}
//
//		// 자신의 카드 중복 제거 처리
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
//	// 플레이어2
//	for (int i = 0; i < 7; i++) // 7장의 카드를 뽑아야 하니까 7번 돌림
//	{
//		int numberCard = rand() % 14; // 숫자 카드에서 랜덤으로 뽑음
//		player2[i] = Card1[numberCard];
//
//		int patternCard = rand() % 4; // 모양 카드에서 랜덤으로 뽑음
//		player2_pattern[i] = Card2[patternCard];
//
//		if (player2[i] == "0") // 예외 처리
//		{
//			return 0;
//		}
//
//		// 자신의 카드 중복 제거 처리
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
//	// 상대상 카드에서 중복 제거
//
//	// 출력
//
//	std::cout << "Player1 : ";
//	for (int i = 0; i < 7; i++) // 7장의 카드를 뽑아야 하니까 7번 돌림
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