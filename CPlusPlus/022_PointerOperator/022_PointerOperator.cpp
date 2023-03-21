// 022_PointerOperator.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//모든 포인터는 64비트에서 8바이트 크기를 가진다.

void ValueChangePtr(int* Ptr)
{
    //int TestChange;
    //Ptr = &TestChange;

    *Ptr = 0;
}

void ValueChangeValue(int Ptr)
{
    Ptr = 0;
}

void Damage(int* _Ptr)
{
    *_Ptr -= 10;

    if (*_Ptr <= 0)
    {
        int A = 0;
    }
}

int main()
{
    {
        // 100번지
        int Value = 10;

        // ValueChangeValue(Value);

        int* Ptr = &Value;

        //int** PtrPtr = &Ptr;


        // 그 위치의 메모리를 사용하겠다.
        // 포인터 변수의 앞에 *을 붙이는 연산자는
        // *Ptr 100번지의 값을 사용하겠다.
        *Ptr = 20;

        ValueChangePtr(&Value);
        ValueChangePtr(Ptr);

        int a = 0;
    }


    {
        int PlayerHp = 100;

        Damage(&PlayerHp);
        Damage(&PlayerHp);
        Damage(&PlayerHp);
        Damage(&PlayerHp);
        Damage(&PlayerHp);
        Damage(&PlayerHp);

        // 무기장비하고

        Damage(&PlayerHp);
        Damage(&PlayerHp);
        Damage(&PlayerHp);
        Damage(&PlayerHp);

        // 레벨업하고

        Damage(&PlayerHp);
        Damage(&PlayerHp);
        Damage(&PlayerHp);
        Damage(&PlayerHp);
        Damage(&PlayerHp);
        Damage(&PlayerHp);
        Damage(&PlayerHp);
        Damage(&PlayerHp);
        Damage(&PlayerHp);
        Damage(&PlayerHp);

    }
}