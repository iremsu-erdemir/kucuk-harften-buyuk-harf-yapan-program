//ASCII tablosunu kullanarak girilen bir küçük harfi büyük harfe çeviren kod
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
 char harf;
 printf("kucuk harf giriniz: ");
 scanf("%c", &harf);
char bharf = harf - 'a' + 'A';
 char bharf2 = harf - 32;
 printf("Buyuk harf: %c = %c\n", bharf, bharf2);
 system("pause");
 return 0;
}
