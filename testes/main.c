/*Um programa que peça dois números e de um codigo para sua escolha!*/

#include <stdio.h>

int main(){
    char menu;
    printf ("Seja bem vindo ao Menu Principal da Sorveteria Ice Ball!\n");
    printf ("Escolha: \n e) -Controle de Estoque\n v) -Controle de Vendas\n f) -Controle de Financias\n s) -Sair");
    scanf ("\n%c", &menu);
    
    switch(menu){
        case 'e':
            printf ("Seja bem vindo(a) para o controle de estoque!\n");
            int a;
            printf ("Digite código de produto: ");
            scanf ("%d", &a);
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