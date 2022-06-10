//#include <iostream>
//#include <time.h>
//
//int main()
//{
//	srand(time(NULL));
//
//	int bingoArr[5][5] = { 0 };
//	int overlap = 0;
//	// ют╥б
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			int randNumber = rand() % 25 + 1; // 3
//			while (overlap == randNumber) // 3 : 3
//			{
//				randNumber = rand() % 25 + 1;
//			}
//			bingoArr[i][j] = randNumber;
//
//			overlap = randNumber;
//		}
//	}
//
//
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			std::cout << bingoArr[i][j] << "	";
//		}
//		std::cout << std::endl;
//	}
//	
//
//
//}