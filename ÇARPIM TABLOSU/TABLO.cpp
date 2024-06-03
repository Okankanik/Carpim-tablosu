#include <iostream>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");

	int sayi;
	char yanit;
	cout << "**ISTEDIGINIZ KATMANDA CARPIM TABLOSU**" << endl;
yenidenal:
	cout << "CARPIM TABLOSUNU GORMEK ISTEDIGINIZ SAYIYI GIRINIZ = " << " "; cin >> sayi; cout << endl;

	cout << "*** CARPIM TABLOSU *** " << endl;

	for (int i = 0; i <= 10; i++)
	{
		cout << sayi << " " << "*" << " " << i << " = " << sayi * i << endl;
		cout << endl;
	}
	cout << "DEVAM ETMEK ISTER MISINIZ ?? - EVET ISE 'e'|'E'  HAYIR ISE 'h'|'H' TUSLAYINIZ = " << " "; cin >> yanit; cout << endl;
	if ((yanit == 'e') || (yanit == 'E'))
	{
		goto yenidenal;
	}
	if ((yanit == 'h') || (yanit == 'H'))
	{
		cout << "** BIZI TERCIH ETTIGINIZ ICIN TESEKKURLER ** " << endl;
	}

	return 0;
}