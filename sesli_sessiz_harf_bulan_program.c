#include <stdio.h>
// sesli harfler = a i e o u , A I E O U  

int main(){
	char veri;
	printf("bir harf gir:\t");
	scanf("%c",&veri);
	//scanf("%s",string);
	if(veri == 'a'|| veri == 'e'||  veri =='i'|| veri == 'o'|| veri =='u'|| veri == 'A'|| veri == 'E'||  veri =='I'|| veri == 'O'|| veri =='U') printf("*Sesli harf");
	else{printf("Sessiz harf");}
	return 0;
}
