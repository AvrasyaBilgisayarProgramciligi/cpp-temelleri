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
