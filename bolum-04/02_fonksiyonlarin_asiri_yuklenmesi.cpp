#include <iostream>

/* Aşırı yükleme (overloading) farklı 
 * metodların aynı ada sahip olmasına izin verir.
 * Ancak parametre sayısı veya parametre türü farklı olmak zorundadır.
 */

struct Veri
{
	double sayilar[5] = {10, 25, 38, 45, 78};
}v;

class HesapMakinesi
{
	public:
	double topla(double a, double b);
	double topla();
};

double HesapMakinesi::topla(double a, double b)
{
	return a+b;
}

double HesapMakinesi::topla()
{
	int sonuc = 0;
	for (int i = 0; i < sizeof(v); ++i)
	{
		sonuc += v.sayilar[i];
	}
	return sonuc;
}

int main()
{
	HesapMakinesi hsp;
 	std::cout << hsp.topla(3, 5) << std::endl;
	std::cout << hsp.topla() << std::endl;
	
	return 0;
}