/*Um programa que peça dois números e de um codigo para sua escolha!*/

#include <stdio.h>

    int estoque(int e){
        int cod;
        printf ("Seja bem vindo(a) para o Controle de Estoques!\n");
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

    int finan(int fi){
        printf ("Seja bem vindo(a) para o Controle Financeiro!\n");
        printf("Digite o código:");
        scanf("%d", &fi);
        
            if(fi == 201){
                printf("Registrar despensas");
            }else if(fi == 202){
                printf("Registrar receitas");
            }else if(fi == 203){
                printf("Consultar saldo");
            }
            return fi;
    }
    
    int ven(int v){
        printf ("Seja bem vindo(a) para o Controle de Vendas!\n");
        printf("Digite o código:");
        scanf("%d", &v);
        
            if(v == 301){
                printf("Sorvete 1,5L - R$30.00\n");
            }else if(v == 302){
                printf("Calda de chocolate para sorvete 300ml - R$20.00\n");
            }else if(v == 303){
                printf("Paialé - R$9.00\n");
            }else if(v == 304){
                printf("Geladinho painha - R$2.00\n");
            }
            return v;
        
    }
    int mult(int resp){
        int m;
        int v;
        int s=30;
        int c=20;
        int p=9;
        int g=2;
        printf("Quantas unidade o cliente adquiriu?");
        scanf("%d", &m);
        if(v == 301){
            resp=s*m;
            printf("Total:%d", resp);
        }else if(v == 302){
            resp=c*m;
            printf("Total:%d", resp);
        }else if(v == 303){
            resp=p*m;
            printf("Total:%d", resp);
        }else if(v == 304){
            resp=g*m;
            printf("Total:%d", resp);
        }
    }
int main(){
    char menu;
    printf ("Seja bem vindo ao Menu Principal da Sorveteria Ice Ball!\n");
    printf (" e) -Controle de Estoques\n v) -Controle Financeiro\n f) -Vendas\n s) -Sair\n Escolha:");
    scanf ("\n%c", &menu);
    
    switch(menu){
        case 'e':
            int e;
            estoque(e);
            break;
        case 'f':
            int fi;
            finan(fi);
            break;
        case 'v':
            int v;
            ven(v);
            int m;
            int resp;
            mult(resp);
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