#include<iostream>
#include<conio.h>
using namespace std;

main()
{
	int harga=0, n, hrg, i=1, diskon;
	
	cout<<"           Menghitung Total Harga Barang             "<<endl;
	cout<<"Masukkan jumlah barang= ";
	cin>>n;
	cout<<endl;
	
	for (i=1; i<=n; i++){

	
	cout<<"harga barang ke "<<i<<"= ";
	cin>>hrg;
	harga=hrg+harga;
}
	;if (harga >500000){
		diskon=(harga*10/100);
	}
	else if(harga >=200000){
		diskon=(harga*5/100);
		
	}
	else {
		diskon=0;
	}
	cout<<endl;
	cout<<"total harga barang asli = RP "<<harga<<endl;
	cout<<"Total harga barang setelah didiskon = RP "<<harga-diskon<<endl;
	getch ();
}
