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

	// �Է� ���ڿ� ������ ���� ��ȯ 3�� ������ -1 , 2�������� -1 , 2�� ������ -1


	// ���
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << arr[i][j] << "	";
		}
		std::cout << std::endl;
	}


}