#include <stdio.h>
#include <unistd.h>

#define cls printf("\033[H\033[2J")

int main() {
 
 int i, r, numT;
 char chr;
 
 while(1)
 {
  do 
    {
    printf("--Programma Tabelline --- \n\n");
    printf("Quale tabellina vuoi creare? (2 - 12): ");
    scanf("%d",&numT);
    cls;
    }while ((numT < 2) || (numT > 12));
    
    printf ("\nTABELLINA DEL \'%d\'\n" , numT);
    printf("------------------\n");
    
    for(i=1; i<= 12; i++)
    {
    r = numT * i;
    printf("%d x %d = %d\n", i, numT, r);
    usleep(200000);
    }
    printf("\nVoi fare un'altra? (S/N): ");
    scanf ("\n%c" ,&chr);
    
    if((chr == 'N') || (chr == 'n')) break;
    cls;
    
    }
    
  return 0;
  
 }
