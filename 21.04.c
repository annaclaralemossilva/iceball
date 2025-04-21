//**Controle de Comércio: Ice Ball🍨 **//

#include <stdio.h>
#include <stdlib.h>

//Estrutura dos produtos
struct produto{
    int prodcod;            //Código do produto.
    char prodnome [100];    //Nome do produto
    int prodquant;          //Quantidade dísponivel
    float prodpreco;        //Valor do produto
};

//Variáveis globais
int totalProdutos = 4;
int tralala = 0;        //Adição de produtos novos
float saldo = 0.00, receita = 0.00, despesa = 0.00; //Controle Financeiro

//Lista produtos
struct produto lala[100] ={
    {1, "Pote de sorvete", 50, 15.00},
    {2, "Casquinha", 30, 4.00},
    {3, "Paialé", 20, 5.00},
    {4, "Milk-Shake", 15, 15.00}
};

//Declaração de funções
void estoque();
void menu_principal();
void finan();
void ven();
void relatorio();

//Função relatório final
void relatorio(){
    printf(" Relatório:");
    printf("\n-----Produtos-----\n");//Tabela produtos
    for(int i = 0; i < totalProdutos; i++){
        printf("%d | %s | %d unidades | R$%.2f\n", lala[i].prodcod, lala[i].prodnome, lala[i].prodquant, lala[i].prodpreco);
    }
    printf("\n O saldo total foi de R$%.2f\n", saldo);
}

 //Função para Estoque
void estoque(){
    int cod = 0;
    int code = 0;
    printf("\n-----Produtos-----\n");//Tabela produtos
    for(int i = 0; i < totalProdutos; i++){
        printf("%d | %s | %d unidades | R$%.2f\n", lala[i].prodcod, lala[i].prodnome, lala[i].prodquant, lala[i].prodpreco);
    }
    printf("\n 1) -Cadastro de produto\n 2) -Voltar ao menu\n");
    scanf(" %d", &code);
    if(code == 1){
        printf("\n Cadastre o nome do produto: ");
        scanf(" %[^\n]", lala[totalProdutos].prodnome);
        printf(" Cadastre a quantidade do produto: ");
        scanf(" %d", &lala[totalProdutos].prodquant);
        printf(" Cadastre o preço do produto: ");
        scanf(" %f", &lala[totalProdutos].prodpreco);
        lala[totalProdutos].prodcod = totalProdutos + 1; // define código único
        totalProdutos++; // incrementa o total
        printf("\n Cadastro de produto realizado!\n");
        estoque(); // volta pra tela de estoque
        return;
    }
    else if(code == 2){
        menu_principal();
        return;
    }
    menu_principal();
    return;
}

