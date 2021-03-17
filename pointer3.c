#include <stdio.h>
#include <stdlib.h>

//POINTER(GOSTERICILER)

int main() {

// Simdi bir ornek cozelim..

int sayilar[10]={5,10,15,20,25};
char sehir[15]="Kahramanmaras";
int *ptr,a=50;

printf("%d\n",*(sayilar));    //ilk eleman olan 5 sayisini verecektir..  *(sayilar+1) --> 10      ptr=sayilar yapabilirdik.  printf("%d",*(ptr+1)) --> 10 olurdu.
printf("%c\n",*sehir);        // K harfini verir.   *(sehir+1) --> e 

printf("a:%d\n",a);
*&a=80;         //oncelik sirasinda & * ayni sirada bu yuzden sagdan sola..
printf("a:%d\n",a);
ptr=&a;                     //Dikkat ! burada adres atamasi yapiliyor.deger atamasi yapilsaydi *ptr=a olurdu..
*ptr=100;
printf("a:%d\n",a);


//Bir gostericinin bir nesneyi gostermesi kisaca;

int x=30;
int *ptr2;
ptr2=&x;                  //ptr2 x degiskenini gosteriyor denir.ptr x'i gosteriyor ise *ptr, x degiskeninin kendisidir.
*ptr2=150;
printf("x: %d = ",x);
printf("x: %d",*ptr2);



	return 0;
}