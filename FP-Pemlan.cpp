#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct pasien{
	int nomor_kamar;
	int id;
	char nama[20];
	char penyakit[20];
	char jenis_kamar[4];
	char date[10];
};
 main(){
 	struct pasien pa[30];
	int menu =-1;
	while(menu!=5){
	printf("=======================================\n");
	printf("    APLIKASI PENDATAAN RUMAH SAKIT \n");
	printf("=======================================\n");
	printf(" 1. Tambah Data \n");
	printf(" 2. Daftar Pasien\n");
	printf(" 3. Ubah Data\n");
	printf(" 4. Cari Data\n");
	printf(" 5. Exit \n");
	printf("======================================\n");
	printf(" Masukkan Pilihan : ");
	scanf("%d",&menu);
	printf ("======================================\n");
	
		switch(menu){
			case 1:
				break;
			}
		}
}
