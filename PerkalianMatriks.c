#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], hasil[10][10], i, j, k, baris, kolom;
    char pil;
    do{
    printf("\t+================================================+\n");
    printf("\t|         Praktikum Algoritma Pemrograman        |\n");
    printf("\t|                   Tugas Modul 3                |\n");
    printf("\t+================================================+\n");
    printf("\n");
    printf("Masukkan banyak baris matriks A dan B : ");
    scanf("%d", &baris);
    printf("Masukkan banyak kolom matriks A dan B : ");
    scanf("%d", &kolom);
    for(i=1;i<=baris;i++){
        for(j=1;j<=kolom;j++){
            printf("Masukkan nilai baris %d kolom %d matriks A : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(i=1;i<=baris;i++){
        for(j=1;j<=kolom;j++){
            printf("Masukkan nilai baris %d kolom %d matriks B : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("==========\n");
    printf("Matriks A\n");
    printf("==========\n");
    for(i=1;i<=baris;i++){
        for(j=1;j<=kolom;j++){
            printf("|%d|", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("==========\n");
    printf("Matriks B\n");
    printf("==========\n");
    for(i=1;i<=baris;i++){
        for(j=1;j<=kolom;j++){
            printf("|%d|", b[i][j]);
        }
        printf("\n");
    }
    for(i=1;i<=baris;i++){
        for(j=1;j<=kolom;j++){
                hasil[i][j]=0;
                for(k=1;k<=kolom;k++){
                        hasil[i][j]=hasil[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("\n==Hasil Kali Matriks==\n");
    for(i=1;i<=baris;i++){
        for(j=1;j<=kolom;j++){
            printf("|%d|", hasil[i][j]);
            }
        printf("\n");
        }
        printf("Ulangi program? (y/n): ");
        scanf("%s", &pil);
        system("cls");
    }
    while(pil!='n');
    printf("\t\t\t=====Terimakasih=====");
}
