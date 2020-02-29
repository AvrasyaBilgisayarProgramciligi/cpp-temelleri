#include <iostream>
#include <fstream>

/* Giriş çıkış işlemleri C++'ta akışlar kullanılarak yapılır. 
 * Bir anlamda akışlar kullanılabilecek bilginin bekletilmesi için
 * bir tampo bölge olup, sonsuz uzunluktaki bayt dizisi olarak düşünülebilir.
 */

/* Giriş ve çıkış
 *
 * 'istream' -> akış girdileriyle çalışırken kullanılacak birincil sınıf.
 * 'ostream' -> akış çıktılarıyla çalışırken kullanılacak birincil sınıf.
 * 'iostream' -> sınıfı input ve output'un ikisini de iki yönlü olarak kullanabilir.
 */

/* Dosya işlemleri
 * C++'ta dosyalama giriş/çıkış işlemleri, normal giriş/çıkış işlemlerine çok benzemektedir.
 * Dosya işlemleri için kullanacağımız sınıflar için programa 'fstream' kütüphanesini
 * dahil etmeliyiz.
 */

using namespace std;

/* Dosya çıkışı
 * Dosya çıkışı yapabilmek için öncelikle verilerin üzerine yazılacağı bir dosyamız
 * olması gerekir. Bu dosya tanımlama işlemi için 'ofstream' sınıfı kullanılır.
 */
void dosya_cikis()
{
	ofstream dosya("cikti.txt");
	if(!dosya)
	{
		cout << "Dosya açılamadı" << endl;
		exit(1);
	}
	dosya << "Kayıt işlemi başarılı" << endl; 
	// Eğer dosya bulunduysa son olarak içine 'Kayıt işlemi başarılı' dizgisi yazıldı.
}


/* Dosya girişi
 * Dosya giriş işlemleri dosyadan veri almaya yarar. Bu işlemler 
 * için 'ifstream' sınıfını kullanacağız. 'ifstream' sınıfından 
 * bir nesne daha önceden oluşturulmuş olan dosyayı okumaya yarar.
 */
void dosya_girisi()
{
	ifstream dosya("cikti.txt");
	if(!dosya)
	{
		cout << "Dosya açılamadı" << endl;
		exit(1);
	}

	while(dosya)
	{
		string veri;
		getline(dosya, veri);
		if(veri != "") cout << veri << endl;
	}
}

int main()
{
	dosya_cikis();
	dosya_girisi();
}