//Função Financeiro
void finan(){
    int fi = 0;
    int codf = 0;
    printf ("\n-----Controle Financeiro-----\n");
    printf("\n Saldo atual: R$%.2f\n", saldo);
    printf("\n 1) -Registrar despesas\n 2) -Registrar receitas\n 3) -Voltar ao Menu\n\n Escolha:");
    scanf("%d", &fi);
        if(fi == 1){//despesas
            printf("\n-----Registrar despesas-----\n");
            printf("\n Digite suas despesas: ");
            scanf(" %f", &despesa);
            saldo-=despesa;
        }
        else if(fi == 2){//registro
            printf("\n-----Registrar receitas-----\n");
            printf("\n Digite suas receitas: ");
            scanf(" %f", &receita);
            saldo+=receita;
        }
        else if(fi==3){
            menu_principal();
            return;
        }
        
        finan();
        return;
}
//Vendas
void ven(){
    int codv = 0;
    int codv2 = 0;
    int compraquant = 0;
    int indiceProduto = -1;
    float resp = 0.0, reso = 0.0, desco = 0.0;
    printf("\n-----Controle de Vendas-----\n");
    printf("\n 1) -Vender produto\n 2) -Voltar ao menu\n");
    scanf("%d", &codv);
    if (codv == 1){
        printf("\n-----Produtos-----\n");
        for (int i = 0; i < totalProdutos; i++) {
            printf("%d | %s | %d unidades | R$%.2f\n", lala[i].prodcod, lala[i].prodnome, lala[i].prodquant, lala[i].prodpreco);
    }
    printf("\nDigite o código do produto vendido: ");
    scanf("%d", &codv2);
    indiceProduto = codv2 - 1;
    // Verificar se código é válido
    if (indiceProduto < 0 || indiceProduto >= totalProdutos) {
        printf("\nCódigo inválido!\n");
        ven();
        return;
    }
    //Mostrar info do produto selecionado
    printf("\n%d | %s | %d unidades | R$%.2f\n", lala[indiceProduto].prodcod, lala[indiceProduto].prodnome, lala[indiceProduto].prodquant, lala[indiceProduto].prodpreco);
    printf("\nQuantas unidades o cliente adquiriu? ");
    scanf("%d", &compraquant);
    //Verificar estoque suficiente
    if(compraquant > lala[indiceProduto].prodquant) {
        printf("Estoque insuficiente!\n");
        ven();
        return;
    }
    //Calcular total da compra (sem desconto ainda)
    resp = lala[indiceProduto].prodpreco * compraquant;
    printf("\nTotal: R$%.2f\n", resp);
    // Escolha de forma de pagamento
    int card = 0;
    printf("\nQual a forma de pagamento?\n 1) Dinheiro\n 2) Cartão\n");
    scanf("%d", &card);
    switch(card) {
        case 1: {
            float valorpago, troco;
            // Aplicar desconto conforme valor
            if(resp <= 50){
                desco = resp * 0.05;
            }
            else if(resp < 100){
                desco = resp * 0.10;
            }
            else{
                desco = resp * 0.18;
            }
            reso = resp - desco;
            printf("Total com desconto: R$%.2f\n", reso);
            //Pagamento do cliente
            printf("Qual o valor pago pelo cliente? R$");
            scanf("%f", &valorpago);
            troco = valorpago - reso;
            if(troco < 0){
                printf("O valor pago é insuficiente! Compra cancelada.\n");
                ven();
                return;
            }
            if(saldo < troco){
                printf("Caixa sem dinheiro suficiente para troco!\n");
                printf("Compra não pode ser concluída.\n");
                ven();
                return;
            }
                // Compra aprovada!
                saldo += reso;
                saldo -= troco;
                lala[indiceProduto].prodquant -= compraquant;
                printf("Troco a ser devolvido: R$%.2f\n", troco);
                printf("Compra realizada com sucesso!\n");
                menu_principal();
                return;
            }

        case 2: {
            int cartaoc;
            printf("Cartão passou?\n 1) -Sim\n 2) -Não\n");
            scanf("%d", &cartaoc);

            if (cartaoc == 1) {
                // Compra aprovada via cartão
                lala[indiceProduto].prodquant -= compraquant;
                saldo += resp;
                printf("Compra realizada com sucesso!\n");
                menu_principal();
                return;
            } else if (cartaoc == 2) {
                int escolhac;
                printf("Cartão não autorizado.\n");
                printf("\n1) -Pagar no dinheiro\n2) -Cancelar compra\n");
                scanf("%d", &escolhac);

                if (escolhac == 1) {
                    ven(); // Volta ao início do processo
                    return;
                } else if (escolhac == 2) {
                    printf("Compra cancelada.\n");
                    menu_principal();
                    return;
                }
            }
            break;
        }
        default:
            printf("Opção inválida!\n");
            ven();
            return;
    }

    } else if (codv == 2) {
        menu_principal();
        return;
    } else {
        printf("\nCódigo inválido!\n");
        ven();
        return;
    }
}
void menu_principal(){//Menu principal
    char menu;
    printf ("\n-----Menu Principal-----\n");
    printf ("\n e) -Controle de Estoques\n f) -Controle Financeiro\n v) -Controle de Vendas\n s) -Sair\n \nEscolha:");
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
            printf("\n\n Programa encerrado!\n");
            exit (0);
        default:
            printf ("\n Opção inválida!\n");
            menu_principal();
            return;
            break;
    }
}

int main(){//Bem vindo!
    printf ("\n Seja bem vindo(a) ao Controle Comercial Ice Ball\n");
    menu_principal();
    return 0;
}