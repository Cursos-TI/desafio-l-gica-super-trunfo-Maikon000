#include  <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main (){

    int escolhardojogador;
    int primeiroatributo, segundoatributo, terceiroatributo; // Variáveis para armazenar os atributos escolhidos pelos jogadores.

    // Carta 1
    char Estado; // variavel que vai armazenar os dados do estado que será uma letra da cidade 1.
    char codigo[4];  // variavel que vai armazenar os dados do codigo do cidade 1.
    char nome_cidade[20]; // variavel que vai armazenar os dados do nome da cidade 1.
    unsigned long int população; // variavel que vai armazenar os dados da população 1.
    float área; // variavel que vai armazenar os dados da area da cidade 1.
    float pib; // variavel que vai armazenar os dados do PIB da cidade 1.
    float númerodepontosturísticos; // variavel que vai armazenar os dados Números de pontos turisticos cidade 1.
    float DensidadePopulacional;  // variavel que vai armazenar o calculo da Densidade Populacional da cidade 1.
    float PIBperCapita;  // variavel que vai armazenar o calculo do PIB per Capita da cidade 1.

    //  Na variavel "char" usamos os colchetes "[...]" isso serve para indicar o tamanho maximo da variavel, nesse caso a variavel "codigo" tem o tamanho maximo de 4 caracteres e a "nome_cidade " tem 20 caracteres. 

    // Carta 2 
    char Estado2; // variavel que vai armazenar os dados do estado que será uma letra da cidade 2.
    char codigo2[4]; // variavel que vai armazenar os dados do codigo da cidade 2.
    char nome_cidade2[20]; // variavel que vai armazenar os dados do nome da cidade 2.
    unsigned long int população2; // variavel que vai armazenar os dados da população 2.
    float área2; // variavel que vai armazenar os dados da area da cidade 2.
    float pib2; // variavel que vai armazenar os dados do PIB da cidade 2.
    float númerodepontosturísticos2; // variavel que vai armazenar os dados Números de pontos turisticos cidade 2.
    float DensidadePopulacional2; // variavel que vai armazenar o calculo da Densidade Populacional da cidade 2.
    float PIBperCapita2; // variavel que vai armazenar o calculo do PIB per Capita da cidade 2.

    // variaveis do jogo de 2 atributos; 

    float ataque1, ataque2; // Variáveis para armazenar os valores de ataque dos jogadores.
    float defesa1, defesa2; // Variáveis para armazenar os valores de defesa dos jogadores.
    float recuo1, recuo2; // Variáveis para armazenar os valores de recuo dos jogadores.
    int resultado1, resultado2, resultado3; // Variáveis para armazenar os resultados das comparações dos atributos.

    // Menu de opções para o jogador escolher o modo de jogo.
    printf("Bem vindo ao Super Trunfo de Cidades!\n\n");
    printf("Escolha Umas das Opções para seguir:\n"); // Menu de opções para o jogador.
    printf("1 - jogar- 1 atrinuto\n"); // Opção 1 do menu. jogar com uma caracteristica escolhida pelo jogador.
    printf("2 - jogar com todas as caracteristicas\n"); // Opção 2 do menu. jogar com todas as caracteristicas.
    printf("3 - jogar - 2 atributos.\n");   // Opção 3 do menu. Exibir as regras do jogo.
    printf("4 - Regras\n"); //    Opção 4 do menu. Sair do jogo.
    printf("5 - Sair\n\n"); // Opção 5 do menu. Sair do jogo.
    printf("Digite o número correspondente à sua escolha: ");  // Solicita ao jogador que digite sua escolha.
    scanf("%d", &escolhardojogador); // Lê a escolha do jogador e armazena na variavel escolhardojogador.

    // Estrutura switch para lidar com a escolha do jogador. switch case. funciona como uma série de if else. 
    // o jogador escolhe uma opção e o sistema executa o código correspondente na case de acordo com número.

    switch (escolhardojogador) {
        case 1: 

        printf("Antes vamos ditar o nome das Cidades!.\n");

        printf("Digite O nome da cidade 1 apenas um nome ou todas as palavras juntas: \n");
        scanf("%s", nome_cidade); // Nesse caso podemos notar que não colocamos o & comercial pois foi usado  formaro %s.

        printf("Digite O nome da cidade 2 apenas um nome ou todas as palavras juntas: \n");
        scanf("%s", nome_cidade2); // Nesse caso podemos notar que não colocamos o & comercial pois foi usado  formaro %s.

        printf("Agora escolha qual caracteristica vai ser a rodada.\n");

            printf("Esclha qual das caracteristica vai ser a rodada.\n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");     
            printf("4 - Número de Pontos Turísticos\n");
            printf("5 - Densidade Populacional\n");
            printf("Digite o número correspondente à sua escolha: "); 
            scanf("%d", &escolhardojogador);

            switch (escolhardojogador) {
                case 1: // case 1 População 

                    printf("Digite O número de habitantes da cidade 1: \n");
                    scanf("%lu", &população);

                    printf("Digite O número de habitantes da cidade 2: \n");
                    scanf("%lu", &população2);

                    printf(" %s X %s \n", nome_cidade, nome_cidade2);

                    printf("A maior população vence! \n");

                    printf(" %lu X %lu \n", população, população2);

                    if ( população == população2 ) { printf(" Empate (1)\n"); } //if else usado para fazer decisões no codigo.
                    else if (população > população2){ printf("%s venceu\n", nome_cidade);} else { printf("%s venceu\n", nome_cidade2);} //else usado para definir o que acontece se a condição do if for falsa.
                    // estrutura aninhada if else. um if else dentro de outro if else.

                    break; // break e usado para sair do switch case depois que uma case e executada.
                case 2: // case 2 Área

                    printf("Digite A área da cidade em quilômetros quadrados(em km²): \n");
                    scanf("%f", &área);

                    printf("Digite A área da cidade em quilômetros quadrados(em km²): \n");
                    scanf("%f", &área2);

                    printf(" %s X %s \n", nome_cidade, nome_cidade2);

                    printf("A maior área vence! \n");

                    printf(" %f X %f \n", área, área2);
 
                    if ( área > área2 ) { printf("%s venceu (1)\n", nome_cidade); } else if (área == área2 ){ printf("Empate (1)\n");} 
                    else{ printf("%s venceu!\n", nome_cidade2);}

                    break;
                case 3:

                    printf("Digite o Produto Interno Bruto PIB da cidade 1, coloque o numero em bilhões e apenas um ponto segindo o EXEMPLO; 699.28...: \n");
                    scanf("%f", &pib);

                    printf("Digite o Produto Interno Bruto PIB da cidade 2, coloque o numero em bilhões e apenas um ponto segindo o EXEMPLO; 699.28...: \n");
                    scanf("%f", &pib2);

                    printf(" %s X %s \n", nome_cidade, nome_cidade2);

                    printf("O maior PIB vence! \n");

                    printf(" %f X %f \n", pib, pib2);

                    if ( pib > pib2 ) { printf("Carta 1 venceu (1)\n"); } else if ( pib == pib2) { printf("Empate!\n"); }
                    else{ printf("Carta 2 venceu!\n");}

                    break;     
                case 4:

                    printf("Digite a quantidade de pontos turísticos da cidade: \n");
                    scanf("%f", &númerodepontosturísticos ); 

                    printf("Digite a quantidade de pontos turísticos da cidade: \n");
                    scanf("%f", &númerodepontosturísticos2 );

                    printf(" %s X %s \n", nome_cidade, nome_cidade2);

                    printf("O maior numero de pontos turistico vence! \n");

                    printf(" %f X %f \n", númerodepontosturísticos, númerodepontosturísticos2);

                    printf ("Pontos Turísticos: "); if ( númerodepontosturísticos > númerodepontosturísticos2 ) { printf("Carta 1 venceu!\n"); } 
                    else if( númerodepontosturísticos == númerodepontosturísticos2) { printf("Empate!\n");}  else { printf("Carta 2 venceu!\n"); }

                    break;
                case 5:

                    printf("Digite O número de habitantes da cidade 1: \n");
                    scanf("%lu", &população);

                    printf("Digite O número de habitantes da cidade 2: \n");
                    scanf("%lu", &população2);

                    printf("Digite A área da cidade 1 em quilômetros quadrados(em km²): \n");
                    scanf("%f", &área);

                    printf("Digite A área da cidade 2 em quilômetros quadrados(em km²): \n");
                    scanf("%f", &área2);

                    DensidadePopulacional = (população / área); // calculo da Densidade Populacional da cidade 1. 
                    DensidadePopulacional2 = (população2 / área2); // calculo da Densidade Populacional da cidade 2.

                    printf(" %s X %s \n", nome_cidade, nome_cidade2);

                    printf("A Menor dencidade populacional vence! \n");

                    printf(" %.2f X %.2f \n", DensidadePopulacional, DensidadePopulacional2);

                    if ( DensidadePopulacional == DensidadePopulacional2 ) { printf("Empate\n"); } 
                    else if (DensidadePopulacional2 < DensidadePopulacional) { printf("Carta 2 venceu!\n"); } 
                    else { printf("Carta 1 venceu!\n"); } 

                    break;

                default:
                    printf("Opção inválida. Por favor, escolha uma opção válida.\n");

            }


            break;
        case 2:

            printf("Super Trunfo de Países\n\nNesse jogo você comparar duas cidades, o sistema vai pedir para você os dados de 2 cartas você vai colocar vai digitar os dados. começando pela carta 1.\n\nCarta 1\n\n");

    // "\n" Serve para pular linha. isso deixa o codigo maisorganizado e mais facil de ler.

    // Aqui estão abaixo os formatos das variaveis.

    //%d: Imprime um inteiro no formato decimal.
 
    //%i: Equivalente a %d.
 
    //%f: Imprime um número de ponto flutuante no formato padrão.
 
    //%e: Imprime um número de ponto flutuante na notação científica.
 
    //%c: Imprime um único caractere.
 
    //%s: Imprime uma cadeia (string) de caracteres.

    // DADOS DA CARTA 1, Nesse caso o sistema vai peguntas para o jogador os dados da varta dois e ele vai digitar para o sistema coletar os dados.
    
    // Carta 1: " Use esse dados caso não tenha ideia do que digitar"
    // Estado: A
    // Código: A01
    // Nome da Cidade: São Paulo
    // População: 12325000
    // Área: 1521.11 km²
    // PIB: 699.28 bilhões de reais
    // Número de Pontos Turísticos: 50

    printf("Digite uma letra de 'A' a 'H': \n"); // nesse caso podemos notar o uso do \n.
    scanf("%s", &Estado); // Nesse caso %s e o formato usado para pegar o dado digitado pelo usuario. &estado e o nome da variavel que vai armazenar o dado digitado peelo usuario.
    
    printf("Digite a letra do estado seguida de um número de 01 a 04, ex(A01, B02...): \n");
    scanf("%s", codigo);

    printf("Digite O nome da cidade apenas um nome ou todas as palavras juntas: \n");
    scanf("%s", nome_cidade); // Nesse caso podemos notar que não colocamos o & comercial pois foi usado  formaro %s.

    printf("Digite O número de habitantes da cidade: \n");
    scanf("%lu", &população);

    printf("Digite A área da cidade em quilômetros quadrados(em km²): \n");
    scanf("%f", &área);

    printf("Digite o Produto Interno Bruto PIB da cidade 1, coloque o numero em bilhões e apenas um ponto segindo o EXEMPLO; 699.28...: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%f", &númerodepontosturísticos ); 

    printf("\n");

    // DADOS DAS CARTAS 2, Nesse caso o sistema vai peguntas para o jogador os dados da varta dois e ele vai digitar para o sistema coletar os dados.

    // // Carta 2 " Use esse dados caso não tenha ideia do que digitar"
    // Estado: B
    // Código: B02
    // Nome da Cidade: RiodeJaneiro
    // População: 6748000
    // Área: 1200.25 km²
    // PIB: 300.50 bilhões de reais
    // Número de Pontos Turísticos: 30
    
    printf("Digite uma letra de 'A' a 'H': \n");
    scanf("%s", &Estado2);
    
    printf("Digite a letra do estado seguida de um número de 01 a 04: \n");
    scanf("%s", codigo2);

    printf("Digite O nome da cidade com apenas uma palavra ou todas as palavras juntas: \n");
    scanf("%s", nome_cidade2);

    printf("Digite O número de habitantes da cidade: \n");
    scanf("%lu", &população2);

    printf("Digite A área da cidade em quilômetros quadrados(em km²): \n");
    scanf("%f", &área2);

    printf("Digite o Produto Interno Bruto PIB da cidade 2, coloque o numero em bilhões e apenas um ponto segindo o EXEMPLO; 699.28...: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: \n");
    scanf("%f", &númerodepontosturísticos2 );

    printf("\n");

    // Calculo de Densidade Populacional e PIB per Capita
    // nesse area abaixo estamos fazendo o calculo da Densidade Populacional e do PIB per Capita usando as formulas.
    // Densidade Populacional = População / Área,  = / significa dividido.  
    // PIB per Capita = PIB / População 
    // Esses calculos são importantes para comparar as cidades de forma mais detalhada.

    // Essa forma a seguir e usada para calcular a DensidadePopulacional = (float) (população / área); // densidade populacional da cidade 1.
    //Essa forma a seguir e usada para calcular o PIBperCapita = (float) ((pib * 100000000) / população);

    // * e o sinbolo de multiplicação.
    // / e o simbolo de divisão.
    // colocamos essa dados em parentes (pib * 100000000) para o sistema saber que e para multiplicar antes de fazer a divisão.
    // Colocamos o (float) para garantir que o resultado seja um número de ponto

    // Essa forma a seguir e usada para calcular a DensidadePopulacional2 = (float) (população2 / área2); // densidade populacional dq cidade 2.
    // Essa forma a seguir e usada para calcular oPIBperCapita2 = (float) ((pib2 * 100000000) / população2);

    // Depois do sistema coletar os dados ele vão ser exibidos para o jogador. 
    // Nesse campo abaixo esta o codigo para isso acontece.
    // para usar as variaveis ddigitadas pelo o jogador devems digitar o seginte codigo dentro do printf.
    // EXEMPLO: printf("Estado: %c \n", Estado);
    // Sempre seguindo essa ordem: printf(“%formato1 %formato2”, variável1, variável2);

    printf("Carta 1 \n");

    printf("Estado: %c \n", Estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", nome_cidade);
    printf("População: %lu \n", população);
    printf("Área: %.2f km² \n", área);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %f \n", númerodepontosturísticos);
    printf("Densidade Populacional: %.2f habitantes por km² \n", DensidadePopulacional = (float) (população / área));
    printf("PIB per Capita: %.2f reais \n", PIBperCapita = (float) ((pib * 1000000000) / população)); 

    // super poder das cartas,  Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, 
    // PIB per capita e o inverso da densidade populacional(1/Densidadepopulacional2) – quanto menor a densidade, maior o "poder"). 


    float Superpoderdacarta1 = (população + área + pib + númerodepontosturísticos + PIBperCapita + (1/DensidadePopulacional));

    printf("\n");
    
    printf("Carta 2 \n");

    printf("Estado: %c \n", Estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nome_cidade2);
    printf("População: %lu \n", população2);
    printf("Área: %.2f km² \n", área2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %f \n", númerodepontosturísticos2);
    printf("Densidade Populacional: %.2f habitantes por km² \n", DensidadePopulacional2 = (float) (população2 / área2));
    printf("PIB per Capita: %.2f reais \n\n", PIBperCapita2 = (float) ((pib2 * 1000000000) / população2));

    // super poder das cartas,  Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, 
    // PIB per capita e o inverso da densidade populacional(1/Densidadepopulacional2) – quanto menor a densidade, maior o "poder"). 

    float Superpoderdacarta2 = (população2 + área2 + pib2 + númerodepontosturísticos2 + PIBperCapita2 + (1/DensidadePopulacional2));

    // aqui abaixo esta o codigo para comparar as cartas usando os operadores relacionais.
    // operadores relacionais são símbolos que comparam dois valores e retornam um resultado verdadeiro (true) ou falso (false).
    // >  (maior que), <  (menor que), (01) indica que a carta 1 venceu. 02 indica que a carta 2 venceu. 
    // if else e usado para fazer decisões no codigo. else e usado para definir o que acontece se a condição do if for falsa. 
    // se a condição for verdadeira o codigo dentro do if sera executado, se for falsa o codigo dentro do else sera executado.

    printf ("Comparação de Cartas: \n");

    printf ("População: "); if ( população > população2 ) { printf("Carta 1 venceu (1)\n"); } else { printf("Carta 2 venceu (0)\n");}

    printf ("Área: "); if ( área > área2 ) { printf("Carta 1 venceu (1)\n"); } else { printf("Carta 2 venceu (0)\n");}

    printf ("PIB: "); if ( pib > pib2 ) { printf("Carta 1 venceu (1)\n"); } else { printf("Carta 2 venceu (0)\n");}

    printf ("Pontos Turísticos: "); if ( númerodepontosturísticos > númerodepontosturísticos2 ) { printf("Carta 1 venceu (1)\n"); } else { printf("Carta 2 venceu (0)\n"); }

    printf (" Densidade Populacional: "); if ( DensidadePopulacional < DensidadePopulacional2 ) { printf("Carta 1 venceu (1)\n"); } else { printf("Carta 2 venceu (0)\n"); }
        
    printf ("PIB per Capita: ");  if ( PIBperCapita > PIBperCapita2 ) { printf("Carta 1 venceu (1)\n"); } else { printf("Carta 2 venceu (0)\n"); }

    printf ("Super Poder: "); if ( Superpoderdacarta1 > Superpoderdacarta2 ) { printf("Carta 1 venceu (1)\n"); } else { printf("Carta 2 venceu (0)\n"); }
    

    // Tudo estiver certo o sistema vai exibir os dados dgitados pelo o jogador.

            break;
        case 3:
            printf("Bem vindo ao jogo de batalha de atributos!\n"); // Mensagem de boas-vindas ao jogador.

    printf("Nome da cidade 1: "); // Solicita ao jogador que escolha um atributo.
    scanf(" %s", nome_cidade); // Lê o atributo escolhido pelo jogador
    printf("Nome da cidade 2: "); // Solicita ao jogador que escolha um atributo.
    scanf(" %s", nome_cidade2); // Lê o atributo escolhido pelo jogador

    printf("Escolha um atributo para cada jogador:\n"); // Solicita ao jogador que escolha um atributo.
    printf("1 - População\n"); // Opção de atributo Ataque.
    printf("2 - Área\n"); // Opção de atributo Defesa.
    printf("3 - PIB\n"); // Opção de atributo Recuo.
    printf("4 - Numero de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Jogador 1, escolha seu atributo: "); // Solicita ao jogador 1 que escolha um atributo.
    scanf(" %d", &primeiroatributo); // Lê o atributo escolhido pelo jogador 1. 
    
    // Estrutura switch para determinar o atributo escolhido pelo jogador 1.

    switch  (primeiroatributo){ 
        case 1: // Caso o jogador 1 escolha Ataque.
        printf("Você população.\n");
        printf("População 1: \n");
        scanf(" %lu", &população);
        printf("População 2: \n");
        scanf(" %lu", &população2);
        resultado1 = população > população2 ? 1 : 0;
            break; // Sai do switch após processar o caso.

        case 2:
        printf("Você área.\n");
        printf("Área 1: \n");
        scanf(" %f", &área);
        printf("Área 2: \n");
        scanf(" %f", &área2);
            resultado1 = área > área2 ? 1 : 0;
            break;
        case 3:
        printf("Você PIB.\n");
        printf("PIB 1: \n");
        scanf(" %f", &pib);
        printf("PIB 2: \n");
        scanf(" %f", &pib2);
            resultado1 = pib > pib2 ? 1 : 0;
            break;

        case 4:
        printf("Você escolheu Numero de Pontos Turísticos.\n");
        printf("Numero de Pontos Turísticos 1: \n");
        scanf(" %f", &númerodepontosturísticos);
        printf("Numero de Pontos Turísticos 2: \n");
        scanf(" %f", &númerodepontosturísticos2);
            resultado1 = númerodepontosturísticos > númerodepontosturísticos2 ? 1 : 0;
            break;

        case 5:
        printf("Você escolheu Densidade Populacional.\n");
        printf("Densidade Populacional 1: \n");
        scanf(" %f", &DensidadePopulacional);
        printf("Densidade Populacional 2: \n");
        scanf(" %f", &DensidadePopulacional2);
            resultado1 = DensidadePopulacional < DensidadePopulacional2 ? 1 : 0;
            break;  

        case 6:
        printf("Você escolheu PIB per Capita.\n");
        printf("PIB per Capita 1: \n");
        scanf(" %f", &PIBperCapita);
        printf("PIB per Capita 2: \n");
        scanf(" %f", &PIBperCapita2);
            resultado1 = PIBperCapita > PIBperCapita2 ? 1 : 0;
            break;

        default:
            printf("Atributo invalido para o jogador 1.\n");
    }

    printf("Escolha o segundo atributo para cada jogador:\n");
    printf("1 - População\n"); // Opção de atributo Ataque.
    printf("2 - Área\n"); // Opção de atributo Defesa.
    printf("3 - PIB\n"); // Opção de atributo Recuo.
    printf("4 - Numero de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Jogador, escolha seu atributo: "); // Solicita ao jogador 1 que escolha um atributo.
    scanf(" %d", &segundoatributo);
    
    if (segundoatributo == primeiroatributo){
        printf("Atributo ja escolhido. Escolha outro atributo.\n");
    } else {

    switch  (segundoatributo){
        case 1: // Caso o jogador 1 escolha Ataque.
        printf("Você população.\n");
        printf("População 1: \n");
        scanf(" %lu", &população);
        printf("População 2: \n");
        scanf(" %lu", &população2);
        resultado2 = população > população2 ? 1 : 0;
            break; // Sai do switch após processar o caso.

        case 2:
        printf("Você área.\n");
        printf("Àrea 1: \n");
        scanf(" %f", &área);
        printf("Àrea 2: \n");
        scanf(" %f", &área2);
            resultado2 = área > área2 ? 1 : 0;
            break;
        case 3:
        printf("Você pib.\n");
        printf("PIB 1: \n");
        scanf(" %f", &pib);
        printf("PIB 2: \n");
        scanf(" %f", &pib2);
            resultado2 = pib > pib2 ? 1 : 0;
            break;

        case 4:
        printf("Você escolheu Numero de Pontos Turísticos.\n");
        printf("Numero de Pontos Turísticos 1: \n");
        scanf(" %f", &númerodepontosturísticos);
        printf("Numero de Pontos Turísticos 2: \n");
        scanf(" %f", &númerodepontosturísticos2);
            resultado2 = númerodepontosturísticos > númerodepontosturísticos2 ? 1 : 0;
            break;

        case 5:
        printf("Você escolheu Densidade Populacional.\n");
        printf("Densidade Populacional 1: \n");
        scanf(" %f", &DensidadePopulacional);
        printf("Densidade Populacional 2: \n");
        scanf(" %f", &DensidadePopulacional2);
            resultado2 = DensidadePopulacional < DensidadePopulacional2 ? 1 : 0;
            break;  

        case 6:
        printf("Você escolheu PIB per Capita.\n");
        printf("PIB per Capita 1: \n");
        scanf(" %f", &PIBperCapita);
        printf("PIB per Capita 2: \n");
        scanf(" %f", &PIBperCapita2);
            resultado2 = PIBperCapita > PIBperCapita2 ? 1 : 0;
            break;

        default:
            printf("Atributo invalido para o jogador 1.\n");
    } }

    if (segundoatributo == primeiroatributo == terceiroatributo){
        printf("Atributo ja escolhido. Escolha outro atributo.\n");
    } else { 

    printf("Escolha o terceiro atributo para cada jogador:\n");
    printf("1 - População\n"); // Opção de atributo Ataque.
    printf("2 - Área\n"); // Opção de atributo Defesa.
    printf("3 - PIB\n"); // Opção de atributo Recuo.
    printf("4 - Numero de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Jogador, escolha seu atributo: "); // Solicita ao jogador 1 que escolha um atributo.
    scanf(" %d", &terceiroatributo);

    switch (terceiroatributo){
        case 1: // Caso o jogador 1 escolha Ataque.
        printf("Você população.\n");
        printf("População 1: \n");
        scanf(" %lu", &população);
        printf("População 2: \n");
        scanf(" %lu", &população2);
        resultado3 = população > população2 ? 1 : 0;
            break; // Sai do switch após processar o caso.

        case 2:
        printf("Você área.\n");
        printf("Área 1: \n");
        scanf(" %f", &área);
        printf("Área 2: \n");
        scanf(" %f", &área2);
            resultado3 = área > área2 ? 1 : 0;
            break;
        case 3:
        printf("Você PIB.\n");
        printf("PIB 1: \n");
        scanf(" %f", &pib);
        printf("PIB 2: \n");
        scanf(" %f", &pib2);
            resultado3 = pib > pib2 ? 1 : 0;
            break;

        case 4:
        printf("Você escolheu Numero de Pontos Turísticos.\n");
        printf("Numero de Pontos Turísticos 1: \n");
        scanf(" %f", &númerodepontosturísticos);
        printf("Numero de Pontos Turísticos 2: \n");
        scanf(" %f", &númerodepontosturísticos2);
            resultado3 = númerodepontosturísticos > númerodepontosturísticos2 ? 1 : 0;
            break;

        case 5:
        printf("Você escolheu Densidade Populacional.\n");
        printf("Densidade Populacional 1: \n");
        scanf(" %f", &DensidadePopulacional);
        printf("Densidade Populacional 2: \n");
        scanf(" %f", &DensidadePopulacional2);
            resultado3 = DensidadePopulacional < DensidadePopulacional2 ? 1 : 0;
            break;  

        case 6:
        printf("Você escolheu PIB per Capita.\n");
        printf("PIB per Capita 1: \n");
        scanf(" %f", &PIBperCapita);
        printf("PIB per Capita 2: \n");
        scanf(" %f", &PIBperCapita2);
            resultado3 = PIBperCapita > PIBperCapita2 ? 1 : 0;
            break;

        default:
            printf("Atributo invalido para o jogador 1.\n");
    } }

    printf("%s X %s \n", nome_cidade, nome_cidade2);

    printf("Atributos escolhidos:\n");

    if(primeiroatributo == 1) { printf("População.\n"); } else if(primeiroatributo == 2){printf("Àrea\n");} else if(primeiroatributo == 3){printf("PIB.\n"); } 
    else if(primeiroatributo == 4){printf("Numero de Pontos Turísticos.\n"); } 
    else if(primeiroatributo == 5){printf("Densidade Populacional.\n"); } 
    else if(primeiroatributo == 6){printf("PIB per Capita.\n"); }   
    
    if(segundoatributo == 1) { printf("População.\n"); } else if(segundoatributo == 2){printf("Àrea\n");} else if(segundoatributo == 3){printf("PIB.\n"); } 
    else if(segundoatributo == 4){printf("Numero de Pontos Turísticos.\n"); } 
    else if(segundoatributo == 5){printf("Densidade Populacional.\n"); } 
    else if(segundoatributo == 6){printf("PIB per Capita.\n"); }

    if(terceiroatributo == 1) { printf("População.\n"); } else if(terceiroatributo == 2){printf("Àrea\n");} else if(terceiroatributo == 3){printf("PIB.\n"); } 
    else if(terceiroatributo == 4){printf("Numero de Pontos Turísticos.\n"); } 
    else if(terceiroatributo == 5){printf("Densidade Populacional.\n"); } 
    else if(terceiroatributo == 6){printf("PIB per Capita.\n"); }

    printf("Valores dos atributos escolhidos Atributos escolhidos:\n");

    if(primeiroatributo == 1) { printf("%lu X %lu.\n", população, população2);} 
    else if(primeiroatributo == 2){printf("%2.f X %2.f \n", área, área2);} 
    else if(primeiroatributo == 3){printf("%2.f X %2.f.\n", pib, pib2); } 
    else if(primeiroatributo == 4){printf("%2.f X %2.f.\n", númerodepontosturísticos, númerodepontosturísticos2); } 
    else if(primeiroatributo == 5){printf("%2.f X %2.f.\n", DensidadePopulacional, DensidadePopulacional2); } 
    else if(primeiroatributo == 6){printf("%2.f X %2.f.\n", PIBperCapita, PIBperCapita2); }  

    if(segundoatributo == 1) { printf("%lu X %lu.\n", população, população2);} 
    else if(segundoatributo == 2){printf("%2.f X %2.f \n", área, área2);} 
    else if(segundoatributo == 3){printf("%2.f X %2.f.\n", pib, pib2); } 
    else if(segundoatributo == 4){printf("%2.f X %2.f.\n", númerodepontosturísticos, númerodepontosturísticos2); } 
    else if(segundoatributo == 5){printf("%2.f X %2.f.\n", DensidadePopulacional, DensidadePopulacional2); } 
    else if(segundoatributo == 6){printf("%2.f X %2.f.\n", PIBperCapita, PIBperCapita2); }

    if(terceiroatributo == 1) { printf("%lu X %lu.\n", população, população2);} 
    else if(terceiroatributo == 2){printf("%2.f X %2.f \n", área, área2);} 
    else if(terceiroatributo == 3){printf("%2.f X %2.f.\n", pib, pib2); } 
    else if(terceiroatributo == 4){printf("%2.f X %2.f.\n", númerodepontosturísticos, númerodepontosturísticos2); } 
    else if(terceiroatributo == 5){printf("%2.f X %2.f.\n", DensidadePopulacional, DensidadePopulacional2); } 
    else if(terceiroatributo == 6){printf("%2.f X %2.f.\n", PIBperCapita, PIBperCapita2); }

    // SOMA DOS ATRIBUTOS DE CADA CARTA: 

    float soma1, soma2, soma3;
    float PAt1, PAt2, PAt3;
    float SAt1, SAt2, SAt3;

    // SOMA DOS ATRIBUTOS DA CARTA 1
    
    if(primeiroatributo == 1) { PAt1 = população;} 
    else if(primeiroatributo == 2){PAt1 = área;} 
    else if(primeiroatributo == 3){PAt1 = pib; } 
    else if(primeiroatributo == 4){PAt1 = númerodepontosturísticos; } 
    else if(primeiroatributo == 5){PAt1 = DensidadePopulacional; } 
    else if(primeiroatributo == 6){PAt1 = PIBperCapita; }

    if(primeiroatributo == 1) { PAt2 = população;} 
    else if(primeiroatributo == 2){PAt2 = área;} 
    else if(primeiroatributo == 3){PAt2 = pib; } 
    else if(primeiroatributo == 4){PAt2 = númerodepontosturísticos; } 
    else if(primeiroatributo == 5){PAt2 = DensidadePopulacional; } 
    else if(primeiroatributo == 6){PAt2 = PIBperCapita; }    

    if(primeiroatributo == 1) { PAt3 = população;} 
    else if(primeiroatributo == 2){PAt3 = área;} 
    else if(primeiroatributo == 3){PAt3 = pib; } 
    else if(primeiroatributo == 4){PAt3 = númerodepontosturísticos; } 
    else if(primeiroatributo == 5){PAt3 = DensidadePopulacional; } 
    else if(primeiroatributo == 6){PAt3 = PIBperCapita; }

    // DETERMINANDOS O VALOR DAS VARIAVEIS DA SOMA DA CARTA 2:

    if(primeiroatributo == 1) { SAt1 = população2;}
    else if(primeiroatributo == 2){SAt1 = área2;} 
    else if(primeiroatributo == 3){SAt1 = pib2; } 
    else if(primeiroatributo == 4){SAt1 = númerodepontosturísticos2; } 
    else if(primeiroatributo == 5){SAt1 = DensidadePopulacional2; } 
    else if(primeiroatributo == 6){SAt1 = PIBperCapita2; }

    if(primeiroatributo == 1) { SAt2 = população2;}
    else if(primeiroatributo == 2){SAt2 = área2;} 
    else if(primeiroatributo == 3){SAt2 = pib2; } 
    else if(primeiroatributo == 4){SAt2 = númerodepontosturísticos2; } 
    else if(primeiroatributo == 5){SAt2 = DensidadePopulacional2; } 
    else if(primeiroatributo == 6){SAt2 = PIBperCapita2; }

    if(primeiroatributo == 1) { SAt3 = população2;}
    else if(primeiroatributo == 2){SAt3 = área2;} 
    else if(primeiroatributo == 3){SAt3 = pib2; } 
    else if(primeiroatributo == 4){SAt3 = númerodepontosturísticos2; } 
    else if(primeiroatributo == 5){SAt3 = DensidadePopulacional2; } 
    else if(primeiroatributo == 6){SAt3 = PIBperCapita2; }  

    //SOMA DOS ATRIBUTOS DA CARTA 3:

    // SOMA DOS ATRIBUTOS DE CADA CARTA: 

    soma1 = PAt1 + PAt2 + PAt3;
    soma2 = SAt1 + SAt2 + SAt3;

    printf("Soma dos atributos da 1: %.2f\n", soma1);
    printf("Soma dos atributos da 2: %.2f\n", soma2);

    // QUAL CARTA VENCEU A BATALHA:

    if ( (resultado1 + resultado2 + resultado3) >= 2 ) {
        printf("Jogador 1 venceu a batalha!\n");
    } else {
        printf("Jogador 2 venceu a batalha!\n");
    }

            break;
            case 4:
            printf("REGRAS DO JOGO.\n");
            printf("1 - O jogo consiste em comparar um características de duas cidades.\n");
            printf("2 - compara varias caracteristicas das cartas.\n");
            printf("3 - Todos os atributos ganha o maior, em exerção a dencidade populacional que ganhar o menor valor. \n");

            break;

            case 5:
            printf("Obrigado por jogar! Até a próxima.\n");
            break;
            default:
            printf("Opção inválida. Por favor, escolha 1, 2 ou 3.\n");
    }


}
