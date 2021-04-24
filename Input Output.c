#include<stdio.h>

int main()
{

    char name[90];
    char alamat[90];
    char kelas[5];
    char No[20];
    char bulan1[20];
    char NIM[50];
    int tanggal, bulan, tahun, umur;
    int hariSelisih, hari1, hari2, hari, umurBulan, umurTahun;
    printf("Masukkan nama anda : ");
    fgets(name, sizeof(name), stdin);
    printf("Masukkan NIM anda : ");
    scanf("%s", &NIM);
    printf("Masukkan kelas anda : ");
    scanf("%s", &kelas);
    printf("Masukkan alamat anda : ");
    fflush(stdin);
    fgets(alamat, sizeof(alamat), stdin);
    printf("Masukkan nomor HP anda : ");
    scanf("%s", &No);
    printf("Masukkan tanggal lahir anda : ");
    scanf("%d %s %d", &tanggal, &bulan1, &tahun);
    hari1=tanggal + bulan*31 + tahun*365;
    hari2=16 + 2*31 + 2021*365;
    hariSelisih=hari2-hari1;
    umurTahun=hariSelisih/365;
    printf("\n");
    printf("\t\t\t\t Data anda telah tersimpan");
    printf("\n\n");
    printf("Nama : %s", name);
    printf("NIM : %s", NIM);
    printf("\nKelas : %s", kelas);
    printf("\nAlamat : %s", alamat);
    printf("No HP : %s", No);
    printf("\nTanggal lahir : %d %s %d", tanggal, bulan1, tahun);
    printf("\nUmur : %d", umurTahun);

    return 0;
}
