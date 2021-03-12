//        C BİÇİM TANIMLAYICILARI VE GÖREVLERİ
// %d veya %i = İşaretli tamsayı, değişkenin hem pozitif hem de negatif değerleri tutabileceği anlamına geldiği durumlarda işaretli tamsayı değerini yazdırmak için kullanılır.
// %u = İşaretli tamsayı, değişkenin hem pozitif hem de negatif bilgi almak için geldiği notlu tamsayı değerini cevapmak için kullanılır. 
// %0 = Sekizlik tamsayı değerinin her zaman 0 değeriyle başladığı sekizlik işaretsiz tamsayıyı yazdırmak için kullanılır.
// %x = Onaltılık tamsayı değerinin her zaman 0x değeriyle başladığı onaltılık işaretsiz tamsayıyı yazdırmak için kullanılır. Bunda alfabetik karakterler a, b, c gibi küçük harflerle yazılmıştır.
// %X = Onaltılık işaretsiz tamsayıyı yazdırmak için kullanılır, ancak% X alfabetik karakterleri A, B, C vb. Gibi büyük harfle yazdırır.
// %f = Ondalık kayan nokta değerlerini yazdırmak için kullanılır. Varsayılan olarak, 6 değeri "." Den sonra yazdırır.
// %%e veya %E = Bilimsel gösterim için kullanılır. Mantissa veya Üs olarak da bilinir.
// %g = Ondalık kayan nokta değerlerini yazdırmak için kullanılır ve sabit duyarlığı kullanır, yani girişteki ondalıktan sonraki değer çıktıdaki değerle tam olarak aynı olur.
// %p = Adresi onaltılık biçimde yazdırmak için kullanılır.
// %c = İşaretsiz karakteri yazdırmak için kullanılır.
// %s = Dizeleri yazdırmak için kullanılır.
// %ld = Uzun işaretli tamsayı değerini yazdırmak için kullanılır. 

#include <stdio.h>
int main()  
{  
  int b=6;  
  int c=8;  // farklı sayılar deneyin (negatifler de dahil)
  printf("b'nin degeri:%d", b);  // farklı biçim tanımlayıcılarını da deneyin.
  printf("\nc'nin degeri:%d",c);  
  
    return 0;  
}  

