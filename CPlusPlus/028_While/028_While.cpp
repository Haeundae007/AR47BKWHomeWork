// 028_While.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	// 반복문중 while을 사용합니다.

	// while (메모리영역, 조건문)
	// {
	//     // 실행코드
	// }

	// while (내부에는 ,를 통해서 여러가지 조건을 넣을수 있습니다.) 
	// 가장 무조건 오른쪽에있는 ,의 메모리영역의 값만을 조건으로 칩니다.
	// -> 중요
	//메모리영역을 반복시켜주는 함수

	// while (특정 메모리영역이 참인가 거짓인가)

	//{
	//	int Value = 10;
	//	while (printf_s("조건문\n"), Value)
	//	{
	//		--Value;
	//		printf_s("실행코드\n");
	//	}
	//}

	{
		//while문, Value가 0(false)이 되면 실행 종료, 시작점이 조건문
		printf_s("while\n");
		int Value = 5;
		while (printf_s("조건문\n"), Value)
		{
			--Value;
			printf_s("실행코드\n");
		}
	}

	{
		printf_s("do while\n");

		// do while 문, 시작점을 실행코드로 변경한것
		int Value = 5;
		do
		{
			--Value;
			printf_s("실행코드\n");
		} while (printf_s("조건문\n"), Value);
	}

}