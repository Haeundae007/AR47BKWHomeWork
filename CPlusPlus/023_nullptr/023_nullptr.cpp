// 023_nullptr.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    int Value = 10;

    // nullptr == 0이라고 부릅니다.
    // null
    // 주소를 가리키지 않는다 아직 아무도 가리키고 있지 않다.

    int* Ptr0;

    // 보통은 nullptr로 초기화 합니다.
    int* Ptr = nullptr;

    Ptr = &Value;
    //ptr이 가르키는 곳을 밸류라고 하겠다.
    *Ptr = 200;
    //ptr값(널포인터)을 200으로 바꾸겠다
    // c스타일
    // int* Ptr = 0;

    // std::cout << "Hello World!\n";
}
