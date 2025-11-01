#include <stdio.h>

/*
O que você vai fazer
Seu programa em C deve agora permitir ao usuário inserir os dados de duas cartas, 
assim como nos níveis anteriores, mas com uma mudança importante: a população agora deve ser 
armazenada como unsigned long int para acomodar números maiores. As demais informações permanecem com os mesmos tipos. 
Após a leitura dos dados, seu programa deverá:
Calcular a Densidade Populacional e o PIB per Capita: Assim como no nível intermediário, calcule e armazene esses valores.
 
Calcular o Super Poder: Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos 
(população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). 
Armazene o Super Poder como float. Atenção: Preste muita atenção na conversão de tipos ao somar valores de tipos diferentes!
 
Comparar as Cartas: Compare as duas cartas atributo por atributo (exceto estado, código e nome), incluindo o Super Poder. 
Lembre-se: para a densidade populacional, a carta com o menor valor vence; para os demais atributos (incluindo Super Poder), a carta com o maior valor vence.
 
Exibir os Resultados das Comparações: Para cada atributo, imprima na tela qual carta venceu (Carta 1 ou Carta 2), 
exibindo o resultado da comparação (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).
 
Exemplo de Saída (após a entrada dos dados):

 

Comparação de Cartas:

População: Carta 1 venceu (1)

Área: Carta 1 venceu (1)

PIB: Carta 1 venceu (1)

Pontos Turísticos: Carta 1 venceu (1)

Densidade Populacional: Carta 2 venceu (0)

PIB per Capita: Carta 1 venceu (1)

Super Poder: Carta 1 venceu (1)
*/

