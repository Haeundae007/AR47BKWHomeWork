// 029_Variableargument.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void VarFunction(...)//가변인자, 인자갯수를 마음대로 넣을 수 있다, 자료형도 상관x
{

}

//                100     108     116
void TestFunction(int _1, int _2, int _3)
{
    int* ValuePtr0 = &_1;
    // int* ValuePtr1 = &_2;
    // int* ValuePtr2 = &_3;

    int Value1 = ValuePtr0[0];
    int Value2 = ValuePtr0[2];
    int Value3 = ValuePtr0[4];
    //(메모리영역 타고)첫번째 인자의 주솟값을 알게되면 다음인자 주솟값도 알 수 있다.
    // 100 + sizeof(int) * 2 ->메모리 영역 크기 계산법

    // __int64 Address0 = 0;
    // __int64 Address1 = 0;
    // __int64 Address2 = 0;

    // Address0 = (__int64)ValuePtr0;
    // Address1 = (__int64)ValuePtr1;
    // Address2 = (__int64)ValuePtr2;

}



////                100번지  108
//void TestFunction2(int _1, ...)
//{
//    int* Ptr = &_1;
//    int Count = 2;
//
//    while (_1--)
//    {
//        int Value = Ptr[Count];
//        Count += 2;
//
//        int a = 0;
//    }
//}
//
//// 인자의 이름이 필요할때는 실제로는 그걸 이름을 사용해야할때 분입니다.
//// 이름을 넣어주지 않아도 인자를 사용할수 있습니다.
//void TestFunction2(int _1, int, int, int, int, int)
//{
//    // 100번지
//    int* Ptr = &_1;
//    int Count = 2;
//
//    while (_1--)
//    {
//        int Value = Ptr[Count];
//        Count += 2;
//
//        int a = 0;
//    }
//
//}

void TestFunction2(int _1, ...)
{
    int* Ptr = &_1;

    while (_1--)
    {
        Ptr += 2;
        int Value = *Ptr;

        int a = 0;
    }

}



int main()
{
    //VarFunction(2, 3, 4, 7, 9, 1, 1, 1, 1, 1);

    //VarFunction("1", "2", "3", "4");

    //VarFunction("1", 2, 3, "하하하하");

    //TestFunction(10, 20, 30);

    //TestFunction2(1, 1, 2, 3, 4, 5);

    //TestFunction2(1, 1, 2, 3, 7, 2, 1, 2, 2);

    // %를 사용하게되면 이는 포매팅 문자라고 해서
    // 숫자나 다양한 다른 변수들을 사용해서 출력을 요청하는 것입니다.
    // %d
    printf_s("%d %s", 1, "asdfsadfdas");

}