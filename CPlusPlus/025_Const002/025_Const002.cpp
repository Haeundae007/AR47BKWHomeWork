// 025_Printf001.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    printf_s("aaaaccccdddd");

    {
        int Value0 = 10;
        int Value1 = 10;

        int* Ptr = &Value0;

        const int* cPtr = &Value1;


        // 자료형 * 
        const int* cPtr = &Value1;
        // *뒤에 뭔가를 붙이는건 이제부터 *에 영향을 주는 문법이 된다.
            //별을 기점으로!


        // const int*
        // 포인터형 변수가 사용할때 *을 붙이다는것은
        // 자신의 자료형에서 *을 뺀 자료형으로 사용하겠다는 뜻이다.
        // ex) *Ptr
        // Ptr == const int*
        // *Ptr == const int
        // *cPtr = 20; <= 그러니까 될리가 없다.

        // int const ValueTTT0 = 10;
        // ValueTTT0 = 20;

        const int ValueTTT1 = 10;
        // ValueTTT1 = 30;

        // int const ValueTTT1 = 10;

        // printf_s();
    }

    {
        // 100번지에 있는 A
        char Test0 = 'A';
        // 110번지에 있는 B
        char Test1 = 'B';

        // 120번지에 있는 100번지
        // 100번지 안에있는 값을 const화 시키는게 아니라
        // 100번지라고 하는 내가 가리키고 있는 
        // 주소 자체를 못바꾸게 하고 싶을때 사용한다.  --> 중요

        const char* const Chr = &Test0;
        //-> 값도 못바꾸고 가르키는 곳도 못바꾸는것이 된다.
        
        
        // const char
        // *Chr = 'C';
        // Chr = &Test1;

        // 주소 내 자료(?)를 바꾸지 않겠다. | 주소값을 바꾸지 않겠다.
        // const char    *            const      Chr = &Test0;

    }

    {
        // 상수화 변수는 무조건 초기화를 해줘야 한다.
        const int Value = 0;
    }

}
