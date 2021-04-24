#include <stdio.h>
int main() {
    int n, counter, asli, balik=0;
    printf("Masukkan bilangan : ");
    scanf("%d", &n);
    asli = n;
    while(n!=0){
        counter= n % 10;
        balik = counter + balik * 10;
        n = n /10;
    }
    if(asli==balik){
        printf("%d merupakan bilangan polindrom\n", asli);
    }
    else{
        printf("%d bukan merupakan bilangan polindrom\n", asli);
    return 0;
    }
}
