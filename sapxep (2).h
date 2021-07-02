void swap(tron *h, tron *k)
{
	tron *l;
	l = new tron;
	l->r = h->r;
	l->x = h->x;
	l->y = h->y;
	h->r = k->r;
	h->x = k->x;
	h->y = k->y;
	k->r = h->r;
	k->x = h->x;
	k->y = h->y;
	delete l;
}
void sapxep(tron *a, int n)
{
	for(int i = 0; i < n - 1; i++)
		if(dien_tich(a + i) > dien_tich(a + 1 + i))
		{
			swap(a+i, a+i+1);
			
		}
}
