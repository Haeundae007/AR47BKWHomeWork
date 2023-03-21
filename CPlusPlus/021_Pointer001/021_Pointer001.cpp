// 021_Pointer001.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    {
        int Arr[3] = {};

        // Arr n번지라면
        // n번지 + sizeof(int) * 정수
        int* ValuePtr0 = &Arr[0];
        int* ValuePtr1 = &Arr[1];
        int* ValuePtr2 = &Arr[2];

        __int64 Address0 = 0;
        __int64 Address1 = 0;
        __int64 Address2 = 0;

        Address0 = (__int64)ValuePtr0;
        Address1 = (__int64)ValuePtr1;
        Address2 = (__int64)ValuePtr2;
        int a = 0;

    }
}

