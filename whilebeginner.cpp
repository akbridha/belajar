#include <stdio.h>

int main()
{
	int menu, harga , jumlah , total, uang;
	int hargaAyamGoreng = 16000;
	int hargaAyamBakar = 20000;
	int hargaItikGoreng = 25000;
	int hargaEsTeh = 2000;
	int hargaEsJeruk = 5000;
	
	bool kar= true ;
	char opsi;

	
	while(kar){
	
		printf("--daftar menu--\n");
		printf("1.ayam goreng : %d\n",hargaAyamGoreng);
		printf("2.ayam bakar  : %d\n",hargaAyamBakar);
		printf("3.itik goreng : %d\n",hargaItikGoreng);
		printf("4.es teh      : %d\n",hargaEsTeh);
		printf("5.es jeruk    : %d\n",hargaEsJeruk);

		
		//put ur fuccin code here












		printf("\n Ingin lanjut memesan ?[y/t] \n");
		scanf(" %c",&opsi);
		if(opsi == 'y'){
			printf("\n lanjut \n");
		}else if(opsi == 't'){
			printf("stop\n");
			kar = false;
		}
		
	}

}
	
