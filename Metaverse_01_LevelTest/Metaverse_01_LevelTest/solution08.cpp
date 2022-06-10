#include <iostream>

int main()
{

	int arr[5][5] = { 0 };

	int number = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			number++;
			arr[i][j] = number;
			
		}
	}

	// 입력 숫자와 같으면 방향 전환 3번 했으면 -1 , 2번했으면 -1 , 2번 했으면 -1


	// 출력
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << arr[i][j] << "	";
		}
		std::cout << std::endl;
	}


}