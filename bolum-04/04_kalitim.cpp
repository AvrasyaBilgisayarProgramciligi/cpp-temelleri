#include <iostream>

using namespace std;

/* Kalıtım, var olan bir ana sınıfın özelliklerinin yeri geldiğinde değiştirilerek
 * yeri geldiğinde ise yeni özellikler eklenilerek alt sınıfa aktarılmasıdır.
 *
 * Yukarıdan aşağıya doğru hiyerarşik bir yapısı bulunmaktadır. Bu nedenle
 * en üst kademedeki ana sınıfa "temel sınıf", 
 * alt sınıflara ise "türetilmiş sınıf" denir.
 */

/* Kalıtım tanımlama
 * (class) (türetilen_sinif) : (erisim belirleyicisi) (ana_sinif())
 */

class Canli
{
	private:
		// Ototrof veya heterotrof beslenme
		string beslenme_turu;
		// Oksijenli veya oksijensiz solunum
		string hucresel_solunum;
		// Eşeyli(mayoz) veya eşeysiz(mitoz) üreme
		string ureme;

	public:
		Canli(string beslenme_turu, string hucresel_solunum, string ureme)
		{
			this->beslenme_turu = beslenme_turu;
			this->hucresel_solunum = hucresel_solunum;
			this->ureme = ureme;
		}

		const string& get_beslenme_turu() const
		{
			return beslenme_turu;
		}

		void set_beslenme_turu(string beslenme_turu)
		{
			this->beslenme_turu = beslenme_turu;
		}
};

class Hayvan : public Canli
{
	private:
		// Omurgalı veya omurgasız
		string iskelet_sistemi;
	public:
		Hayvan(string beslenme_turu, string hucresel_solunum, string ureme, string iskelet_sistemi) 
			: Canli(beslenme_turu, hucresel_solunum, ureme)
		{
			this->iskelet_sistemi = iskelet_sistemi;
		}

		const string& get_iskelet_sistemi()
		{
			return iskelet_sistemi;
		}

		void set_iskelet_sistemi(string iskelet_sistemi)
		{
			this->iskelet_sistemi = iskelet_sistemi;
		}
};

class Bitki : public Canli
{
	private:
		// Açık tohumlu veya kapalı tohumlu
		string tohum_turu;

	public:
		Bitki(string beslenme_turu, string hucresel_solunum, string ureme, string tohum_turu) 
			: Canli(beslenme_turu, hucresel_solunum, ureme)
		{
			this->tohum_turu = tohum_turu;
		}

		const string& get_tohum_turu() const
		{
			return tohum_turu;
		}

		void set_tohum_turu(string tohum_turu)
		{
			this->tohum_turu = tohum_turu;
		}
};

/* Çoklu kalıtım 
 * C++ çoklu kalıtıma izin vermektedir. Yani birbirinden farklı 
 * iki sınıftan bir türetilmiş sınıf oluşturulabilir.
 */

class A
{
	private:
		int a;
	public:
		A(int a)
		{
			this->a = a;
			cout << "1. Temel sinif yapici fonksiyonu" << endl;
		}

		const int& deger_a() const
		{
			return a;
		}
};

class B
{
	private:
		int b;
	public:
		B(int b)
		{
			this->b = b;
			cout << "2. Temel sinif yapici fonksiyonu" << endl;
		}

		const int& deger_b() const
		{
			return b;
		}
};

class C : public A, public B
{
	private:
		int c;
	public:
		C(int a, int b, int c) : A(a), B(b)
		{
			this->c = c;
			cout << "Türtilmiş sinif yapici fonksiyonu" << endl;
		}

		const int& deger_c() const
		{
			return c;
		}
};

int main()
{
	Hayvan hayvan("Heterotrof Beslenme", "Oksijenli Solunum", "Eşeyli Üreme", "Omurgalı");
	Bitki bitki("Ototrof", "Oksijensiz Solunum", "Eşeysiz Üreme", "Açık Tohumlu");

	cout << hayvan.get_iskelet_sistemi() << endl;
	cout << bitki.get_tohum_turu() << endl;

	cout << typeid(hayvan).name() << endl;
	cout << typeid(bitki).name() << endl;

	// -------------------- Çoklu Kalıtım  --------------------
	
	C c(10, 20, 30);
	cout << c.deger_a() << endl;
	cout << c.deger_b() << endl;
	cout << c.deger_c() << endl;

	return 0;
}
