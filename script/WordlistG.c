#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  // criando a variável ponteiro para o arquivo
  FILE *Arq;
  char str[50];
  int i = 0;
  
  //abrindo o arquivo
  Arq = fopen("multi_99999_999999.txt", "a");
  printf("arquivo criado\n");
  printf("iniciando gravacao\n");
  for (i = 100000; i <= 999999; ++i)
  {
    sprintf(str, "%d", i); 
    fputs( str ,Arq);
    fputs("\n",Arq);
  }
  printf("finalizando gravacao\n");
  
  // fechando arquivo
  fclose(Arq);
  printf("arquivo fechado\n");
  //mensagem para o usuário
  printf("O arquivo foi criado com sucesso!\n");
  
  return(0);
}