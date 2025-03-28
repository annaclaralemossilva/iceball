/*Ice ball*/

#include <stdio.h>
#include <stdlib.h>

    int estoque(int e){ /*estoque*/
        int cod = 0;
        int code = 0;
        printf ("\nSeja bem vindo(a) para o Controle de Estoques!\n");
        printf("\n 1)Procurar produto\n 2)Voltar ao menu\n");
        scanf(" %d", &code);
        if(code==1){
            printf ("\nDigite código de produto: ");
            scanf (" %d", &cod);
                if(cod==101){
                    printf("\nSorvete - 50 unidades");
                }else if(cod==102){
                    printf("\nAcompanhamentos - 30 unidades");
                }else if(cod==103){
                    printf("\nPicolés - 20 unidades");
                }else if(cod==104){
                    printf("\nModelos de Recipiente - 30 unidades");
                }else{
                    printf("\nCódigo inválida!\n");
                    
                }int main();
                return main();
                
        }else if(code==2){
            int main();
            return main();
        }return e;
    }
    int finan(int fi){ /*financia*/
        int codf = 0;
        printf ("\nSeja bem vindo(a) para o Controle Financeiro!\n");
        printf("\n 1)Submenu\n 2)Voltar ao menu principal\n");
        scanf("%d", &codf);
        if (codf==1){
            printf(" 1) -Registrar despensas\n 2) -Registrar receitas\n 3) -Consultar saldo\n 4) -Sair\n Escolha:");
            scanf("%d", &fi);
        
            if(fi == 1){
                printf("Registrar despensas");
            }else if(fi == 2){
                printf("Registrar receitas");
            }else if(fi == 3){
                printf("Consultar saldo");
            }else if(fi==4){
                int main();
                return main();
            }
        }else if (codf==2){
            int main();
            return main();
        }else{
            printf("Não existe, volte\n");
            int main();
            return main();
        }
    }
    
    /*int ven(int v){
        int res;
        int resp = 0;
        int m = 0;
        int codv = 0;
        int desc = 0;
        printf ("\nSeja bem vindo(a) para o Controle de Vendas!\n");
        printf("\n 1)Procurar produto\n 2)Voltar ao menu\n");
        scanf("%d", &codv);
        printf("Digite o código:");
        scanf("%d", &v);
        
            if(v == 301){
                printf("Sorvete 1,5L - R$30.00\n");
                printf("Quantas unidade o cliente adquiriu?");
                scanf("%d", &m);
                resp=30*m;
                printf("Total:%d", resp);
            }else if(v == 302){
                printf("Calda de chocolate para sorvete 300ml - R$20.00\n");
                printf("Quantas unidade o cliente adquiriu?");
                scanf("%d", &m);
                resp=20*m;
                printf("Total:%d", resp);
            }else if(v == 303){
                printf("Paialé - R$9.00\n");
                printf("Quantas unidade o cliente adquiriu?");
                scanf("%d", &m);
                resp=9*m;
                printf("Total:%d", resp);
            }else if(v == 304){
                printf("Geladinho painha - R$2.00\n");
                printf("Quantas unidade o cliente adquiriu?");
                scanf("%d", &m);
                resp=2*m;
                printf("Total:%d", resp);
            }
            abc(resp);
            return v;
        
    }*/
int abc(int resp){ /*forma de pagamento*/
        int card = 0;
        float reso = 0;
        float desco = 0;
        printf("\nQual a forma de pagamento?\n 1) dinheiro\n 2)cartao\n");
        scanf("%d", &card);
        switch(card){
            case 1:     /*dinheiro*/       
                if(resp<=50){
                   desco=resp*0.5;
                   reso=resp-desco;
                   printf("total: R$%.2lf\n", reso);
                }else if(resp<100){
                    desco=resp*0.10;
                   reso=resp-desco;
                   printf("total: R$%.2lf\n", reso);
                }else if(resp>=100){
                    desco=resp*0.18;
                    reso=resp-desco;
                    printf("total: R$%.2lf\n", reso);
                }else if(card == 2){
               
                }
            /*cartão*/
            case 2:
                int cartaoc;
                printf("Cartão passou?\n");
                printf(" 1-) Cartão passou\n 2-) Cartao não passou\n ");
                scanf(" %d", &cartaoc);
                if(cartaoc == 1){
                    printf("Compra realizada!\n");
                    int main();
                    return main();
                }else if(cartaoc == 2){
                    printf("Cartão não autorizado\n");
                    int escolhac;
                    printf("\n 1-)Pagar no dinheiro\n 2-)Cancelar compra");
                    scanf("%d", &escolhac);
                    if(escolhac==1){
                        int ven();
                        return ven();
                    }else if(escolhac==2){
                        int main();
                        return main();
                    }
                }
        
        } 
        return desco;
    }
    int ven(int v){
        int res; /*vendas*/
        int resp = 0;
        int m = 0;
        int codv = 0;
        int desc = 0;
        printf ("\nSeja bem vindo(a) para o Controle de Vendas!\n");
        printf("\n 1)Procurar produto\n 2)Voltar ao menu\n");
        scanf("%d", &codv);
        printf("Digite o código:");
        scanf("%d", &v);
        
            if(v == 301){
                printf("Sorvete 1,5L - R$30.00\n");
                printf("Quantas unidade o cliente adquiriu?");
                scanf("%d", &m);
                resp=30*m;
                printf("Total:%d", resp);
            }else if(v == 302){
                printf("Calda de chocolate para sorvete 300ml - R$20.00\n");
                printf("Quantas unidade o cliente adquiriu?");
                scanf("%d", &m);
                resp=20*m;
                printf("Total:%d", resp);
            }else if(v == 303){
                printf("Paialé - R$9.00\n");
                printf("Quantas unidade o cliente adquiriu?");
                scanf("%d", &m);
                resp=9*m;
                printf("Total:%d", resp);
            }else if(v == 304){
                printf("Geladinho painha - R$2.00\n");
                printf("Quantas unidade o cliente adquiriu?");
                scanf("%d", &m);
                resp=2*m;
                printf("Total:%d", resp);
            }
            abc(resp);
            return v;
            int main();
            return main();
        
    }
int main(){
    char menu; /*menu principal*/
    printf ("\nSeja bem vindo ao Menu Principal da Sorveteria Ice Ball!\n\n");
    printf (" e) -Controle de Estoques\n f) -Controle Financeiro\n v) -Vendas\n s) -Sair\n \nEscolha:");
    scanf ("\n%c", &menu);
    
    switch(menu){
        case 'e':
            int e = 0;
            estoque(e);
            break;
        case 'f':
            int fi = 0;
            finan(fi);
            break;
        case 'v':
            int v = 0;
            ven(v);
            int m = 0;
            int resp;
            break;
        case 's':
            printf(" PROGRAMA ENCERRADO");
            exit (0);
        default:
            printf ("\nOpção inválida!\n");
            int main();
            return main();
            break;
    }
    return 0;
}