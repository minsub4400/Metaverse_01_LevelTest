//#include <iostream>
//#include <time.h>
//
//int main()
//{
//	srand(time(NULL));
//
//	// �Է�
//	// �ִ� ��ȣ �� : 
//	int maxNumber;
//	std::cin >> maxNumber;
//	// ���� ���� ���� :
//	int countNumber;
//	std::cin >> countNumber;
//
//	// ó��
//	int numArr[1000] = { 0 };
//	for (int i = 0; i < countNumber; i++)
//	{
//		int randNumber = rand() % maxNumber + 1;
//		numArr[i] = randNumber; // �������� ���� ���ڸ� �迭�� ������� �ִ´�.
//	}
//	// �ߺ� ���� �ʾƾ� �Ѵ�
//	// 1, 2 - 1, 3�� ���ؼ� ������ �ѹ� �� ����
//	// ���� ���Ϸ��� �迭�� ���� �־�� ��
//	for (int i = 0; i < countNumber; i++)
//	{
//		for (int j = i + 1; j < countNumber; j++)
//		{
//			if (numArr[j] == 0)
//			{
//				return 0;
//			}
//			while (numArr[i] == numArr[j]) // ���� ������ ��� �ݺ��ؼ� ��������
//			{
//				int randNumber = rand() % maxNumber + 1;
//				numArr[i] = randNumber;
//				i = 0; //i�� 0���� �ʱ�ȭ �ؼ� ó������ �ٽ� ��
//				j = i + 1;
//			} // ���� ������ �پ�� �ȳ����µ�, ���������� ���� �� ����
//		}
//	}
//	
//	// ���
//	for (int i = 0; i < countNumber; i++)
//	{
//		std::cout << numArr[i] << " ";
//	}
//
//}