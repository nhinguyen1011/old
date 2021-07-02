#include<math.h>
int vitrituongdoi(tron *a, tron *k)
{
	int c;
	c = sqrt(pow(a->x - k->x ,2) + pow(a->y - k->y, 2));
	return c;
}

