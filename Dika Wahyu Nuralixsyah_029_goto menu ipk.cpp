#include <iostream>
#include <conio.h>
using namespace std;

main()
{
	int semester, i=1;
	char ulang;
	float nilai, ratarata, jumlah=0;
menu:	
	cout<< "|        Menghitung IPK      |"<<endl;
	cout<< "Masukkan Jumlah Semester= ";
	cin>> semester;
	while(i<=semester)
	{
		cout<<"Masukkan nilai(Angka) pada semester "<<i<<"(A=4 B=3 C=2 D=1)=";
		cin>>nilai;
		jumlah=jumlah+nilai;
		ratarata=jumlah/semester;
		i++;	
	}
	cout<< "IPK= "<< ratarata;
	cout<< endl;
cout << "Apakah Anda Ingin Menghitung Ulang [y/t]? "; cin >> ulang;
	if (ulang == 'y' || ulang == 'Y'){
		system ("cls");
		goto menu;
	}
	else if (ulang == 't' || ulang == 'T'){
		cout << "Terima Kasih" << endl;
	}
getch();
	
}
