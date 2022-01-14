#include "../include/cclib.h"
#include <stdio.h>

int main()
{
	cnb a;
	icn(a,1,1);
	cnb b;
	icn(b,1,1);
	cnb c;
	dcn(c,a,b);
	pcn(c);

	icn(a,1,0);
	icn(b,0,1);
	dcn(c,a,b);
	pcn(c);
	
	ncn(b);
	icn(a,1,1);

	for(int i=0;i<10;++i)
	{
		acn(b,b,a);
	}
	pcn(b);

	/* More tests to follow */
	return 0;
}
