/*Um programa que peça dois números e de um codigo para sua escolha!*/

#include <stdio.h>

    int estoque(int e){
        int cod;
        int code;
        printf ("Seja bem vindo(a) para o Controle de Estoques!\n");
        printf("1)Procurar produto\n 2)Voltar ao menu");
        scanf("%d", &code);
        if(code==1){
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
        }else if(code==2){
            int main();
        }
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
        int resp;
        int m;
        printf ("Seja bem vindo(a) para o Controle de Vendas!\n");
        printf("Digite o código:");
        scanf("%d", &v);
        
            if(v == 301){
                printf("Sorvete 1,5L - R$30.00\n");
                printf("Quantas unidades o cliente adquiriu?");
                scanf("%d", &m);
                resp=30*m;
                printf("Total:%d", resp);
            }else if(v == 302){
                printf("Calda de chocolate para sorvete 300ml - R$20.00\n");
                printf("Quantas unidades o cliente adquiriu?");
                scanf("%d", &m);
                resp=20*m;
                printf("Total:%d", resp);
            }else if(v == 303){
                printf("Paialé - R$9.00\n");
                printf("Quantas unidades o cliente adquiriu?");
                scanf("%d", &m);
                resp=9*m;
                printf("Total:%d", resp);
            }else if(v == 304){
                printf("Geladinho painha - R$2.00\n");
                printf("Quantas unidades o cliente adquiriu?");
                scanf("%d", &m);
                resp=2*m;
                printf("Total:%d", resp);
            }
        return v;
    }
int descont(int desc){
        int card;
        int resp;
        printf("\nQual a forma de pagamento?\n 1) dinheiro\n 2)cartao");
        scanf("%d", &card);
        switch(card){
            case 1:            
                if(resp<=50){
                   desc=resp*0,5;
                   printf("%ls", &desc);
                }else if(resp<100){
                desc=resp*0,10;
                   printf("%ls", &desc);
                }else if(resp>=100){
                desc=resp*0,18;
                printf("%ls", &desc);
                }else if(card == 2){
               
                }
            case 2:
        }    
    }
int main(){
    char menu;
    printf ("Seja bem vindo ao Menu Principal da Sorveteria Ice Ball!\n");
    printf (" e) -Controle de Estoques\n f) -Controle Financeiro\n v) -Vendas\n s) -Sair\n Escolha:");
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
            int desc;
            descont(desc);
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