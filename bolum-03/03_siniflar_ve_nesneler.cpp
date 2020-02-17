/* Açıklama:
 * Nesneye yönelik programlama diğer konulara nazaran uzun soluklu ve 
 * bir tık daha önemlidir. Bu nedenle kafanızda soru işareti kalmaması için
 * detaycı bir anlatım uygulayacağım ve bunu ayrı bir döküman olarak hazırlayacağım.
 * 
 * Bu dosyada örnek proje olacaktır. Lütfen bu dosyayı incelemeden önce 
 * 'Sınıflar Ve Nesneler' dökümantasyonunu inceleyiniz.
 */

#include <iostream>
#include <map>
#include <cmath>

#define MAKSIMUM_ENVANTER_BOYUTU 50

using namespace std;

class Urun
{
	private:
	int tanim_numarasi;
	string isim;
	float fiyat;
	int eldeki_miktar;

	public:
	Urun(int tanim_numarasi, string isim, float fiyat, int eldeki_miktar)
	{
		this->tanim_numarasi = tanim_numarasi;
		this->isim = isim;
		this->fiyat = fiyat;
		this->eldeki_miktar = eldeki_miktar;
	}

	int get_tanim_numarasi ()
	{
		return tanim_numarasi;
	}

	string& get_isim()
	{
		return isim;
	}

	float get_fiyat()
	{
		return fiyat;
	}

	int get_eldeki_miktar()
	{
		return eldeki_miktar;
	}

	string bilgiler()
	{
		return "Ürün ID: " + to_string(get_tanim_numarasi()) + '\n' +
		"Ürün Adı: " + get_isim() + '\n' +
		"Ürün Fiyatı: " + to_string(get_fiyat()) + '\n' +
		"Ürün Eldeki Miktar: " + to_string(get_eldeki_miktar()) + '\n';
	}
};

class Envanter
{
	private:
	map<int, Urun> urun_map;
	map<int, Urun>::iterator urun_it;
	
	public:
	void urun_ekle(Urun urun)
	{
		urun_it = urun_map.find(urun.get_tanim_numarasi());
		if(urun_it == urun_map.end())
		{
			urun_map.insert(pair<int, Urun>(urun.get_tanim_numarasi(), urun));
		}
	}

	void urunleri_goster()
	{
		int i = 0;
		for(auto& urun: urun_map)
		{
			cout << urun.second.bilgiler();
			if (urun_map.size() == ++i) continue;
			else cout << endl;
		}
	}
};

int main()
{
	Envanter envanter;
	envanter.urun_ekle(Urun(153, "Kitap", 670.0f, 15));
	envanter. urun_ekle(Urun(154, "Boya", 153.0f, 15));
	envanter.urunleri_goster();
	return 0;
}
