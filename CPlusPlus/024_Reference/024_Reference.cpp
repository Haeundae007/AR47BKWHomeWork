#include <iostream>

void EquipPtr(int* _Ptr) //인자를 포인터로 넣어달라
{
    *_Ptr = 300;
}
// 들어갔다 나오면 값이 바뀔것이라는 의도 전달 ㄱㄴ
void EquipRef(int& _Ref) // 인자를 레퍼런스로 넣어달라
{
    _Ref = 200;
} // 들어갔다 나오면 값이 바뀔것이라는 의도 전달 ㄱㄴ


void TestFunction(const int& _Ref)
{

}

int main()
{
    // 이 레퍼런스라는 의미가

    int Value0 = 10;
    int Value1 = 20;

    // 대부분의 언어에서 참조라는 의미는 
    // => 특정 메모리영역의 위치를 가리킨다.

    // int* Ptr = nullptr

    // 포인터형이라고 합니다.
    // 포인터는 언제든지 자신이 참조(가리킨다) 대상을 바꿀수 있다.
    int* Ptr = &Value0;
    *Ptr = 100; // -> 값을 끌어낼 수 있는 행위
    *Ptr = Value1;

    int Size0 = sizeof(Ptr);
    Size0 = sizeof(*Ptr);

    // 참조형이라고 합니다.
    // 선언 시작 시 무조건 누군가를 가리켜야 합니다.
    // *Ptr; <= 항상 왼쪽처럼 값을 끌어내서 사용하는 포인터이다.(포인터연산자)
    // 특정이름의 변수가 있다고 쳤을때
    // 이제부터 Value0이라는 애를 이제부터 "Ref라고도" 부를께.
    // 한번 초기화시 참조한 메모리영역을 바꿀수가 없어요.

    int& Ref = Value0;
    Ref = 100; // -> 포인터연산자 처럼 값을 끌어낼 수 있다.
    Ref = Value1;

    int Size1 = sizeof(Ref);

    // 레퍼런스는 그게 패시브


    EquipPtr(nullptr);

    int ItemEquip = 0;
    EquipRef(ItemEquip); 
    //-> 무조건 값을 넣어줘야 할 때 ref, 비어있는거 넣어줄 때 ptr

    std::cout << "Hello World!\n";

    TestFunction(ItemEquip);
