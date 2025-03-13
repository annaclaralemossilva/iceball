/*Gerenciamento Automatizado de Comercio - Iceball*/

#include <stdio.h>
int estoque(){
    int cod;
    printf ("\nDigite código de produto: ");
            scanf (" %d", &cod);
            
            if(cod=101){
                printf("Sorvete - 50 unidades");
            }else if(cod=102){
                printf("Acompanhamentos - 30 unidades");
            }else if(cod=103){
                printf("Picolés - 20 unidades");
            }else if(cod=104){
                printf("Modelos de Recipiente - 30 unidades");
            }else{
                printf("Opção inválida!\n");
            }
            return e;
}
int main(){
    char menu;
    printf ("Seja bem vindo ao Menu Principal da Sorveteria Ice Ball!\n");
    printf ("Escolha: \n e) -Controle de Estoque\n v) -Controle de Vendas\n f) -Controle de Financias\n s) -Sair\n");
    scanf ("\n%c", &menu);
    
    switch(menu){
        case 'e':
            printf ("Seja bem vindo(a) para o controle de estoque!\n");
            int cod;
            printf ("\nDigite código de produto: ");
            scanf (" %d", &cod);
            
            break;
        case 'v':
            printf ("Seja bem vindo(a) para o controle de vendas!\n");
            printf ("Digite código de produto: ");
            scanf ("%d", &a);
            break;
        case 'f':
            printf  ("Seja bem vindo(a) para o controle de financias!\n");
            printf ("Digite código de produto: ");
            scanf ("%d", &a);
            break;
        case 's':
            printf  ("Sair\n");
            break;
        default:
            printf ("Opção inválida!\n");
            break;
    }
    return 0;
}