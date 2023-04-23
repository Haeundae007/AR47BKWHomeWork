// 034_Random.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <conio.h>

int Seed = 0;

void SeedChange(int _Seed)
{
    Seed = _Seed;
}

int Randomint()
{
    // 수학공식을 통해서 
    // 뭔가 랜덤해보이는 수를 뽑아내주는 겁니다.
    // well 512 -> 난수 생성기, 메르센트위스터
    // ;

    return ++Seed;
}

int main()
{
    // SeedChange(5000);
    //난수는 이 두 쌍으로 이루어진다. 시드(기본값)를 바꾸는 함수, 
    //그걸 랜덤 돌려주는 함수

    
    //위험하긴 한데 
    // 프로그램이 켜질 때 마다ram의 주소위치가 바뀌는걸 활용
    //int Value = 0;
    //srand((int)&Value);

    // 현재 시간을 리턴해줍니다.

    // 시간은 보통 8바이트 정수로 줍니다, (현재시간을 return해줌)
    unsigned int Test = time(0);
    //시드를 바꿔주는 함수
     srand(Test);
    

    while (true)
    {

        printf_s("%d\n", rand() % 29);
        // 키가 눌릴때까지 프로그램을 정지시킨다.
        _getch();
    }

    std::cout << "Hello World!\n";
}

//참조형변수(포인터, 레퍼런스)는 그 특성에 따라 무엇을 가르키고 있는지
//명확히 이야기 할 수 있어야 함