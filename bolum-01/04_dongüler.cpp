#include <iostream>

using namespace std;

int main()
{
    /* 3 temel döngü tipi vardır.
     * - While dögüsü
     * - Do While döngüsü
     * - For döngüsü
     */

    /* While döngüsü
     * 'while' kelimesinden sonra gelen parantez içerisinde koşul ifadesi yer alır.
     */

    // Kullanım
    bool test = true;
    while(test /*koşul ifadesi*/)
    {
        // komut ifadesi
        test = false;
    }

    /* Do - While döngüsü
     * 'do while' döngülerinin çalışma şekli, 'while' döngüsü ile aynıdır.
     * fakat 'do while' döngüsünde koşul sonda bulunacağı için
     * önce döngü gövdesi sonra koşul ifadesi icra edilir.,
     */

    // Kullanım
    test = true;
    do 
    {
        // komut ifadesi
        test = false;
    }while (test /*koşul ifadesi*/);

    /* For döngüsü
     * 'for' döngüsünde koşul gerçekleştiği sürece, 'for' döngüsü içerisindeki
     * komutlar artırma ya da azaltma değerleri kadar tekrarlanır. 
     */

    // Kullanım
    for (int i = 0 /*ilk değer atamaları*/; i < 10 /*koşul ifadesi*/; i++ /*artırma veya azaltma değeri*/)
    {
        // komut ifadesi
        cout << "İ değeri: " << i << endl;
    }
}