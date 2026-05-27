%{
 
#include <stdlib.h>
#include <stdio.h>
 
int number_1;
int number_2;
 
%}
number_sequence [0-9]*
%%
 
{number_sequence}[0|2|4|6|8] {
                                printf("Even number [%zu]",yyleng);
                                return atoi(yytext);
                             }
 
{number_sequence}[1|3|5|7|9] {
                                printf("Odd number [%zu]",yyleng);
                                return atoi(yytext);
                              } //zu unsigned long
%%
 
int yywrap()
{
    return 1;  // Indica que no hay más archivos por procesar
}
 
int main()
{
    printf("\nInput an even number and an odd number\n");
    number_1 = yylex();  // Analiza el primer número
    number_2 = yylex();  // Analiza el segundo número
    int diff = number_1 - number_2;
    
    if(diff % 2 != 0)  // Si la diferencia es impar
        printf("\nYour inputs were checked for correctness, \nResult : Correct\n");
    else
        printf("\nYour inputs were checked for correctness, \nResult : Incorrect\n");
    
    return 1;
}