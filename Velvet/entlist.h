#pragma once

#include "sdk.h"

class celist
{
public:
	inline centity *getcliententity(int i)
	{
		return getvfunc<centity *(__thiscall *)(void *, int)>(this, 3)(this, i);
	}
	inline centity *entfromhandle(DWORD i)
	{
		return getvfunc<centity *(__thiscall *)(void *, int)>(this, 4)(this, i);
	}
};
extern celist *elist;