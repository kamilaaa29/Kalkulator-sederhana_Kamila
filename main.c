#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265359

// Fungsi untuk membuat garis tabel
void garisAtas() {
    printf("\t\t\t\t\t+========================================================+\n");
}
void garisTengah() {
    printf("\t\t\t\t\t+========================================================+\n");
}
void garisBawah() {
    printf("\t\t\t\t\t+========================================================+\n");
}
void garisPemisah() {
    printf("\t\t\t\t\t+--------------------------------------------------------+\n");
}
void clearScreen() {        // buat membersihkan layar
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
void clearInputBuffer() {    // utk membersihkan sisa input
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
void tampilkanHeader(const char* judul) {       // utk menampilkan header hasil
    garisAtas();
    printf("\t\t\t\t\t|              %-42s|\n", judul);
    garisTengah();
}
void tampilkanBaris(const char* label, double nilai) {      // buat nampilkan data angka
    printf("\t\t\t\t\t| %-25s : %20.2lf       |\n", label, nilai);
}
void tampilkanBarisString(const char* label, const char* nilai) {       // utk nampilkan data teks
    printf("\t\t\t\t\t| %-25s : %20s          |\n", label, nilai);
}
void kubus() { //fungsi perhitungan kubus
    double s;  //variabel suisi

    printf("\t\t\t\t\t\n");
    garisAtas();
    printf("\t\t\t\t\t|                    INPUT DATA KUBUS                    |\n");
    garisBawah();
    printf("\t\t\t\t\t Masukkan sisi kubus: ");
    scanf("%lf", &s);     // input sisi

    printf("\n");
    tampilkanHeader("HASIL PERHITUNGAN KUBUS");
    tampilkanBaris("Sisi", s);
    garisPemisah();
    tampilkanBaris("Volume", s * s * s);             //rms hitung volume
    tampilkanBaris("Luas Permukaan", 6 * s * s);     // hitung luas permukaan
    garisBawah();
}

void balok() {
    double p, l, t;

    printf("\t\t\t\t\t \n");
    garisAtas();
    printf("\t\t\t\t\t|                    INPUT DATA BALOK                    |\n");
    garisBawah();
    printf("\t\t\t\t\t Masukkan panjang : ");
    scanf("%lf", &p);     // input pnjang
    printf("\t\t\t\t\t Masukkan lebar   : ");
    scanf("%lf", &l);     //input lebar
    printf("\t\t\t\t\t Masukkan tinggi  : ");
    scanf("%lf", &t);     //input tinggi

    printf("\n");
    tampilkanHeader("HASIL PERHITUNGAN BALOK");
    tampilkanBaris("Panjang", p);
    tampilkanBaris("Lebar", l);
    tampilkanBaris("Tinggi", t);
    garisPemisah();
    tampilkanBaris("Volume", p * l * t); //menghitung volume
    tampilkanBaris("Luas Permukaan", 2 * (p*l + p*t + l*t));
    garisBawah();
}

void prismaSegitiga() {   //fungsi perhitungan prisma
    double alas, tinggiSegitiga, tinggiPrisma, sisiMiring;

    printf("\t\t\t\t\t\n");
    garisAtas();
    printf("\t\t\t\t\t|               INPUT DATA PRISMA SEGITIGA               |\n");
    garisBawah();
    printf("\t\t\t\t\t Masukkan alas segitiga        : ");
    scanf("%lf", &alas);
    printf("\t\t\t\t\t Masukkan tinggi segitiga      : ");
    scanf("%lf", &tinggiSegitiga);
    printf("\t\t\t\t\t Masukkan sisi miring segitiga : ");
    scanf("%lf", &sisiMiring);
    printf("\t\t\t\t\t Masukkan tinggi prisma        : ");
    scanf("%lf", &tinggiPrisma);

    double luasAlas = 0.5 * alas * tinggiSegitiga;
    double kelilingAlas = alas + 2 * sisiMiring;

    printf("\n");
    tampilkanHeader("HASIL PERHITUNGAN PRISMA SEGITIGA");
    tampilkanBaris("Alas Segitiga", alas);
    tampilkanBaris("Tinggi Segitiga", tinggiSegitiga);
    tampilkanBaris("Tinggi Prisma", tinggiPrisma);
    garisPemisah();
    tampilkanBaris("Luas Alas", luasAlas);
    tampilkanBaris("Volume", luasAlas * tinggiPrisma);
    tampilkanBaris("Luas Permukaan", (2 * luasAlas) + (kelilingAlas * tinggiPrisma));
    garisBawah();
}

void limasSegiempat() {   //fungsi perhitungan limas
    double p, l, t, ts;

    printf("\t\t\t\t\t\n");
    garisAtas();
    printf("\t\t\t\t\t|              INPUT DATA LIMAS SEGIEMPAT                |\n");
    garisBawah();
    printf("\t\t\t\t\t Masukkan panjang alas : ");
    scanf("%lf", &p);
    printf("\t\t\t\t\t Masukkan lebar alas   : ");
    scanf("%lf", &l);
    printf("\t\t\t\t\t Masukkan tinggi limas : ");
    scanf("%lf", &t);
    printf("\t\t\t\t\t Masukkan tinggi sisi  : ");
    scanf("%lf", &ts);

    double luasAlas = p * l;
    double luasSisi = 2 * (0.5 * p * ts) + 2 * (0.5 * l * ts);

    printf("\n");
    tampilkanHeader("HASIL PERHITUNGAN LIMAS SEGIEMPAT");
    tampilkanBaris("Panjang Alas", p);
    tampilkanBaris("Lebar Alas", l);
    tampilkanBaris("Tinggi Limas", t);
    garisPemisah();
    tampilkanBaris("Luas Alas", luasAlas);
    tampilkanBaris("Volume", (luasAlas * t) / 3);
    tampilkanBaris("Luas Permukaan", luasAlas + luasSisi);
    garisBawah();
}

void kerucut() {  //fungsi perhitungan kerucut
    double r, t;  //variabel jari" dn tinggi

    printf("\t\t\t\t\t\n");
    garisAtas();
    printf("\t\t\t\t\t|                  INPUT DATA KERUCUT                    |\n");
    garisBawah();
    printf("\t\t\t\t\t Masukkan jari-jari : ");
    scanf("%lf", &r);
    printf("\t\t\t\t\t Masukkan tinggi    : ");
    scanf("%lf", &t);

    double s = sqrt(r*r + t*t); //hitung garis pelukis

    printf("\n");
    tampilkanHeader("HASIL PERHITUNGAN KERUCUT");
    tampilkanBaris("Jari-jari", r);
    tampilkanBaris("Tinggi", t);
    tampilkanBaris("Garis Pelukis", s);
    garisPemisah();
    tampilkanBaris("Volume", (PI * r * r * t) / 3);
    tampilkanBaris("Luas Permukaan", PI * r * (r + s));
    garisBawah();
}

void tabung() { //fungsiperhitungan tabung
    double r, t;

    printf("\t\t\t\t\t\n");
    garisAtas();
    printf("\t\t\t\t\t|                   INPUT DATA TABUNG                    |\n");
    garisBawah();
    printf("\t\t\t\t\t Masukkan jari-jari : ");
    scanf("%lf", &r);
    printf("\t\t\t\t\t Masukkan tinggi    : ");
    scanf("%lf", &t);

    printf("\n");
    tampilkanHeader("HASIL PERHITUNGAN TABUNG");
    tampilkanBaris("Jari-jari", r);
    tampilkanBaris("Tinggi", t);
    garisPemisah();
    tampilkanBaris("Volume", PI * r * r * t);
    tampilkanBaris("Luas Permukaan", 2 * PI * r * (r + t));
    garisBawah();
}

void bola() {  //fingsi perhitungan bola
    double r;

    printf("\t\t\t\t\t\n");
    garisAtas();
    printf("\t\t\t\t\t|                    INPUT DATA BOLA                     |\n");
    garisBawah();
    printf("\t\t\t\t\t Masukkan jari-jari : ");
    scanf("%lf", &r); //buat input jari" bola

    printf("\n");
    tampilkanHeader("HASIL PERHITUNGAN BOLA");
    tampilkanBaris("Jari-jari", r);
    garisPemisah();
    tampilkanBaris("Volume", (4.0 / 3.0) * PI * r * r * r);
    tampilkanBaris("Luas Permukaan", 4 * PI * r * r);
    garisBawah();
}

void aritmatika() {  //fungsi aritmatika dsar
    int pilih;       //variabel pilihan operasi
    double a, b, hasil;

    printf("\t\t\t\t\t\n");
    garisAtas();
    printf("\t\t\t\t\t|                 MENU ARITMATIKA DASAR                  |\n");
    garisTengah();
    printf("\t\t\t\t\t|  1. Penjumlahan                                        |\n");
    printf("\t\t\t\t\t|  2. Pengurangan                                        |\n");
    printf("\t\t\t\t\t|  3. Perkalian                                          |\n");
    printf("\t\t\t\t\t|  4. Pembagian                                          |\n");
    garisBawah();
    printf("\t\t\t\t\t Pilih operasi (1-4): ");
    scanf("%d", &pilih);   //input pilihan operasi

    printf("\t\t\t\t\t\n Masukkan angka pertama : ");
    scanf("%lf", &a);
    printf("\t\t\t\t\t Masukkan angka kedua   : ");
    scanf("%lf", &b);

    printf("\n");
    tampilkanHeader("HASIL OPERASI ARITMATIKA");
    tampilkanBaris("Angka Pertama", a);
    tampilkanBaris("Angka Kedua", b);
    garisPemisah();

    switch (pilih) {
        case 1:
            tampilkanBarisString("Operasi", "Penjumlahan");
            hasil = a + b;
            tampilkanBaris("Hasil", hasil);
            break;
        case 2:
            tampilkanBarisString("Operasi", "Pengurangan");
            hasil = a - b;
            tampilkanBaris("Hasil", hasil);
            break;
        case 3:
            tampilkanBarisString("Operasi", "Perkalian");
            hasil = a * b;
            tampilkanBaris("Hasil", hasil);
            break;
        case 4:
            tampilkanBarisString("Operasi", "Pembagian");
            if (b == 0) {
                tampilkanBarisString("Hasil", "ERROR: Pembagian nol");
            } else {
                hasil = a / b;
                tampilkanBaris("Hasil", hasil);
            }
            break;
        default:
            tampilkanBarisString("Status", "Pilihan tidak valid");
    }
    garisBawah();
}

void tampilkanMenu() {  //menampilkan menu utama
    garisAtas();
    printf("\t\t\t\t\t|                                                        |\n");
    printf("\t\t\t\t\t|           PROGRAM KALKULATOR MATEMATIKA                |\n");
    printf("\t\t\t\t\t|                                                        |\n");
    garisTengah();
    printf("\t\t\t\t\t|  1. Kubus                                              |\n");
    printf("\t\t\t\t\t|  2. Balok                                              |\n");
    printf("\t\t\t\t\t|  3. Prisma Segitiga                                    |\n");
    printf("\t\t\t\t\t|  4. Limas Segiempat                                    |\n");
    printf("\t\t\t\t\t|  5. Kerucut                                            |\n");
    printf("\t\t\t\t\t|  6. Tabung                                             |\n");
    printf("\t\t\t\t\t|  7. Bola                                               |\n");
    printf("\t\t\t\t\t|  8. Aritmatika Dasar                                   |\n");
    printf("\t\t\t\t\t|  0. Keluar                                             |\n");
    garisBawah();
}

void pause() {           //menahan layar sementara
    printf("\t\t\t\t\t\nTekan ENTER untuk melanjutkan...");
    clearInputBuffer();
    getchar();           //menunggu enter
}

int main() {  //fungsi utma program ini
    int menu;
    char ulang; //variabel buat ngulang program

    do {                                  //loop utama program
        clearScreen();
        tampilkanMenu();
        printf("\t\t\t\t\tPilih menu (0-8): ");     //input menu

        if (scanf("%d", &menu) != 1) {
            clearInputBuffer();
            printf("\t\t\t\t\t\n");
            garisAtas();
            printf("\t\t\t\t\t|              Input tidak valid!                        |\n");
            printf("\t\t\t\t\t|           Silakan masukkan angka 0-8                   |\n");
            garisBawah();
            pause();
            continue;
        }

        clearInputBuffer();

        switch (menu) {                  //percabangan menu
            case 1: kubus(); break;
            case 2: balok(); break;
            case 3: prismaSegitiga(); break;
            case 4: limasSegiempat(); break;
            case 5: kerucut(); break;
            case 6: tabung(); break;
            case 7: bola(); break;
            case 8: aritmatika(); break;
            case 0:
                printf("\t\t\t\t\t\n");
                garisAtas();
                printf("\t\t\t\t\t|         Terima kasih telah menggunakan program!        |\n");
                printf("\t\t\t\t\t|                   Program selesai.                     |\n");
                garisBawah();
                return 0;            //keuar dr program
            default:
                printf("\t\t\t\t\t\n");
                garisAtas();
                printf("\t\t\t\t\t|               Pilihan tidak valid!                     |\n");
                printf("\t\t\t\t\t|             Silakan pilih menu 0-8                     |\n");
                garisBawah();
        }

        if (menu >= 1 && menu <= 8) {
            printf("\t\t\t\t\t\n");
            garisAtas();
            printf("\t\t\t\t\t                Hitung lagi? (Y/T):          ");
            scanf(" %c", &ulang);
            clearInputBuffer();
            printf("\t\t\t\t\t+========================================================+\n");

            if (ulang == 'T' || ulang == 't' || ulang == 'N' || ulang == 'n') {
                printf("\t\t\t\t\t\n");
                garisAtas();
                printf("\t\t\t\t\t|         Terima kasih telah menggunakan program!        |\n");
                printf("\t\t\t\t\t|                   Program selesai.                     |\n");
                garisBawah();
                return 0;
            }
        } else {
            pause();
        }

    } while (1); //program berjalan terus

    return 0;
}
