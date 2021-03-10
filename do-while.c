#include <stdio.h>

int main(){
	int x= 0;
	int top=1;	
	printf("sayi gir: " );
	scanf("%d", &x);

	do{
		top+=x; // * (çarpma işareti) koyarak faktoriyel hesabı yapılabilir.
		x--;
	}while(x> 1);
	printf("sonuc: %d ", top);
	return 0;
}
