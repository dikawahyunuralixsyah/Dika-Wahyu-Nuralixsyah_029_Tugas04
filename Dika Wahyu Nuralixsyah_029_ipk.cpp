#include <iostream>
#include <conio.h>
using namespace std;

main()
{
	int semester, i=1;
	float nilai, ratarata, jumlah=0;
	
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
	
getch();
	
}
