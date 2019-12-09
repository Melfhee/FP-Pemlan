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
	int menu =-1, i=0, urutan;
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
			case 1: 	printf("Masukkan Id Pasien			: ");
						scanf("%d",&pa[i].id);
						printf("\nMasukan Nama Pasien		: ");
						scanf("%s",&pa[i].nama);
						printf("\nMasukan Penyakit Pasien	: ");
						scanf("%s",&pa[i].penyakit);
						printf("\nMasukan Nomor Kamar Pasien: ");
						scanf("%d",&pa[i].nomor_kamar);
						printf("\nMasukan Jenis Kamar		: ");
						scanf("%s",&pa[i].jenis_kamar);
						printf("\nMasukan Tanggal Masuk		: ");
						scanf("%s",&pa[i].date);
						i++;
						system("cls");
				break;
			case 2 : if(i==0){
					printf("\ndata kosong");
					}else{
						printf("=======================================\n");
						printf("    Pengurutan Data Pasien Berdasarkan \n");
						printf("=======================================\n");
						printf(" 1. ID Pasien \n");
						printf(" 2. Nama Pasien\n");
						printf(" 3. Jenis Penyakit\n");
						printf(" 4. Jenis Kamar\n");
						printf(" 5. Nomor Kamar \n");
						printf("======================================\n");
						printf(" Masukkan Pilihan : ");
						scanf("%d",&urutan);
						printf ("======================================\n");
						switch(urutan){
							case 1: 
							break;
				}
			}
			}
		}
}
