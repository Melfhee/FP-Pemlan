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



void bubblesort(struct pasien pa[30],int n){
	int loop1,loop2,i,j;
	struct pasien temp;
		for(loop1=0;loop1<n-1;loop1++){
							for(loop2=0;loop2<n-loop1-1;loop2++){
								if(pa[loop2].id>pa[loop2+1].id){
								
									temp=pa[loop2];
									pa[loop2]=pa[loop2+1];
									pa[loop2+1]=temp;
								}
							}
					}
						
}

void view(int n, struct pasien pa[]){
	int i;
		printf("===================================\n");
		printf("		Daftar Data Pasien \n");
		printf("===================================\n");
	for(i=0;i<n;i++){
		printf("Id Pasien		: %d\n",pa[i].id);
		printf("Nama Pasien		: %s\n",pa[i].nama);
		printf("Penyakit Pasien	: %s\n",pa[i].penyakit);
		printf("Jenis Kamar		: %s\n",pa[i].jenis_kamar);
		printf("Nomor Kamar		: %d\n",pa[i].nomor_kamar);
		printf("Tanggal Masuk	: %s\n",pa[i].date);
		printf("----------------------------------\n");
	}
}
void bubblesortnama(struct pasien pa[30],int n){
	int loop1,loop2,i,j;
	struct pasien temp;
		for(loop1=0;loop1<n-1;loop1++){
							for(loop2=0;loop2<n-loop1-1;loop2++){
								if(strcmp(pa[loop2].nama,pa[loop2+1].nama)>0){
									temp=pa[loop2];
									pa[loop2]=pa[loop2+1];
									pa[loop2+1]=temp;
								}
							}
					}
						
}

void bubblesortjk(struct pasien pa[30],int n){
	int loop1,loop2,i,j;
	struct pasien temp;
		for(loop1=0;loop1<n-1;loop1++){
							for(loop2=0;loop2<n-loop1-1;loop2++){
								if(strcmp(pa[loop2].jenis_kamar,pa[loop2+1].jenis_kamar)>0){
									temp=pa[loop2];
									pa[loop2]=pa[loop2+1];
									pa[loop2+1]=temp;
								}
							}
					}
						
}
void bubblesortjp(struct pasien pa[30],int n){
	int loop1,loop2,i,j;
	struct pasien temp;
		for(loop1=0;loop1<n-1;loop1++){
							for(loop2=0;loop2<n-loop1-1;loop2++){
								if(strcmp(pa[loop2].penyakit,pa[loop2+1].penyakit)>0){
											temp=pa[loop2];
											pa[loop2]=pa[loop2+1];
											pa[loop2+1]=temp;
									}
							}
					}
						
}

void bubblesortnk(struct pasien pa[30],int n){
	int loop1,loop2,i,j;
	struct pasien temp;
		for(loop1=0;loop1<n-1;loop1++){
							for(loop2=0;loop2<n-loop1-1;loop2++){
								if(pa[loop2].nomor_kamar>pa[loop2+1].nomor_kamar){
								
									temp=pa[loop2];
									pa[loop2]=pa[loop2+1];
									pa[loop2+1]=temp;
								}
							}
					}
						
}
void update(struct pasien pa[30],int n,int u){
	int i;
	for(i=0;i<n;i++){
		if(pa[i].id==u){
			printf("Masukkan Id Pasien			: ");
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
		}
	}
	
}


int search1(struct pasien pa[30],int n,int i,int id){
	int flag=-1;
	if(pa[i].id==id){
		printf("Id Pasien		: %d\n",pa[i].id);
		printf("Nama Pasien		: %s\n",pa[i].nama);
		printf("Penyakit Pasien	: %s\n",pa[i].penyakit);
		printf("Jenis Kamar		: %s\n",pa[i].jenis_kamar);
		printf("Nomor Kamar		: %d\n",pa[i].nomor_kamar);
		printf("Tanggal Masuk	: %s\n",pa[i].date);
		flag++;
	}else{
		if (i<n){
			return search1(pa,n,(i+1),id);
		}
	}
	
	if(flag==-1){
		printf("tidak ada");
	}
	
}

int search2(struct pasien pa[30],int n,int i,char nama[20]){
	int flag=-1;
	
	if(strcmp(pa[i].nama,nama)==0){
		
		printf("Id Pasien		: %d\n",pa[i].id);
		printf("Nama Pasien		: %s\n",pa[i].nama);
		printf("Penyakit Pasien	: %s\n",pa[i].penyakit);
		printf("Jenis Kamar		: %s\n",pa[i].jenis_kamar);
		printf("Nomor Kamar		: %d\n",pa[i].nomor_kamar);
		printf("Tanggal Masuk	: %s\n",pa[i].date);
		flag++;
		
	}else{
		if (i<n){ 
			return search2(pa,n,(i+1),nama);
		}
	}
	
	if(flag==-1){
		printf("tidak ada");
	}
	
}


int search3(struct pasien pa[30],int n,int i,int no){
	int flag=-1;
	
	if(pa[i].nomor_kamar==no){		
		printf("Id Pasien		: %d\n",pa[i].id);
		printf("Nama Pasien		: %s\n",pa[i].nama);
		printf("Penyakit Pasien	: %s\n",pa[i].penyakit);
		printf("Jenis Kamar		: %s\n",pa[i].jenis_kamar);
		printf("Nomor Kamar		: %d\n",pa[i].nomor_kamar);
		printf("Tanggal Masuk	: %s\n",pa[i].date);
		flag++;
		
	}else{
		if (i<n){
			return search3(pa,n,(i+1),no);
		}
	}
	
	if(flag==-1){
		printf("tidak ada");
	}
}



 main(){
 	struct pasien pa[30];
	int menu =-1, i=0, urutan,cari1,u;
	char cari2[20];
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
							case 1: bubblesort(pa,i);
									view(i,pa);
									break;
							case 2: bubblesortnama(pa,i);
									view(i,pa);
									break;
							case 3: bubblesortjp(pa,i);
									view(i,pa);
									break;
							case 4: bubblesortjk(pa,i);
									view(i,pa);
									break;
							case 5: bubblesortnk(pa,i);
									view(i,pa);
									break;
							default : printf("Pilih 1,2,3,4 atau 5");
									  break;
				
				}
			}
				break;
			
			case 3 : 
				printf("Masukkan ID yang ingin di ubah: ");
				scanf("%d",&u);
				
				update(pa,i,u);
				
				break;
			
			case 4 :
					if(i==0){
					printf("\ndata kosong");
					}else{
						printf("=======================================\n");
						printf("   Searching Data Pasien Berdasarkan \n");
						printf("=======================================\n");
						printf(" 1. ID Pasien \n");
						printf(" 2. Nama Pasien\n");
						printf(" 3. Nomor Kamar \n");
						printf("======================================\n");
						printf(" Masukkan Pilihan : ");
						scanf("%d",&urutan);
						printf ("======================================\n");
						switch(urutan){
							case 1 : printf("Masukkan ID yang Anda Cari : ");
									 scanf("%d",&cari1);
									 search1(pa,i,0,cari1);
									 break;
							case 2 :
									printf("Masukkan nama yang Anda Cari : ");
									scanf("%s",&cari2);
									search2(pa,i,0,cari2);
									break;
							case 3 : 
									printf("Masukkan nomor kamar yang Anda Cari : ");
									scanf("%d",&cari1);
									search3(pa,i,0,cari1);
									break;
								}
						}
						break;
			case 5: printf("Terima Kasih\n iqbal alfiansyah 18081010123\n Melinda Shilatil Fauziyah 18081010122");
				break;
			}
		}
}
