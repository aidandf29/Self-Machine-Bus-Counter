//PROYEK !
//Faris Hassan Aly Firman
//Muhammad Aidan

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <stdbool.h> 

/*

0 = black
1 = blue
2 = green
3 = aqua
4 = red
5 = purple
6 = yellow
7 = white
8 = gray
9 = light blue
A = light green
B = light aqua
C = light red
D = light purple
E = light yellow
F = bright white

*/

#define RED_TEXT "\x1B[31m"
#define RESET "\x1b[0m"
#define BROWN_TEXT "\x1B[38;2;89;60;31m"
#define GRAY_TEXT "\x1B[38;2;80;80;80m"
#define LAWNGREEN_TEXT "\x1B[38;2;124;252;0m"
#define DARKGREEN_TEXT "\x1B[38;2;0;97;62m"
#define BLUE_TEXT "\x1B[38;2;0;170;238m"
#define PINK_TEXT "\x1B[38;2;255;105;180m"
#define GREEN_TEXT "\x1B[32m"


bool arr[2] = {true, false};
static bool condition; 
static int jumlahtiket;
static int hargatiket;
static int tujuanbus;
static int jenisbus;
int i, j;
long int Harga[] = {70000, 85000, 110000, 225000, 255000, 370000};
void arrow(int posisiAsli,int posisiArrow);


void pesantiket();
void info();
void pembayaran();
void print();
void keluar();
void cekdata();
int kelas(int A);
void cetak(char kata[],int n);
void infodata();

char A[7] = "BANDUNG";
char B[11] = "TASIKMALAYA";
char C[6] = "BANTEN";
char D[10] = "JOGJAKARTA";
char E[8] = "SEMARANG";
char F[8] = "SURABAYA";
char Eko[7] = "EKONOMI";
char Bis[6] = "BISNIS";
char Eks[9] = "EKSKLUSIF";

int main() {
	system ("cls");	
	system ("Color F4");
		
	printf (RED_TEXT"\n\n\t\t\t              \\        / ___ |  ___  ___         ___\n");                                                                                                                                  
    printf ("\t\t\t               \\  /\\  / |___|| /    /   \\ /\\/\\  |___|\n");                                                                                                                                       
    printf ("\t\t\t                \\/  \\/  \\___ | \\___ \\___//    \\ \\___\n"RESET);
	Sleep(8000);
menu :
	system ("cls");
	int position = 1;
	int keyPressed = 0;
	system ("Color F4");
 	printf("\t\t");
	for(i=0;i<49;i++) {
	printf("=");
  	Sleep(15);
 	} 
	printf("\n\t\t|\t\tPemesanan Tiket Bus\t\t|");
	printf("\n\t\t|\t\t     AF TRAVEL\t\t\t|\n");
	printf("\t\t");
	for(i=0;i<49;i++) {
	printf("=");
	Sleep(15);
	}
	printf("\n\nCABANG JAKARTA (KP. RAMBUTAN)\n");
 
	while (keyPressed != 13) {
		system ("cls");
		system ("Color F4");
		printf("\t\t");
		for(i=0;i<49;i++) {
			printf("=");
		} 
		printf("\n\t\t|\t\tPemesanan Tiket Bus\t\t|");
		printf("\n\t\t|\t\t     AF TRAVEL\t\t\t|\n");
		printf("\t\t");
		for(i=0;i<49;i++) {
			printf("=");
 		}
 		
 		
		printf("\n\nCABANG JAKARTA (KP. RAMBUTAN)\n\n");
		printf("Select\n");
		arrow(1,position); printf("1. Pesan Tiket\n");
		arrow(2,position); printf("2. Info\n");
		arrow(3,position); printf("3. Pembayaran\n");
		arrow(4,position); printf("4. Print Tiket\n");
		arrow(5,position); printf("5. Exit\n");
 	
		keyPressed = getch();
		if(keyPressed == 80 && position != 5) {
			position++;
		}else if (keyPressed == 72 && position != 1) {
			position--;
		} else {
			position = position;
		}
	}

	switch(position) {
		case 1:
			position == '1';
			pesantiket();
			condition = arr[0];
			goto menu;
			break;
		case 2:
			position == '2';
			info();
			goto menu;
			break;
		case 3:
			position == '3';
			pembayaran();
			goto menu;
			break;
		case 4:
			position == '4';
			print();
			goto menu;
			break;
		case 5:
			position == '5';
			keluar();
			break;
	}
}

