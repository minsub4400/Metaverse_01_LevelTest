//#include <iostream>
//
//void sortArray(int* arr, int n)
//{
//	// 임의 변수에 값 하나를 저장시키고 비교해서 su 보다 큰 값이면
//	// 서로 위치 변경
//	
//	while (n)
//	{
//		int su = arr[0];
//		for (int i = 1; i < n; i++)
//		{
//			if (su > arr[i]) // 5 > 2
//			{
//				arr[i - 1] = arr[i];
//				arr[i] = su;
//			}
//			else if (su < arr[i])
//			{
//				su = arr[i];
//			}
//		}
//		n--;
//	} // while 문 끝
//}
//
//int main()
//{
//	int arr[5] = { 5, 2, 4, 1, 3 };
//	// [1, 2, 3, 4, 5,]
//	sortArray(arr, 5);
//
//	for (int i = 0; i < 5; i++)
//	{
//		std::cout << arr[i] << "";
//	}
//}