#include <iostream>

/* C++'da operatörlere bilinen anlamlarının dışında yeni anlamlar kazandırabilir,
 * kendi istediğimiz işlemleri yapmasını sağlayabiliriz.
 *
 * Operatörleri aşırı yükleyerek yapılabilecek her şey sürekli olarak kullandığımız
 * normal fonksiyonlar ile de yapıbilir. Ancak yapacaklarımızı aşırı yükleme ile 
 * yaparak programın daha anlaşılır ve okunaklı olmasını sağlayabiliriz.
 */

/* Tanımlama
 * (dönüş tipi) (sınıf adı) :: operator (aşırı yüklenecek operatör)
 * (argüman listesi){
 *  fonksiyonun yapıcakları
 * }
 */

class Kutu
{
	private:
	double uzunluk;
	double yukseklik;
	double genislik;

	public:
	Kutu(double uzunluk, double yukseklik, double genislik)
	{
		this->uzunluk = uzunluk;
		this->yukseklik = yukseklik;
		this->genislik = genislik;
	}

	Kutu operator+(const Kutu &k);
	double hacim_hesapla() {return uzunluk * yukseklik * genislik;}
	
	const double getUzunluk() const {return uzunluk;}
	void setUzunluk(double uzunluk) {this->uzunluk = uzunluk;}
	const double getYukseklik() const {return yukseklik;}
	void setYukseklik(double yukseklik) {this->yukseklik = yukseklik;}
	const double getGenislik() const {return genislik;}
	void setGenislik(double genislik) {this->genislik = genislik;}
};

// Operatör aşırı yükleme
Kutu Kutu::operator+(const Kutu &k)
{
	Kutu kutu(0.0, 0.0, 0.0);
	kutu.setUzunluk(getUzunluk() + k.getUzunluk());
	kutu.setYukseklik(getYukseklik() + k.getYukseklik());
	kutu.setGenislik(getGenislik() + k.getGenislik());
	return kutu;
}

int main()
{
	Kutu kutu(30, 10, 20);
	std::cout << kutu.hacim_hesapla() << std::endl;
	Kutu yeni_olusan_kutu = kutu + Kutu(15, 5, 10); // Yeni alan = 45, 15, 30
	std::cout << yeni_olusan_kutu.hacim_hesapla() << std::endl;

	return 0;
}
