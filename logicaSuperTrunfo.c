#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);


//Nesse programa vamos começar definido as variaveis, 

//O que são variáveis?

//Pense nas variáveis como caixas onde você pode armazenar informações. Cada caixa tem um nome, e você pode usar esse nome para colocar algo dentro dela ou pegar o que está lá. Em programação, essas caixas são usadas para guardar valores que podem mudar enquanto o programa está rodando.

//Nesse vamos usar esse variaveis abaixo;

//int ;     // Declara uma variável inteira chamada - populaçõa, númerodepontosturísticos, populaçõa2, númerodepontosturísticos2
 
//float ;   // Declara uma variável de ponto flutuante chamada - área, pib e área2, pib2
 
//double ; // Declara uma variável de ponto flutuante de dupla precisão chamada 
 
//char ;    // Declara uma variável de caractere chamada - Estado, codigo[3], nomedacidade[20] e Estado, codigo2[3], nomedacidade2[20]

//

    // Variaveis da carta 1

    char Estado; // variavel que vai armazenar os dados do estado que será uma letra da cidade 1.
    char codigo[4];  // variavel que vai armazenar os dados do codigo do cidade 1.
    char nome_cidade[20]; // variavel que vai armazenar os dados do nome da cidade 1.
    unsigned long int população; // variavel que vai armazenar os dados da população 1.
    float área; // variavel que vai armazenar os dados da area da cidade 1.
    float pib; // variavel que vai armazenar os dados do PIB da cidade 1.
    int númerodepontosturísticos; // variavel que vai armazenar os dados Números de pontos turisticos cidade 1.
    float DensidadePopulacional;  // variavel que vai armazenar o calculo da Densidade Populacional da cidade 1.
    float PIBperCapita;  // variavel que vai armazenar o calculo do PIB per Capita da cidade 1.

    //  Da para notar que na variavel "char" usamos o colchetes "[ ]" isso serve para indicar o tamanho da variavel,
    // nesse caso a variavel "codigo" tem o tamanho de 3 caracteres e a variavel "nome_cidade " tem o tamanho de 20 caracteres. 

    // variaveis da carta 2

    char Estado2; // variavel que vai armazenar os dados do estado que será uma letra da cidade 2.
    char codigo2[4]; // variavel que vai armazenar os dados do codigo da cidade 2.
    char nome_cidade2[20]; // variavel que vai armazenar os dados do nome da cidade 2.
    unsigned long int população2; // variavel que vai armazenar os dados da população 2.
    float área2; // variavel que vai armazenar os dados da area da cidade 2.
    float pib2; // variavel que vai armazenar os dados do PIB da cidade 2.
    int númerodepontosturísticos2; // variavel que vai armazenar os dados Números de pontos turisticos cidade 2.
    float DensidadePopulacional2; // variavel que vai armazenar o calculo da Densidade Populacional da cidade 2.
    float PIBperCapita2; // variavel que vai armazenar o calculo do PIB per Capita da cidade 2.

    //Depois de determinar as variaveis vamos para a parte de entrada e saída.

    // vamos usar os codigos "printf" e "scanf" para isso.

    // "printf" e usado para exibir as infornações na tela do usuario (saída), 
    // quando usar esse codigo devemos coloca abrir parecentes "(" e colocar aspas e fechar aspas "" e depois 
    // fechar os parenteres ")" e depois colocar ponto e virgula ";", 
    // ( serve para indicar o fim da linha de codigo quase todo codigo em C termina assim), EXEMPLO; printf("OLá mundo"); 
    // se tudo estiver certo o que estiver dentros das aspas será exibido para o usuario.

    // "scanf" Serve para escaniar o que o usuario digita no teclado, para usar ele e bem parecido 
    //  com o printf, você vai ter que abrir parenteses e abrir aspas dentro dos parenteses e ponto 
    // e virgula para indicar que o codigo encerrou. dentro das aspas você vai ter que colocar os 
    // formatos das variares, e colocar uma virgula depois de fecha aspas dando um espaço e logo apos um "e" comercial & junto com o nome da variavel.

    // sempre seguindo esse orgem: scanf(''formato'', &variavel);

    // a uma ocasião aonde não se coloca  o & comercial junto com o nome da variavel, e quando você
    // for usar o formato %s (string) para pegar textos, nesse caso você não usa o & comercial.

    // EXEMPLO: Scanf(%d, &Estado1); , Nesse casos %d e o indicado de formato.

    //sempre segindo essa ordem 


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
    scanf("%d", &númerodepontosturísticos ); 

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
    scanf("%d", &númerodepontosturísticos2 );

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
    printf("Número de Pontos Turísticos: %d \n", númerodepontosturísticos);
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
    printf("Número de Pontos Turísticos: %d \n", númerodepontosturísticos2);
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

    return 0; // indica que o programa terminou com sucesso.

}


