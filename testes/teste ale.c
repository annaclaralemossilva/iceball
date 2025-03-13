/*Um programa que peça dois números e de um codigo para sua escolha!*/

#include <stdio.h>

    int finan(int fi){
        
        if(fi == 201){
            printf("Registrar despensas");
        }else if(fi == 202){
            printf("Registrar receitas");
        }else if(fi == 203){
            printf("Consultar saldo");
        }
        return fi;
    }

int main(){
    char menu;
    printf ("Seja bem vindo ao Menu Principal da Sorveteria Ice Ball!\n");
    printf (" e) -Controle de Estoques\n v) -Controle Financeiro\n f) -Vendas\n s) -Sair\n Escolha:");
    scanf ("\n%c", &menu);
    
    switch(menu){
        case 'e':
            printf ("Seja bem vindo(a) para o Controle de Estoques!\n");
            int a;
            printf ("Digite código de produto: ");
            scanf ("%d", &a);
            break;
        case 'v':
            int fi;
            printf ("Seja bem vindo(a) para o Controle Financeiro!\n");
            printf("Digite o código:");
            scanf("%d", &fi);
            finan(fi);
            break;
        case 'f':
            printf  ("Seja bem vindo(a) para o Vendas!\n");
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