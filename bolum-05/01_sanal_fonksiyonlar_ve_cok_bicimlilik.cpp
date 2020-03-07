#include <iostream>

/* Kalıtımda birbiriyle ilişkişi sınıfların her birinde yeniden tanımlanmış 
 * fonskiyonlarının tek bir sınıf nesnesiyle çağırılmasına çok biçimlilik denir.
 */

class A
{
	public:
		void sinif_adi()
		{
			std::cout << "Sınıf adı: A" << std::endl; 
		}
};

class B : public A
{
	public:
		void sinif_adi()
		{
			std::cout << "Sınıf adı: B" << std::endl; 
		}
};


/* Bu kısımda A sınıfının 'a_ptr' (main fonksiyonunun 61. satırı) 
 * göstericisiyle B sınıfının 'eleman()' fonksiyonu çağırılmak istenebilir.
 *
 * C++'ta işte tam bu noktada sanal fonksiyonlar devreye girer.
 * Sanal fonksiyonun bildirimi temel sınıfta yapılır ve 
 * türetilmiş sınıflarda tekrar tanımlanır. Temel sınıftaki 
 * tanımlamanın önüne 'virtual' anahtar kelimesi 
 * getirilerek sanal fonksiyon oluşturulur.
 */

class VirtualA
{
	public:
		virtual void sinif_adi()
		{
			std::cout << "A sınıfının sanallaştırılmış fonksiyonu" << std::endl; 
		}
};

class VirtualB : public VirtualA
{
	public:
		void sinif_adi()
		{
			std::cout << "A sınıfının sanallaştırma fonksiyonunu" <<
				" kullanan B fonksiyonu" << std::endl; 
		}
};

int main()
{
	std::cout << "Sanallaştırılmış fonksiyondan önce:" << std::endl;
	B b_nesnesi;
	A *a_ptr = &b_nesnesi;
	a_ptr->sinif_adi();

	std::cout << "\n-------------------------------------------" << std::endl;
	std::cout << "-------------------------------------------\n" << std::endl;
	
	std::cout << "Sanallaştırılmış fonksiyondan sonra:" << std::endl;
	VirtualB virtual_b_nesnesi;
	VirtualA *virtual_a_ptr = &virtual_b_nesnesi;
	virtual_a_ptr->sinif_adi();

	return 0;
}
