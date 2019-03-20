#include<stdio.h>
#include<conio.h>

//declara��o de vari�veis globais
float lucro, dinheirodavenda, dinheirogasto;

//prot�tipo da fun��o entrada
void entrada(void);

//fun�ao main
int main(void)
{
  //vari�vel local
  char resposta;
  
  do
  {
    //chamada da fun��o p/ entrada dos valores
    entrada();
    
    //usando vari�veis globais
    lucro = dinheirodavenda - dinheirogasto;
    
    printf("\nlucro da empresa: %.2f\n", lucro);
    
    printf("\nDeseja calcular novamente? (s/n)");
    fflush(stdin);
    scanf("%c",&resposta);
  }
  while(resposta == 's');
  
  return(0);
}
//fim da fun��o main()

//uso das vari�veis globais
void entrada(void)
{
  printf("\nDigite o valor arrecadado com as vendas: ");
  scanf("%f", & dinheirodavenda);
  
  printf("Digite o custo de producao: ");
  scanf("%f", & dinheirogasto);
  
  return ;
}
