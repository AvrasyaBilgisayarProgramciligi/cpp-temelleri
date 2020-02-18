#include <iostream>

using namespace std;

/* Nesene dizileri ile daha önce kullandığımız diziler birbirine çok benzerler.
 * Hatta bildirim yapılırken de nesne dizileri normal diziler gibi
 * davranırlar ve bildirim yapıldıktan sonra program içinde kullanılırlar.
 */

// Örnek:
class Ogrenci
{
	private:
	string ad;
	string soyad;
	int ogrenci_numarasi;

	public:
	Ogrenci(string ad, string soyad, int ogrenci_numarasi)
	{
		this->ad = ad;
		this->soyad = soyad;
		this->ogrenci_numarasi = ogrenci_numarasi;
	}

	string ogrenci_bilgileri()
	{
		return "Öğrenci Adı: " + ad + "\n" +
		       "Öğrenci Soyadı: " + soyad + "\n" +
		       "Öğrenci Numarası: " + to_string(ogrenci_numarasi) + "\n";
	}
};

int main()
{
	Ogrenci ogrenciler[4] = {Ogrenci("Orhan", "Tuğrul", 157), Ogrenci("Ahmet", "Küçük", 165),
				Ogrenci("Ayşe", "Sarı", 253), Ogrenci("Zehra", "Yılmaz", 146)};
	int i = 0;
	for(auto& temp : ogrenciler)
	{
		cout << temp.ogrenci_bilgileri() << endl;
	}


	cout << "----------------------------------------" << endl;
	cout << "----------------------------------------\n" << endl;

	/* Nesne göstericileri
 	 * Göstericiler kısmında göstericilerin mantığını anşatmıştık. 
 	 * Göstericiler bilgiğiniz gibi bir değişkenin bellekte tutulduğu yerin adersini tutar.
 	 * Bu kısımda ele alacağımız göstericiler ise nesnelerin bellek üzerinde bulundukları yerin
 	 * adresini tutar.
 	 */

	// Not: Eğer nesnelerin üyelerine ulaşmak istiyorsak '->' işaretini kullanmalıyız.

	/* Nesne göstericisi tanımlama
 	 * (sınıfadı) * (gösterge_ismi)
	 */

	// Kullanım:
	Ogrenci *ogrenciler_ptr = ogrenciler;
	for(int i = 0 ; i < 4; ++i)
	{
		cout << ogrenciler_ptr->ogrenci_bilgileri();
		++ogrenciler_ptr;

		if(3 == i) continue;
		else cout << endl;
	}

	return 0;
}
