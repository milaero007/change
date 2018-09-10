#include <iostream>
#include <cassert>

#define ONE  0
#define TWO  1
#define FIVE 2
#define TEN  3


	// -- IMPLEMENTATION --
void giveChangeImpl(int & change, int  result[4], int step = 0) {
}


void giveChange(int change, int  result[4]) {
	// To Implement
	if (change == 1) {
		result[ONE] = 1;
		return;
	}
	if (change == 3) {
		result[ONE] = 1;
		result[TWO] = 1;
		return;
	}
	// -- IMPLEMENTATION --
	giveChangeImpl(change, result);
}


int main(int argc, char **argv) {
	{
		int result[] =  {0,0,0,0};
		giveChange(6, result);
		assert((result[TEN] == 0) && (result[FIVE] == 0) && (result[TWO] == 3) && (result[ONE] == 0));
	}
	{
		int result[] =  {0,0,0,0};
		giveChange(11, result);
		assert((result[TEN] == 0) && (result[FIVE] == 1) && (result[TWO] == 3) && (result[ONE] == 0));
	}
	{
		int result[] =  {0,0,0,0};
		giveChange(13, result);
		assert((result[TEN] == 0) && (result[FIVE] == 1) && (result[TWO] == 4) && (result[ONE] == 0));
	}
	{
		int result[] =  {0,0,0,0};
		giveChange(16, result);
		assert((result[TEN] == 1) && (result[FIVE] == 0) && (result[TWO] == 3) && (result[ONE] == 0));
	}
	{
		int result[] =  {0,0,0,0};
		giveChange(18, result);
		assert((result[TEN] == 1) && (result[FIVE] == 0) && (result[TWO] == 4) && (result[ONE] == 0));
	}
	return 0;
}
