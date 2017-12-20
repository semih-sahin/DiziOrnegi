#include <iostream>
#include <conio.h>
using namespace std;
/*	SEMIH SAHIN - ELEMAN SAYISI GIRILEN BIR DIZIYE KULLANICININ GIRDIGI SADECE POZITIF TAMSAYILARI DIZIYE AKTARAN PROGRAM	*/

int main(){
	int elemanSayisi, sayi, j=0;
	A10:;
	cout << "Dizinin eleman sayisini giriniz: ";
	cin >> elemanSayisi;
	if (elemanSayisi<=0){
		system("cls");
		cout << "Lutfen dizi eleman sayisini pozitif bir tamsayi olarak giriniz.\n";
		goto A10;
	}
	system("cls");
	int dizi[elemanSayisi];
	cout << elemanSayisi << " elemanli bir dizi olusturuldu!\n" << endl;
	for(int i=0; i<elemanSayisi; i++){
		A20:;
		cout << "Dizinin " << i+1 << ". elemanini giriniz: ";
		cin >> sayi;
		if (sayi<=0){
			cout << "Girdiginiz sayi pozitif olmadigindan dizinin " << i+1 << ". elemanina atanmadi!\n";
			goto A20;
		}
		dizi[i]=sayi;
	}
	system("cls");
	cout << "Dizinin tum elemanlari doldu!\n";
	while (j<elemanSayisi){
		cout << "Dizinin " << j+1 << ". elemani : " << dizi[j] << endl;
		j++;
	}
	getch();
	return 0;
}