void arrow(int posisiAsli,int posisiArrow) { //menampilkan arrow di main menu
	if(posisiAsli == posisiArrow){
		printf("--> -");
	} else{
		printf("     ");
	}
}

void pesantiket() {
	int position = 1;
	int keyPressed = 0;
	if(condition == true){
		printf("\n\nAnda sudah melakukan pemesanan tiket!");
  		Sleep(1000);
  		printf("\nSilahkan melakukan pembayaran dan mencetak tiket anda terlebih dahulu\njika anda ingin memesan tiket lagi");
 		getch();
 	} else {
 		system("cls");

		printf("\n\n\t\t|\t\tInfo Harga\t\t|\n\n");
	 	printf("\n\tTujuan\t\tEkonomi\t\tBisnis\t\tEksekutif");
		printf("\n\tBANDUNG\t\t70.000\t\t100.000\t\t130.000");
		printf("\n\tTASIKMALAYA\t85.000\t\t115.000\t\t145.000");
		printf("\n\tBANTEN\t\t110.000\t\t140.000\t\t170.000");
		printf("\n\tJOGJAKARTA\t225.000\t\t255.000\t\t285.000");
		printf("\n\tSEMARANG\t255.000\t\t285.000\t\t315.000");
		printf("\n\tSURABAYA\t370.000\t\t400.000\t\t430.000");
		printf("\n\nklik apa saja untuk lanjut");
		getch();
		system("cls");
 		
 		pesan:
 		while (keyPressed != 13) {
  			system("cls");
  			printf("\n\n\tMENU PEMESANAN TIKET\n");
  			printf("\n\nPilih tujuan anda :\n");
  			arrow(1,position); printf("1. Bandung\n");
			arrow(2,position); printf("2. Tasikmalaya\n");
			arrow(3,position); printf("3. Banten\n");
			arrow(4,position); printf("4. Jogjakarta\n");
 			arrow(5,position); printf("5. Semarang\n");
  			arrow(6,position); printf("6. Surabaya\n");
 			keyPressed = getch();
 			if(keyPressed == 80 && position != 6) {
				position++;
			}else if (keyPressed == 72 && position != 1) {
				position--;
			} else {
  				position = position;
  			}
  		}
		switch(position) {
  			case 1:
  				position == '1';
   				tujuanbus = 0;
  				hargatiket = kelas(tujuanbus);
   				break;
			case 2:
   				position == '2';
   				tujuanbus = 1;
  				hargatiket = kelas(tujuanbus);
				break;
			case 3:
   				position == '3';
   				tujuanbus = 2;
  				hargatiket = kelas(tujuanbus);
   				break;
  			case 4:
  				position == '4';
   				tujuanbus = 3;
  				hargatiket = kelas(tujuanbus);
	   			break;
			case 5:
				position == '5';
   				tujuanbus = 4;
  				hargatiket = kelas(tujuanbus);
	   			break;
	   		case 6:
	   			position == '6';
   				tujuanbus = 5;
  				hargatiket = kelas(tujuanbus);
	   			break;
		}

	  	printf("\n\nPress any key to continue . . .");
	  	getch();
	}
}

void pembayaran() { //menampilkan menu pembayaran
	int position = 1;
	int keyPressed = 0;
	if(condition == false) {
		printf("\n\nLakukan pemesanan tiket terlebih dahulu!");
		getch();
	} else {
		system("cls");
		printf("\t\n\nMENU PEMBAYARAN\n\n");
		cekdata();
		printf("\n\nPress any key to continue . . .");
		getch();
		while (keyPressed != 13) {
  			system("cls");
  			printf("\n\n\tMENU PEMBAYARAN\n");
  			printf("\n\nPilih metode pembayaran :\n");
  			arrow(1,position); printf("1. Swipe Card\n");
			arrow(2,position); printf("2. Transfer Virtual Account\n");
 			keyPressed = getch();
 			if(keyPressed == 80 && position != 2) {
				position++;
			}else if (keyPressed == 72 && position != 1) {
				position--;
			} else {
  			position = position;
  			}
  		}
		switch(position) {
  			case 1:
  				position == '1';
  			 	system ("cls");  				
  				system("COLOR F4");
		
		
				printf(BROWN_TEXT"\n\n\n\t\t\tSilahkan swipe card\n\n");
				printf("\t\t====================================\n");
				printf("\t\t||||||||||||||||||||||||||||||||||||\n\n");
				printf("\t\t                 ^^^\n");
				printf("\t\t                 |||\n\n"RESET);
		
				system("COLOR F4");

				printf(DARKGREEN_TEXT"\t\t    ============================\n");
				printf("\t\t    ||                        ||\n");
				printf("\t\t    ||                        ||\n");
				printf("\t\t    ||        M-BANKING       ||\n");                   
				printf("\t\t    ||                        ||\n");                   
				printf("\t\t    ||                        ||\n");                   
				printf("\t\t    ============================\n");
			
				printf("\n\n\t\t\t    MEMPROSES...");
				getch();
				system("cls");
				
   				break;
			case 2:
   				position == '2';
   				system ("cls");
		   		
	   			srand(time(NULL));
	   			printf("\n\n\t\t\tSilahkan Transfer\n\n");
				printf("\t\t\t %d",  rand());
				printf(" %d",  rand());
				printf(" %d",  rand());
   						
				break;
		}
  	printf("\n\nPress any key to continue . . .");
  	getch();
	}
}

