void nhap(tron *&a)
{
	a = new tron;
	
	std::cout << "n nhap toa do x: ";
	std::cin >> a->x;
	std::cout << "nhap toa do y: ";
	std::cin >> a->y;
	std::cout << "nhap ban kinh r: ";
	std::cin >> a->r;
}
void nhapdiem(tron *&k)
{
	k = new tron;
	
	std::cout << "\n nhap toa do x cua diem k: ";
	std::cin >> k->x;
	std::cout << "nhap toa do y cua diem k: ";
	std::cin >> k->y;
}
void nhapmangduongtron(tron *&a, int &n)
{
	std::cout << "nhap so luong duong tron: ";
	std::cin >> n;
	a = new tron[n];
	
	for(int i = 0; i < n; i++)
	{
		std::cout << "nhap toa do x duong tron thu: " << i << " la: ";
		std::cin >> (a + i)-> x;
		std::cout << "nhap toa do y duong tron thu: " << i << " la: ";
		std::cin >> (a + i)-> y;
		std::cout << "nhap ban kinh r duong tron thu: " << i << " la: ";
		std::cin >> (a + i)-> r;
	}
	
}
