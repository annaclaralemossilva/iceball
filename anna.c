//**Controle da Empresa: Ice Ball🍨 **//

#include <stdio.h>
#include <stdlib.h>

struct produto{ //Estrutura dos produtos
    int prodcod; //Código de p.
    char prodnome [100]; //Nome p.
    int prodquant; //Quantodade p.
    float prodpreco; //Valor p.
};
//Variáveis globais
int totalProdutos = 4;
int tralala = 0; //Cadastro (futuro)
float saldo = 0.00, receita = 0.00, despesa = 0.00; //Variáveis p/ Financeiro

struct produto lala[100] ={ //Lista produtos
    {1, "Pote de sorvete", 50, 15.00},
    {2, "Casquinha", 30, 4.00},
    {3, "Paialé", 20, 5.00},
    {4, "Milk-Shake", 15, 15.00}
};
// Declaração de funções
void estoque();
void menu_principal();
void finan();
void ven();
void relatorio();

    void relatorio(){//Função p/ relatório final
        printf("Relatório:");
        printf("\n-----Produtos-----\n");//Tabela produtos
        for(int i = 0; i < totalProdutos; i++){
            printf("%d | %s | %d unidades | R$%.2f\n", lala[i].prodcod, lala[i].prodnome, lala[i].prodquant, lala[i].prodpreco);
        }printf("\nO saldo total foi de R$%.2f\n", saldo);
    }
    void estoque(){ //Função para Estoque
        int cod = 0;
        int code = 0;
        printf("\n-----Produtos-----\n");//Tabela produtos
        for(int i = 0; i < totalProdutos; i++){
            printf("%d | %s | %d unidades | R$%.2f\n", lala[i].prodcod, lala[i].prodnome, lala[i].prodquant, lala[i].prodpreco);
        }
        //futuro↓
        /*printf("\n1)Cadastro de produto\n2)Voltar ao menu\n");
        scanf(" %d", &code);
        totalProdutos++;
        if(code==1){
            
            printf ("\nCadastre o nome do produto: ");
            scanf (" %s", lala[tralala].prodnome);
            printf ("\nCadastre a quantidade do produto: ");
            scanf (" %d", &lala[tralala].prodquant);
            printf ("\nCadastre o preço do produto: ");
            scanf (" %f", &lala[tralala].prodpreco);
            printf("\nCadastro de produto realizado!");
            estoque();
            return;
        }else if(code==2){
            menu_principal();
            return;
        }*/
        menu_principal();
        return;
    }//Função Financeiro
    void finan(){
        int fi = 0;
        int codf = 0;
        printf ("\n-----Controle Financeiro-----\n");
        printf(" 1)Submenu\n 2)Voltar ao menu principal\n \nEscolha:");
        scanf("%d", &codf);
        if (codf==1){
            printf("\nSaldo atual: R$%.2f\n", saldo);
            printf(" 1) -Registrar despensas\n 2) -Registrar receitas\n 3) -Sair\n\nEscolha:");
            scanf("%d", &fi);
            if(fi == 1){//despesas
                printf("\n-----Registrar despesas-----\n");
                printf("\nDigite suas despesas: ");
                scanf(" %f", &despesa);
                saldo-=despesa;
                
            }else if(fi == 2){//registro
                printf("\n-----Registrar receitas-----\n");
                printf("\nDigite suas receitas: ");
                scanf(" %f", &receita);
                saldo+=receita;
            }else if(fi==3){
                menu_principal();
                return;
            }
        }else if (codf==2){
            menu_principal();
            return;
        }
        finan();
        return;
    }
    //Função Vendas
    void ven(){
        int resp = 0;
        int compraquant = 0;
        int codv = 0;
        int codv2 = 0;
        printf ("\n-----Controle de Vendas-----\n");
        printf("\n 1)Vender produto\n 2)Voltar ao menu\n");
        scanf("%d", &codv);
        if(codv==1){
            printf("\n-----Produtos-----\n");//Tabela
            for(int i = 0; i < totalProdutos; i++){
            printf("%d | %s | %d unidades | R$%.2f\n", lala[i].prodcod, lala[i].prodnome, lala[i].prodquant, lala[i].prodpreco);
            }
            printf("\nDigite o código do produto vendido: ");
            scanf("%d", &codv2);
            if (codv2==1){
                printf("\n%d | %s | %d unidades | R$%.2f\n", lala[0].prodcod, lala[0].prodnome, lala[0].prodquant, lala[0].prodpreco);
                printf("\nQuantas unidade o cliente adquiriu?");
                scanf("%d", &compraquant);
                resp=15*compraquant;
                printf("\nTotal:%d", resp);
            }else if (codv2==2){
                printf("\n%d | %s | %d unidades | R$%.2f\n", lala[1].prodcod, lala[1].prodnome, lala[1].prodquant, lala[1].prodpreco);
                printf("\nQuantas unidade o cliente adquiriu?");
                scanf("%d", &compraquant);
                resp=4*compraquant;
                printf("\nTotal:%d", resp);
            }else if (codv2==3){
                printf("\n%d | %s | %d unidades | R$%.2f\n", lala[2].prodcod, lala[2].prodnome, lala[2].prodquant, lala[2].prodpreco);
                printf("\nQuantas unidade o cliente adquiriu?");
                scanf("%d", &compraquant);
                resp=5*compraquant;
                printf("\nTotal:%d", resp);
            }else if (codv2==4){
                printf("\n%d | %s | %d unidades | R$%.2f\n", lala[3].prodcod, lala[3].prodnome, lala[3].prodquant, lala[3].prodpreco);
                printf("\nQuantas unidade o cliente adquiriu?");
                scanf("%d", &compraquant);
                resp=15*compraquant;
                printf("\nTotal:%d", resp);
            }else{
                printf("\nCódigo invalido!\n");
                ven();
                return;
            }
        }else if(codv==2){
            menu_principal();
            return;
        }else{
            printf("\nCódigo invalido!\n");
            ven();
            return;
        }
        //Formas de Pagamento
        int card = 0;
        float reso = 0;
        float desco = 0;
        printf("\nQual a forma de pagamento?\n 1) Dinheiro\n 2)Cartão\n");
        scanf("%d", &card);
        switch(card){//Via dinheiro
            case 1:           
                if(resp<=50){
                   desco=resp*0.5;
                   reso=resp-desco;
                   printf("Total: R$%.2lf\n", reso);
                }else if(resp<100){
                    desco=resp*0.10;
                   reso=resp-desco;
                   printf("Total: R$%.2lf\n", reso);
                }else if(resp>=100){
                    desco=resp*0.18;
                    reso=resp-desco;
                    printf("Total: R$%.2lf\n", reso);
                }
                printf("\nCompra realizada com sucesso!\n");
                saldo = saldo - reso;
                menu_principal();
                return;
            break;
            
            case 2://Via cartão
                int cartaoc;
                printf("Cartão passou?\n");
                printf(" 1-) Cartão passou\n 2-) Cartao não passou\n ");
                scanf(" %d", &cartaoc);
                if(cartaoc == 1){
                    printf("Compra realizada!\n");
                    menu_principal();
                    return;
                }                else if(cartaoc == 2){
                    printf("Cartão não autorizado :(\n");
                    int escolhac;
                    printf("\n 1-)Pagar no dinheiro\n 2-)Cancelar compra");
                    scanf("%d", &escolhac);
                    if(escolhac==1){
                        ven();
                        return;
                    }else if(escolhac==2){
                        printf("Compra cancelada!");
                        menu_principal();
                        return;
                    }break;
                }saldo = saldo - resp;
        
        } 
        return;
    }
void menu_principal(){//Menu principal
    char menu;
    printf ("\n-----Menu Principal-----\n\n");
    printf ("\n e) -Controle de Estoques\n f) -Controle Financeiro\n v) -Vendas\n s) -Sair\n \nEscolha:");
    scanf ("\n%c", &menu);
    
    switch(menu){
        case 'e':
            estoque();
            break;
        case 'f':
            finan();
            break;
        case 'v':
            ven();
            int resp;
            break;
        case 's':
            relatorio();
            printf("\n\nPrograma encerrado!\n");
            exit (0);
        default:
            printf ("\nOpção inválida!\n");
            menu_principal();
            return;
            break;
    }
}

int main(){//Bem vindo!
    printf ("\nSeja bem vindo(a) ao Controle Comercial Ice Ball\n");
    menu_principal();
    return 0;
}
