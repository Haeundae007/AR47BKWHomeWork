// 027_Printf_s.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void MyPrintf(const char* const _ptr)
{
	int Count = 0;
	char Ch = 0;
	while (Ch = _ptr[Count], 0 != _ptr[Count])
	{
		putchar(Ch);
		Count += 1;
	}
}

int main()
{
	// char Arr[10] = {};

	const char ArrTest[2] = { 'a', 'b' };

	const char* Ptr = "test Print";
	// const char* Ptr = ArrTest;

	// 포인터 문법중 하나인
	// random index access 
	char Ch0 = Ptr[-0];
	char Ch1 = Ptr[-1];
	char Ch2 = Ptr[-2];
	char Ch3 = Ptr[-3];
	char Ch4 = Ptr[-4];
	char Ch5 = Ptr[-5];
	char Ch6 = Ptr[-6];
	char Ch7 = Ptr[-7];
	char Ch8 = Ptr[-8];
	char Ch9 = Ptr[-9];
	char Ch10 = Ptr[-10];
	char Ch11 = Ptr[-11];
	char Ch12 = Ptr[-12];
	char Ch13 = Ptr[-13];

	MyPrintf(ArrTest);

	// printf_s("cccc", 1, 2,3,4,5,6,7,8,9,90,0);

}
