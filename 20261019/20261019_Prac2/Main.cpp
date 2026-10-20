#include <iostream>
#include "Homura.h"
#include "Madoka.h"
#include "MagicalGirl.h"

using namespace std;

int main(void)
{
	Madoka madoka;
	Homura homura;

	//配列で継承
	MagicalGirl* girls[2] = { &madoka,&homura };

	for (int i = 0;i < 2;i++)
	{
		//オブジェクトをもとにそれぞれのメソッドを実行
		girls[i]->Fight();
		girls[i]->ShowProfile();
	}

	return 0;
}