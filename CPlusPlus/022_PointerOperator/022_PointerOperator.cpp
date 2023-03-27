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
//밖에있는 주솟값을 넣어줘서 함수 안의 실행흐름이 아니라 완전히 밖에 있는 실행흐름의 값을 변경할 수 있게 된다.
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
        //ptr의 주소값의 주소값

        // 그 위치의 메모리를 사용하겠다.
        // 포인터 변수의 앞에 *을 붙이는 연산자(중요)는
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




//언제*가 붙어야 하고 &가 붙어야 할지 너무 햇갈린다../
//-> 포인터변수에 *를 붙이는 포인터'연산자'는 주소 안의 값 수정
// 포인터변수 int* 옆에 &를 붙이는건 주소값 선언