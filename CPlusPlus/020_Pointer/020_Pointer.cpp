// 020_Pointer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	

	int Value = 0;

	int* ValuePtr = &Value;

	__int64 Address = 0;

	Address = (__int64)ValuePtr;

	int a = 0;

}

//포인터란 c++의 자료형의 한 형태이며 자료형 뒤에 *을 붙이는 문법을 통해서 선언한다

//value가 표현하는 값이 2가지. 내부의 자신의 진짜값10, 램에 존재하게 되는 자신의 위치인 100번지