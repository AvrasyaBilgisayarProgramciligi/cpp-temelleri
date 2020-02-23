#include <iostream>

/* Aslında basit düşündüğümüzde başvurular göstericilerle aynı işi yapar,
 * fakat göstericilere karşı üstünlükleri vardır ve anlaşılır programlar
 * yazmak için daha uygundurlar.
 */

// Örnek:
void gosterici(int *i);

void basvuru(int &i);

int faktoriyel_hesapla(int &sayi);

int main() 
{
	int x = 5;
	gosterici(&x);
	std::cout << "Gösterici ile cağırmadan sonra x: " << x << std::endl;
	basvuru(x);
	std::cout << "Başvuru ile cağırmadan sonra x: " << x << std::endl;
	
	std::cout << x << "'un faktöriyeli: " << faktoriyel_hesapla(x) << std::endl; 

	return 0;
}

void gosterici(int *i) 
{
	std::cout << "Gösterici cağrısı aktif" << std::endl;
	*i = 5;
}

void basvuru(int &i) 
{
	std::cout << "Başvuru cağrısı aktif" << std::endl;
	i = 10;
}

/* gosterici() fonksiyonu argüman olarak int türde bir değişkene
 * işaret eden bir gösterici alan ve geriye değer döndürmeyen bir fonksiyondur.
 * Bu fonksiyonun içerisinde bir değişkene değer atamak istersek
 * değişken adından önce '*' koymak zorundayız. Çünkü fonksiyona parametre olarak
 * gelen bir bellek adresidir ve '*' operatörü bu bellekteki veriyi işaret eder.
 *
 * İkinci çağırılan fonksiyon olan basvuru() fonksiyonunda durum biraz daha
 * farklıdır. Başvuru işleminde x değişkeninin önüne '&' operatörü kullanılmadı.
 * Yani değişken direk olarak fonksiyon çağırmada argüman olarak kullanıldı.
 * Fonksiyon içersinde bu değişkene atama yaparken '*' operatörü kullanmaya da gerek
 * kalmadı, direk parametre olarak alınan değişkene atama yapıdı.
 */

// Örnek (başvurular ile faktöriyel hesaplayan program):
int faktoriyel_hesapla(int &sayi)
{
	if(sayi <= 2) return sayi;

	int result = 1;
	while(sayi > 1)
	{
		result *= sayi;
		--sayi;
	}

	return result;
}

/* Output:
 * 10'un faktöriyeli: 3628800
 */

/* Dinamik bellek yönetimi
 * Bu kısımda belleği etkin bir biçimde kullanmanın önemini
 * ve iki yeni anahtar kelimenin ('new', 'delete') ne işe yaradığından bahsedeceğiz.
 */

/* New anahtar kelimesi
 * Bellekten yer ayırmak istenildiği taktide 'new' operatörü kullanılır. 
 * Bir tam sayıyı gösteren gösterici için bir tamsayılık yer aşağıdaki
 * şekilde bellekte kendisine yer edinir.
 */

void new_anahtar_kelimesi()
{
	int *sayi;
	sayi = new int;

	// Eğer değişkene başlangıç değeride vermek istiyorsak
	sayi = new int(10);

	// Eğer bellekte bir dizi oluşturucak şekilde yer ayırmak istiyorsak
	sayi = new int[3];
}

/* Delete anahtar kelimesi
 * 'new' anahtar kelimesi ile bir yer ayırdığımızı varsayalım. 
 * Ayırdığımız yeri geri vermek istiyorsak, 'delete' operatörünü kullanırız.
 */

void delete_anahtar_kelimesi()
{
	int *sayi;

	// Bellekten yer ayırttık
	sayi = new int;

	// Ayırttığımız yeri geri verdik
	delete sayi;

	// Eğer bellekte bir dizi için yer ayırmak istiyorsak
	sayi = new int[3];
	delete [] sayi;
}

