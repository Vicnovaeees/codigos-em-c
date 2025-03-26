#include <stdio.h>
//função que recebe um parametro por valor e incrementa seu valor em
void incrementar (int x)
{
     x = x + 1;
     printf ("dentro da função : x = %\n" , x);
     
}

int main ()
{
    int num = 5;
    printf ("antes da chamada da funcao: num = %\n" , num);
    //chamando a função incrementar e passando o valor de num como a 
    incrementar (num);
    printf("depois da chamada da função: num = %d\n;
    return 0;
    
    
    
    
    
    
    
