#include <iostream>

int main()
{
    // const char[8]
    // "aaaaaaa";

    // const char* const <= const char[8]
    printf_s("aaaaaaa");

    {
        // 자료형이라는게 의미가 없기 대문에
        // 특정한 상황이 아니라면
        // 방법을 가리지 않는다면 어떠한 자료형은 언제나 어떠한 자료형이 될수 있다.
        // 형변환은 무조건 무언가를 한다 => 연산을 해서
         
        // ->여러분들이 생각하는거랑 달라질 수 있다.  
        // 잘라야하면 자르고 늘려야하면 늘려서 비트를 변경하는 일이 된다.

        bool bValue = true;
        int AValue = 0b11111111111111111111111111111111;
        // 1바이트가 들어갔으니까.
        // int AValue0 = 0b11111111111111111111111100000001;

        // 자료형이 다른데 대입이 됨
        // => 암시적 형변환
        AValue = bValue;

        int a = 0;
    }

    {
        // 아예 변환을 허용하지 않는 자료형 관계도 존재한다.

        int Value = 0;
        int* Ptr = nullptr;
        // Ptr = Value;
        // Value = Ptr;

        //여기 있는 비트를 여기로 옮기고 싶다, 형변환

        int a = 0;
    }

    {
        // 모든건 메모리가 생기면 자료형이 존재합니다.

        // 밑에 int Arr[10];은 int [10]형이다
        int Arr[10];

        // int Value = Arr;
        // Arr = Value;

        
        // 

        // 자료형이 다른데 대입이 됨
        //배열형은 포인터형이 될 수 있게 암시적으로 규정 되어있음
        // => 암시적 형변환
        // int*    int[10]
        int* Ptr = Arr;

        int a = 0;


    }

    std::cout << "Hello World!\n";
}