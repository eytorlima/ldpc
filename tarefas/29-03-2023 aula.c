#include <stdio.h> // biblioteca principal da linguagem C.

int main() //função principal (deve existir em todo código em C).
{

    int codigo = 5; //definindo uma variável (de valor inteiro) chamada 'codigo' e de valor 5.
    float saldo = 6.55;
    float su = 0;
    const int limite = 99; //define uma constante, não pode ser alterada.
    int t = 0;
    int n1 = 0;
    int n2 = 0;
    
    //<testes>
    printf("Lin\t\tguagem C\n"); // testando algumas funções de formatação da linguagem (\t).
    printf("\a\a\a\a\a\a"); // "                         " (\a).
    printf("Caixa D\'água\n"); // o apóstrofo (aspas simples) só é inserido a partir do uso de "\'".
    
    printf("Hello World\n"); // \n pula linhas, deve ser inserido dentro das aspas "".
    
    printf("%d\n", codigo); // '%d' é usado para valores inteiros (decimais).
    printf("%.2f\n", saldo); // '%f' é usado para valores flutuantes/float (com casas decimais), '.2' ou qualquer outro valor.
                            // pode ser inserido para que as casas decimais sejam limitadas.
    //<\testes>
    
    printf("\nInsira o seu saldo: R$"); // printf é utilizado para exibir uma mensagem ao usuário.
    scanf("%f", &su); // 'scanf' é utilizado para receber valores dos usuários, '&' é inserido antes da variável em que o valor sera anexado.
                    // a variável deve ser declarada antes do 'scanf', de preferência, no início do código.
                    
    printf("Seu saldo é de R$%.2f\n\n", su); // deve-se inserir, ao finalizar as aspas, após uma vírgula, a variável que 
                                            // se deseja utilizar em '%f' '%d' '%c' etc.
    
    printf("Insira um valor inteiro qualquer: ");
    scanf("%d", &t);
    
    printf("\nTabuda do %d:\n", t); // simulando uma tabuada simples, pode ser simplificada futuramente através de funções.
    
    printf("1x%d=%d", t, 1*t);  printf(" | ");  printf("6x%d=%d\n", t, 6*t); 
    printf("2x%d=%d", t, 2*t);  printf(" | ");  printf("7x%d=%d\n", t, 7*t); 
    printf("3x%d=%d", t, 3*t);  printf(" | ");  printf("8x%d=%d\n", t, 8*t); 
    printf("4x%d=%d", t, 4*t);  printf(" | ");  printf("9x%d=%d\n", t, 9*t); 
    printf("5x%d=%d", t, 5*t);  printf(" | ");  printf("10x%d=%d\n", t, 10*t); 
    
    printf("\nInsira 2 valores a seguir:\n");
    printf("Insira o valor 1: ");
    scanf("%d", &n1);
    printf("Insira o valor 2: ");
    scanf("%d", &n2);
    
    printf("\nSoma dos valores:\n"); printf("%d", n1+n2); // realizando operações aritiméticas; soma.
    printf("\nSubtração dos valores:\n"); printf("%d", n1-n2); // subtração.
    printf("\nMultiplicação dos valores:\n"); printf("%d", n1*n2); // multiplicação.
    printf("\nResto da divisão inteira dos valores:\n"); printf("%d", n1%n2); // resto da divisão.
    
    return 0;
}