void keluar() { //fungsi untuk keluar
	system("cls"); 
	printf("EXIT PROGRAM . . .\n");
	getch();
	printf("\nTERIMA KASIH TELAH MENGGUNAKAN JASA KAMI");
}

void cekdata() { //fungsi untuk mengecek data pemesan tiket
	printf("\n\tDATA PEMESANAN \n\n");
	printf("TUJUAN\t: ");
	switch(tujuanbus) {
		case 0:
			cetak(A, 7);
			break;
		case 1:
			cetak(B, 11);
			break;
		case 2:
			cetak(C, 6);
			break;
		case 3:
			cetak(D, 10);
			break;
		case 4:
			cetak(E, 8);
			break;
		case 5:
			cetak(F, 8);
			break;
	}
	printf("\nKELAS BUS\t: ");
	switch (jenisbus) {
		case 1:
			cetak(Eko, 7);
			break;
		case 2:
			cetak(Bis, 6);
			break;
		case 3:
			cetak(Eks, 9);
			break;
	}
	printf("\nJUMLAH TIKET\t: %d", jumlahtiket);
	printf("\nTOTAL HARGA\t: Rp%d", hargatiket);
}



int kelas(int A)	{
 int i, total, jenis;
 int JenisBus[3] = {0, 30000, 60000};
 int position = 1;
 int keyPressed = 0;
 while (keyPressed != 13){
 	 system("cls");
     printf("\n\nPilih kelas bus :\n");
     arrow(1,position); printf("1. Ekonomi\n");
   arrow(2,position); printf("2. Bisnis\n");
   arrow(3,position); printf("3. Eksekutif\n");
    keyPressed = getch();
    if(keyPressed == 80 && position != 3) {
    position++;
   }else if (keyPressed == 72 && position != 1) {
    position--;
   } else {
     position = position;
     }
    }
  switch(position) {
     case 1:
      position == '1';
       jenis = JenisBus[0];
       jenisbus = 1;
       break;
   case 2:
       position == '2';
       jenis = JenisBus[1];
       jenisbus = 2;
    break;
   case 3:
       position == '3';
       jenis = JenisBus[2];
       jenisbus = 3;
       break;
    }
 pilih:
 printf("\nJumlah tiket yang ingin dipesan : ");scanf("%d", &jumlahtiket);
 if(jumlahtiket <= 0) {
  printf("\n\n\t\tHanya masukan angka bernilai lebih dari nol!");
  goto pilih;
 } else
 total = (Harga[A] + jenis)*jumlahtiket;
 return total;
}

void cetak(char kata[],int n) {
	for(i=0;i<n;i++) {
		printf("%c", kata[i]);
	}
}

