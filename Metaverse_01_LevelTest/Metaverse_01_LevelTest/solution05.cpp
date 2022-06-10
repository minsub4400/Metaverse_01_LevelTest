//#include <iostream>
//#include <time.h>
//
//int main()
//{
//	srand(time(NULL));
//
//	// 입력
//	// 최대 번호 값 : 
//	int maxNumber;
//	std::cin >> maxNumber;
//	// 생성 숫자 갯수 :
//	int countNumber;
//	std::cin >> countNumber;
//
//	// 처리
//	int numArr[1000] = { 0 };
//	for (int i = 0; i < countNumber; i++)
//	{
//		int randNumber = rand() % maxNumber + 1;
//		numArr[i] = randNumber; // 랜덤으로 나온 숫자를 배열에 순서대로 넣는다.
//	}
//	// 중복 되지 않아야 한다
//	// 1, 2 - 1, 3를 비교해서 같으면 한번 더 돌림
//	// 값을 비교하려면 배열에 값을 넣어야 함
//	for (int i = 0; i < countNumber; i++)
//	{
//		for (int j = i + 1; j < countNumber; j++)
//		{
//			if (numArr[j] == 0)
//			{
//				return 0;
//			}
//			while (numArr[i] == numArr[j]) // 값이 같으면 계속 반복해서 랜덤생성
//			{
//				int randNumber = rand() % maxNumber + 1;
//				numArr[i] = randNumber;
//				i = 0; //i를 0으로 초기화 해서 처음부터 다시 비교
//				j = i + 1;
//			} // 현재 문제가 붙어서는 안나오는데, 떨어져서는 나올 수 있음
//		}
//	}
//	
//	// 출력
//	for (int i = 0; i < countNumber; i++)
//	{
//		std::cout << numArr[i] << " ";
//	}
//
//}