#include <malloc.h>
#include <iostream>
#include "MemTrack.h"

struct tagTest
{
	tagTest() { a = 0; b = false; }
	int a;
	bool b;
};

int main()
{
	for (int i = 0; i < 999; ++i)
	{
		tagTest* pT = new tagTest[5];
	}
	MemTrack::TrackDumpBlocks();

	return 0;
}