void info() {
	system("cls");
	system("COLOR F4");
	printf("\t\t\t\tINFO PENGGUNAAN PROGRAM\n\n\n");
	printf("\n\t\t\t");
	printf("\n\t\t\t  __");
	printf("\n\t\t\t    \\");
	printf("\n\t\t\t     \\_______________________");
	printf("\n\t\t\t      \\                     \\");
	printf("\n\t\t\t       \\                     \\");
	printf("\n\t\t\t        \\                     \\");
	printf("\n\t\t\t         \\                     \\");
	printf("\n\t\t\t          \\_____________________\\");
	printf("\n\t\t\t              ()            ()");
	printf("\n\n\n\t\t\t\t       |-------|");
	printf("\n\t\t\t\t       |   1   |");
	printf("\n\t\t\t\t       |-------|");

	printf("\n\n\t\t\t\t     Pesan tiket mu");
	printf("\n\n\t\t\t\t     press any key to go next step");

	getch();
	system("cls");
	system("COLOR FA");
	printf("\n\n\t\t\t |---------------------------------------|");
	printf("\n\t\t\t |\t\t\t                 |");
	printf("\n\t\t\t |\t\t\t                 |");
	printf("\n\t\t\t |\t\t____    _____\t    \t |");
	printf("\n\t\t\t |\t\t|___\\  |    |\t    \t |");
	printf("\n\t\t\t |\t\t|   \\  |____|\t      \t |");
	printf("\n\t\t\t |\t\t|    \\ |\t         |");
	printf("\n\t\t\t |\t\t\t            \t |");
	printf("\n\t\t\t |\t\t\t            \t |");
	printf("\n\t\t\t |\t\t\t                 |");
	printf("\n\t\t\t |---------------------------------------|\n\n");

	printf("\n\n\n\n\t\t\t\t        |-------|");
	printf("\n\t\t\t\t        |   2   |");
	printf("\n\t\t\t\t        |-------|");

	printf("\n\n\t\t\t\t       Bayar tiket mu");
	printf("\n\n\t\t\t\t     press any key to go next step");


	getch();
	system("cls");
	system("COLOR F0");
	printf("\n\t\t\t\t          1111111");
	printf("\n\t\t\t\t         1       1");
	printf("\n\t\t\t\t         1       1");
	printf("\n\t\t\t\t    111111       111111");
	printf("\n\t\t\t\t    1111111111111111111");
	printf("\n\t\t\t\t    1111111111111111111");
	printf("\n\t\t\t\t    1111111111111111111");
	printf("\n\t\t\t\t    1111           1111");
	printf("\n\t\t\t\t    1111  -------  1111");
	printf("\n\t\t\t\t      11  -------  11  ");
	printf("\n\t\t\t\t      11           11  ");
	printf("\n\t\t\t\t        11111111111");

	printf("\n\n\n\n\n\t\t\t\t        |-------|");
	printf("\n\t\t\t\t        |   3   |");
	printf("\n\t\t\t\t        |-------|");

	printf("\n\n\t\t\t\t       Print tiket mu");
	printf("\n\n\t\t\t\t     press any key to go to menu");  
	getch();
}



void print() { //fungsi untuk mencetak tiket
	if(condition == false){
		printf("\n\nLakukan pemesanan tiket terlebih dahulu!");
		getch();
	} else {
		system("cls");
		cekdata();
		printf("\nINI TIKET ANDA");
		printf("\n\n\t\t"RED_TEXT" Silahkan klik apa saja untuk Print Tiket "RESET"");

		getch();
		system ("cls");
		system("COLOR 07");

		printf("\t\nSilahkan Print sebanyak %d : \n\n", jumlahtiket);

		printf(""RED_TEXT"==========================================="RESET"\n");
		printf(""RED_TEXT"||"RESET""BLUE_TEXT"    __      ____                        "RESET""RED_TEXT"||"RESET"\n");
		printf(""RED_TEXT"||"RESET""BLUE_TEXT"   /  \\   |                             "RESET""RED_TEXT"||"RESET"\n");
		printf(""RED_TEXT"||"RESET""BLUE_TEXT"  /____\\  |____                         "RESET""RED_TEXT"||"RESET"\n");
		printf(""RED_TEXT"||"RESET""BLUE_TEXT" /      \\ |                             "RESET""RED_TEXT"||"RESET"\n");
		printf(""RED_TEXT"||"RESET""BLUE_TEXT"                                        "RESET""RED_TEXT"||"RESET"\n");
		printf(""RED_TEXT"||"RESET""BLUE_TEXT"                 ____        __         "RESET""RED_TEXT"||"RESET"\n");
		printf(""RED_TEXT"||"RESET""BLUE_TEXT"                 |___} |  | (__         "RESET""RED_TEXT"||"RESET"\n");
		printf(""RED_TEXT"||"RESET""BLUE_TEXT"                 |___} |__|  __)        "RESET""RED_TEXT"||"RESET"\n");
		printf(""RED_TEXT"||"RESET""BLUE_TEXT"                                        "RESET""RED_TEXT"||"RESET"\n");
		printf(""RED_TEXT"||"RESET""BLUE_TEXT"                                        "RESET""RED_TEXT"||"RESET"\n");
		printf(""RED_TEXT"===========================================\n"RESET);
		
		printf("\n\n\t\t"RED_TEXT"===========");
		printf("\n\t\t|| "RESET"Print"RED_TEXT" ||");
		printf("\n\t\t==========="RESET"");

		getch();
		condition = arr[1];
	}
}
