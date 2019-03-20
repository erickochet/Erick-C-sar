#include<stdio.h>
#include<conio.h>

//declaração de variáveis globais
float lucro, dinheirodavenda, dinheirogasto;

//protótipo da função entrada
void entrada(void);

//funçao main
int main(void)
{
  //variável local
  char resposta;
  
  do
  {
    //chamada da função p/ entrada dos valores
    entrada();
    
    //usando variáveis globais
    lucro = dinheirodavenda - dinheirogasto;
    
    printf("\nlucro da empresa: %.2f\n", lucro);
    
    printf("\nDeseja calcular novamente? (s/n)");
    fflush(stdin);
    scanf("%c",&resposta);
  }
  while(resposta == 's');
  
  return(0);
}
//fim da função main()

//uso das variáveis globais
void entrada(void)
{
  printf("\nDigite o valor arrecadado com as vendas: ");
  scanf("%f", & dinheirodavenda);
  
  printf("Digite o custo de producao: ");
  scanf("%f", & dinheirogasto);
  
  return ;
}
