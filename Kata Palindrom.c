#include<stdio.h>
#include<string.h>
#include<stdbool.h>

char kata[100], hasil[50];
int x, i;
bool con=true;
int palindrom_checking()
{
    for(i = 0 ; i < x/2 ; i++){
        if(kata[i]!=kata[x-i-1]){
            con=false;
            break;
        }
    }
    if(con==true){
        printf("%s adalah kata palindrom", kata);
    }
    else{
        printf("%s bukan kata palindrom", kata);
    }
    return 0;
}
int main()
{
    printf("Masukkan kata yang ingin dicek : ");
    gets(kata);
    x = strlen(kata);
    palindrom_checking();
    return 0;
}