int main() {
    //início do código
    //variaveis para a carta 01
    char letra1;
    char codigo1[10];
    char cidade1[30];  
    unsigned long int pop1;   //população
    int tur1; 
    double pib1;
    float area1;
    float densid1;  //densidade populacional
    float capita1;  //PIB per capita
    float superpoder; //soma de todos atributos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional)
   

    //variaveis para a carta 02
    char letra2;
    char codigo2[10];
    char cidade2[30];  
    unsigned long int pop2;   //população
    int tur2; 
    double pib2;
    float area2;
    float densid2;  //densidade populacional
    float capita2;  //PIB per capita
    float superpoder2; //soma de todos atributos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional)
   


         //Início do jogo
         printf("\nseja bem vindo ao jogo de Cartas Super trunfo\n");
         
         // Leitura de dados da carta 01
         printf("\n---Cadastro da carta 01--- \n");
         
         //Nome da sua cidade
         printf("Digite o nome da cidade: \n");   //ex: Natal
         fgets(cidade1, 30, stdin);
         
         //Um estado 
         printf("A - RN\nB - CE\nC - PE\nD - SP\nE - RJ\nF - MG\nG - RS\nH - PR\n");
         printf("\nEscolha um estado do A ao H\n");   //ex: Rio de Janeiro(RJ)
         
         printf("Estado (A-H): ");  //a escolha do A ao H representa os 8 estados 
         scanf("%c", &letra1);
         
         //Código da carta
         printf("A letra do estado seguida de um número de 01 a 04: \n");  //ex: B01
         scanf(" %s", codigo1);

         //Densidade Populacional: etapa de levantamento de números
         printf("Qual o tamanho populacional da sua cidade: \n");   //ex: 40000
         scanf("%lu", &pop1);

         //Pib total
         printf("Qual o valor do PIB: \n");   //ex: 20000000
         scanf("%lf", &pib1);

         //Pontos turísticos da cidade escolhida
         printf("Quantos pontos turísticos tem nessa cidade?: \n");   //ex: 10
         scanf("%d", &tur1);

         //Aréa da sua cidade
         printf("qual o tamanho da cidade escolhida: \n");   //ex: 15000
         scanf("%f", &area1);

         //Densidade populacional: etapa de calcúlo   
         densid1 = (float) pop1 / area1;   //população / área da cidade

         //PIB per capita
         capita1 = (float) pib1 / pop1;

         //super poder, consiste na soma de todos os atributos da carta
         superpoder = (float) pop1 + area1 + pib1 + tur1 + capita1 + 1 / densid1;


         // Leitura de dados da carta 02
         printf("\n---Cadastro da carta 02--- \n");
         
         //Nome da sua cidade
         printf("Digite o nome da cidade: \n");   //ex: João Pessoa
         scanf(" %[^\n]", cidade2);  // Corrigido para ler nome com espaços
         //fgets(cidade2, 30, stdin);
         
         //Um estado 
         printf("A - RN\nB - CE\nC - PE\nD - SP\nE - RJ\nF - MG\nG - RS\nH - PR\n");
         printf("\nEscolha um estado do A ao H\n");   //ex: São Paulo(SP)
         
         printf("Estado (A-H): ");  //a escolha do A ao H representa os 8 estados 
         scanf(" %c", &letra2);
         
         //Código da carta
         printf("A letra do estado seguida de um número de 01 a 04: \n");  //ex: A02
         scanf("%s", codigo2);

         //A população da sua cidade
         printf("Qual o tamanho populacional da sua cidade: \n");   //ex: 60000
         scanf("%lu", &pop2);

         //Pib total
         printf("Qual o valor do PIB: \n");   //ex: 4000000
         scanf("%lf", &pib2);

         //Pontos turísticos da cidade escolhida
         printf("Quantos pontos turísticos tem nessa cidade?: \n");   //ex: 22
         scanf("%d", &tur2);

         //Aréa da sua cidade
         printf("qual o tamanho da cidade escolhida: \n");   //ex: 2000
         scanf("%f", &area2);

         //Densidade populacional: etapa de calcúlo   
         densid2 = (float) pop2 / area2;   //população / área da cidade

         //PIB per capita
         capita2 = (float) pib2 / pop2;

         //super poder, consiste na soma de todos os atributos da carta
         superpoder2 = (float) pop2 + area2 + pib2 + tur2 + capita2 + 1 / densid2;


         //Saída de dados da carta 01
         printf("\nDados da Carta 01\n");
         printf("Estado: %c \n", letra1);
         printf("esse será o código da sua carta: %s \n", codigo1);
         printf("Cidade: %s", cidade1);
         printf("População: %lu \n", pop1);
         printf("PIB: R$ %0.f \n", pib1);
         printf("Pontos turísticos: %d \n", tur1);
         printf("Tamanho da cidade: %.2f por Km^2 \n", area1);
         printf("Densidade populacional: %.1f \n -- note-se de que quanto menor o valor, mais poder tem", densid1);
         printf("PIB per capita: R$ %.2f \n", capita1);
         printf("Superpoder da carta 01: %.2f", superpoder);


         //Saída de dados da carta 02
         printf("\nDados da Carta 02\n");
         printf("Estado: %c \n", letra2);
         printf("esse será o código da sua carta: %s \n", codigo2);
         printf("Cidade: %s \n", cidade2);
         printf("População: %lu \n", pop2);
         printf("PIB: R$ %0.f \n", pib2);
         printf("Pontos turísticos: %d \n", tur2);
         printf("Tamanho da cidade: %.2f por Km^2 \n", area2);
         printf("Densidade populacional: %.1f \n -- note-se de que quanto menor o valor, mais poder tem", densid2);
         printf("PIB per capita: R$ %.2f \n", capita2);
         printf("Superpoder da carta 02: %.2f", superpoder2);

         //Carta 01 - pré estapa da Comparação de cartas
         printf("Para fins à próxima etapa, preciso que o usuário coloque o Estado da Carta 01 (de forma abreviada)");
         char estado1[10];
         scanf("%s", estado1);

         //Carta 02 - pré estapa da Comparação de cartas
         printf("Para fins à próxima etapa, preciso que o usuário coloque o Estado da Carta 01 (de forma abreviada)");
         char estado2[10];
         scanf("%s", estado2);
         
         //Comparação das cartas     

         //Super Poder - Maior vence
         printf("\n___Comparação de cartas (Atributo: Super Poder)___\n");
         printf("Carta 1 - Super poder de %s (%s): %f\n",cidade1, estado1, superpoder);
         printf("Carta 2 - Super poder de %s (%s): %f\n",cidade2, estado2, superpoder2);

         if(superpoder > superpoder2){
            printf("Resultado: Carta 1 (%s) vence!", cidade1);
         }else {
            printf("Resultado: Carta 2 (%s) vence!", cidade2);
         }
         //Menu Interativo
         int opcao;
         printf("\n--- Bem Vindo a aba de Comparação de Atributos das Cartas Super Trunfo ---\n");
         printf("1- Prosseguir?\n");
         printf("2- Encerrar?\n");
         scanf("%d", &opcao);

         switch(opcao) {
            case 1: {
            int comparacao;
         printf("### Comparação de Atributos ###\n");
         printf("1 - População\n");
         printf("2 - Área\n"); 
         printf("3 - PIB\n");
         printf("4 - Pontos Turísticos\n");
         printf("5 - Densidade Populacional\n");
         printf("Qual Atributo Você quer comparar\n");
         scanf("%d", &comparacao);
         
         switch(comparacao) {
            case 1:
            printf("%s - %lu x %s - %lu", cidade1, pop1, cidade2, pop2);
            if (pop1 == pop2){
               printf("Empate!!\n");
            }else if (pop1 > pop2){
               printf("%s Venceu essa!\n", cidade1);
            }else{
               printf("%s Venceu essa!\n", cidade2);
            }
            break;
            case 2:
            printf("%s tem aproximadamente %f x %s tem aproximadamente %f", cidade1, area1, cidade2, area2);
            if (area1 == area2){
               printf("Empate!!\n");
            }else if (area1 > area2){
               printf("%s Venceu essa!\n", cidade1);
            }else{
               printf("%s Venceu essa!\n", cidade2);
            }
            break;
            case 3:
            printf("%s com %f x %s com %f", cidade1, pib1, cidade2, pib2);
            if (pib1 == pib2){
               printf("Empate!!\n");
            }else if (pib1 > pib2){
               printf("%s Venceu essa!\n", cidade1);
            }else{
               printf("%s Venceu essa!\n", cidade2);
            }
            break;
            case 4:
            //printf("\n___Comparação de cartas (Atributo: Pontos turísticos)___\n");
            printf("Carta 1 -  %s (%s): %d\n", cidade1, estado1, tur1);
            printf("Carta 2 -  %s (%s): %d\n", cidade2, estado2, tur2);
            if(tur1 == tur2){
            printf("Resultado: Empate!!");
            }else if(tur1 > tur2){
            printf("Resultado: Carta 1 (%s) é a vencedora!!\n", cidade1);
            }else {
            printf("Resultado: Carta 2 (%s) é a vencedora!!\n", cidade2);
            }
            break;
            case 5:
            printf("Densidade populacional: %.1f \n -- Carta 1 -- %s", densid1, cidade1);
            printf("Densidade populacional: %.1f \n -- Carta 2 -- %s", densid2, cidade2);
            if(densid1 == densid2){
            printf("Resultado: Empate!!");
            }else if(densid1 < densid2){
            printf("Resultado: Carta 1 (%s) é a vencedora!!\n", cidade1);
            }else {
            printf("Resultado: Carta 2 (%s) é a vencedora!!\n", cidade2);
            }
            break;
            default:
            printf("Opção Inválida!");
            break;
            }
         break;
         }
         case 2:
         printf("Encerrando o Programa...\n");
         break;
         default:
         printf("Opção Inválida!! Encerrando o Programa...\n");
         break;
         }

     return 0;
}