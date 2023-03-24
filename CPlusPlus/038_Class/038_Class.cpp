// 038_Class.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//함수 정리 좀 해야겠다 모르겠는거 정리하는 창 꺼내놓고 하기
//

class Player
{
	public:
		int Att = 10;
		int Def = 2;
	protected:
		int Hp = 100;
	private:
		int Speed = 3;
};
	

class Monster
{
private:
	int Att = 10;
	int Def = 2;
	int Hp = 100;
	int Speed = 3;

public:
	int GetHp()
	{
		return Hp;
	}

	void SetHp(int _Hp)
	{
		Hp = _Hp;
		if (0 == _Hp)
		{
			int a = 0;
		}
	}
};

int main()
{
	
	Monster NewMonster;
	NewMonster.SetHp(20);

	NewMonster.SetHp(0);

	Player NewPlayer = Player();
	NewPlayer.Att = 20;
}
