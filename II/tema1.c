#include <stdio.h>
#include <stdlib.h>

long tobaza10(long a, long b);
void tobazab(long a, long b);
void tohexa(long a);

int main(){
    long a, b;
    while(printf("\n Baza, : "),scanf("%ld", &b) > 0){
        if(b == 16){
            printf(" Numar: ");
            scanf("%x", &a);
            tobazab(a, 2);
            tobazab(a, 8);
            tobazab(a, 10);
            tobazab(a, 16);
        }else{
            printf(" Numar: ");
            scanf("%ld", &a);
            if(b != 10 && b != 16) a = tobaza10(a, b);
            tobazab(a, 2);
            tobazab(a, 8);
            tobazab(a, 10);
            tobazab(a, 16);
        }
    }
return 0;
}

void tobazab(long a, long b){
    char hex[100];
    long l = 0, i = 0, digit;
      while(a >= b){
          digit = a%b;
          hex[i] = digit;
          i++;
          l++;
          a = a / b;
       }
     hex[i]=a;
     printf("In baza %ld este: ", b);
       for(i=l; i >= 0; i--){
          switch(hex[i]){
             case 10:
                 printf("A");
               break;
             case 11:
                 printf("B");
               break;
             case 12:
                 printf("C");
               break;
             case  13:
                 printf("D");
               break;
             case 14:
                 printf("E");
               break;
             case 15:
                 printf("F");
               break;
             default:
                 printf("%ld",hex[i]);
               break;
          }
    }
    printf("\n");
}

long tobaza10(long a, long b){
    long n10 = 0, pb = 1;
    do{
        n10 = n10 + (a % 10) * pb;
        pb = pb * b;
        a = a / 10;
    }while(a != 0);
    printf("In baza 10 este: %ld\n", n10);
    return n10;
}
