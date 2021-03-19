#include <stdio.h>
#include <string.h>
// kütüphane kullanırken öğrenmemiz gereken bazı fonksiyonlar vardır:
/*
 * strcpy (s1, s2);
String s2'yi string s1'e kopyalar.

*strcat (s1, s2);
S2 dizesini s1 dizesinin sonuna birleştirir.

*strlen (s1);
S1 dizesinin uzunluğunu döndürür.

*strcmp (s1, s2);
S1 ve s2 aynıysa 0 döndürür; s1 <s2 ise 0'dan küçük; s1> s2 ise 0'dan büyüktür.

*strchr (s1, ch);
S1 dizesindeki ch karakterinin ilk oluşumuna bir gösterici döndürür.

*strstr (s1, s2);
S1 dizgesinde s2 dizesinin ilk oluşumuna bir gösterici döndürür.

 */
 
 // Kullanımlarını aşağıda görebilirsiniz
int main () {

   char str1[12] = "Hello";
   char str2[12] = "World";
   char str3[12];
   int  len ;

   /* str1'i str3'e kopyala */
   strcpy(str3, str1);
   printf("strcpy( str3, str1) :  %s\n", str3 );

   /* str1 ve str2'yi bitiştirir */
   strcat( str1, str2);
   printf("strcat( str1, str2):   %s\n", str1 );

   /* birleştirmeden sonra toplam str1 uzunluğu */
   len = strlen(str1);
   printf("strlen(str1) :  %d\n", len );

   return 0;
}
