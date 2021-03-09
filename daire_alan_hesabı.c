/* Yarıçapa göre daire alanı hesaplar */

#include<stdio.h>
#define PI   3.14
#define ekrana_yazdir  printf
#define deger_al  scanf
int main( void )
{
 int yaricap;
 float alan;
 ekrana_yazdir( "Çemberin yarı çapını giriniz> " );
 deger_al( "%d", &yaricap );
 alan = PI * yaricap * yaricap;
 ekrana_yazdir( "Çember alanı: %.2f\n", alan );
 return 0;}
