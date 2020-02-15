# Nesneye Yönelik Programlama Giriş

<h2 style="margin: 3px 0 3px 0; font-weight: bold"> İçerik </h2>

- Nesneye yönelik programlama nedir?
  - Kapsülleme (Encapsulation)
  - Kalıtım (Inheritance)
  - Çok biçimlilik (Polimorfizm)
- Sınıflara giriş
  - Sınıf, üye ve nesneleri
  - Sınıf bildirimi
  - Sabit nesneler ve sabit fonksiyonlar
- Yapıcı fonksiyonlar
- Yıkıcı fonksiyonlar
- Nesneden nesneye atama yapmak
- Inline Fonksiyonlar


<h2 style="margin: 10px 0 3px 0; font-weight: bold" > Nesneye yönelik programlama nedir? </h2>
Nesneye yönelik programlamada, programlama ortamında ki her şey bir nesne olarak kabul edilir. Bu programlama tekniğine göre her nesne bir sınıfa aittir.

<p style="margin: 20px 0 -10px 0; font-weight: bold" >Örnek: </p>
<pre>
Ahmet bir insandır. (Bu cümlede Ahmet nesnenin isim, insan sınıfın ismidir)
</pre>

<p style="margin: 20px 0 -10px 0;"> Her sınıfın özellikleri(attributes) ve eylermleri(behaviors) vardır.</p>

```cpp
// Class ifadesine ileride gelicez şuanlık takılmanıza gerek yok
class Insan 
{
    // Özellikler (attributes)
    char *isim;
    char *soyisim;
    int yas;

    //Eylemler (behaviors)
    kalk();
    yuru();
    otur();
    uyu();
}
```

<h3 style="margin: 10px 0 3px 0; font-weight: bold" > Kapsülleme (Encapsulation) </h3>
Sınıf özelliklerinin dışarıya kapalı olması ve bu sınıfın her türlü veri iletişiminin kontrol altında ki metodlar ile yapılmasıdır. Bu kısımda dikkat etmeniz bir nokta vardır. Kod ve verilerimiz içinde bulundukları nesneye <b>public</b>(genel) veya <b>private</b>(özel) olarak tanımlanabilirler.

```cpp
#include <iostream>

class Araba
{
    // Özel tanımlanmış özellikler veya eylemler
    private:
    int motor_hacmi;
    int beygir_gucu;
    int tork;
    bool motor_caslisiyor = false;

    // Genel tanımlanmış özellikler veya eylemler
    public:
    void motoru_calistir()
    {
        if(!motor_caslisiyor)
        {
            motor_caslisiyor = true;
            std::cout << "Motor çalışyor...." << std::endl;
        }
        else 
        {
            std::cout << "Motor zaten çalışır durumda!" << std::endl;
        }
    }

    void motoru_durdur()
    {
        if (motor_caslisiyor)
        {
            motor_caslisiyor = false;
            std::cout << "Motor durduldu" << std::endl;
        }
        else 
        {
            std::cout << "Motor zaten çalışmıyor!" << std::endl;
        }
    }
}
```
Özel tanımlanmış özellikler sadece o nesneye ait bileşenler tarafından kullanılabilir ve çağırılabilirler. Genel tanımlanmış özellikler ise tanımlandıkları nesnelerin dışında da çağırılıp kullanılabilirler.

<h3 style="margin: 10px 0 3px 0; font-weight: bold" > Kalıtım (Inheritance) </h3>
Kalıtım, bir nesnenin diğer nesnelerin özelliklerini alabilmesidir. Bu sayede hiyerarşik bir yapı oluşturulur ve birçok bilgi bu sayede kullanılabilir.

![Inheritance Gif](../res/inheritance.gif)

Şemada göründüğü üzere, aslında bütün hayvan sınıfları (Bird, Mamal, Parrot, Penguin, Dog, Whale) aslında 'Animal' sınıfından kalıtım almaktadır. Bu sayede ortak özellikler olan 'answer', 'name', 'talk' gibi eylemleri(behaviors) tekrar yazmadan hiyerarşik bir şekilde kullanabiliriz.

```cpp
#include <iostream>

class Insan
{
    // Genel tanımlanmış özellikler veya eylemler
    public:
    std::string isim;
    int yas;

    /* Yapıcı fonksiyon ifadesine ileride gelicez
     * şuanlık takılmanıza gerek yok
     */
    Insan(): isim("isimsiz"), yas(0) {}

    void bilgileri_goster()
    {
        std::cout << "Benim ismin: " << isim << std::endl;
        std::cout << "Benim yaşım: " << yas << std::endl;
    }
    void yuru()
    {
        std::cout << "Yürüyebilirim." << std::endl;
    }
    void uyu() 
    {
        std::cout << "Uyuyabilirim." << std::endl;
    }
};

class Yazilimci : public Insan
{
    public:
    void kod_yaz()
    {
        std::cout << "Kod yazabilirim." << std::endl;
    }
};

class Futbolcu : public Insan
{
    public:
        void futbol_oyna()
        {
            std::cout << "Futbol oynayabilirim." << std::endl;
        }
};

int main()
{
    Yazilimci yazilimci;
    yazilimci.isim = "Ahmet";
    yazilimci.yas = 22;
    yazilimci.bilgileri_goster();
    yazilimci.yuru();
    yazilimci.kod_yaz();

    Futbolcu futbolcu;
    futbolcu.isim = "Mehmet";
    futbolcu.yas = 24;
    futbolcu.bilgileri_goster();
    futbolcu.futbol_oyna();
    futbolcu.uyu();
}
```

<h3 style="margin: 10px 0 3px 0; font-weight: bold" > Çok Biçimlilik (Polimorfizm) </h3>
Çok biçimlilik, genel anlamıyla bir metodun farklı nesnelerden veya farklı ortamlardan fakrlı sonuçlar üretmesidir.

```cpp
#include <iostream>

class Kus
{
	public:
	void virtual ot() 
	{
		std::cout << "Kuş normal tonda ötüyor" << std::endl;
	}
};

class Kartal : public Kus
{
	public:
	void ot()
	{
		std::cout << "Kuş yüksek tonda ötüyor" << std::endl;
	}
};

class Tavuk : public Kus
{
	public:
	void ot () 
	{
		std::cout << "Kuş alçak tonda ötüyor" << std::endl;
	}
};

int main ()
{
	Kus *kus;
	Kartal kartal;
	Tavuk tavuk;

	kus = &kartal;
	kus->ot();

	kus = &tavuk;
	kus->ot();
}
```
<h2 style="margin: 10px 0 3px 0; font-weight: bold" > Sınıflara giriş </h2>
