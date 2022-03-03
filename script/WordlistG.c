#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  
  FILE *Arq;// variável para o arquivo
  char str[50];
  int cont = 0;
  
  //abrindo o arquivo
  Arq = fopen("wl.txt", "a");
  for (cont = 100000; cont <= 999999; ++cont)
  {
    sprintf(str, "%d", cont); 
    fputs( str ,Arq);
    fputs("\n",Arq);
  }
  fclose(Arq);// fechando arquivo
  
  return(0);
}