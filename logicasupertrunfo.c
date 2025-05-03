#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    
    //variaveis das cartas

    char estado1[50] = {"Goiás"}, estado2[50] = {"Distrito Federal"};
    char codigoCarta1[20] = {"A01"}, codigoCarta2[20] = {"B02"};
    char nomeCidade1[100] = {"Goiânia"}, nomeCidade2[100] = {"Brasília"};
    int populacao1 = 1494599, populacao2 = 2982818;
    float area1 = 728.8, area2 = 5761;
    float pib1 = 59.8, pib2 = 286.94;
    int pontosTuristicos1 = 50, pontosTuristicos2 = 30;
    float densidade1, densidade2;
    float percap1, percap2;

    int atributo1, atributo2;
    int cadastrar;
    float resultado1, resultado2;

    //Apresentação do jogo

    printf("*******Bem vindo ao jogo SUPER TRUNFO*******\n\n");
    printf("As cartas já estão cadastradas com valores aleatórios.\n");

    //Foi realizado a interação com o usuario para se caso o usuário queira casdastrar novos valores nas cartas;

    printf("Gostaria de cadastrar novos valores para as cartas? Digite 1 para SIM e 2 para NÃO.\n");
    scanf("%d", &cadastrar);

    if(cadastrar == 1)
    {

        //Cadastro das cartas

        //*****************************DADOS DA PRIMEIRA CARTA*************************************

        //INSERINDO DADOS DO ESTADO
        getchar(); // limpar o buffer da próxima linha
        printf("Digite o nome do estado:\n");
        scanf("%[^\n]s", &estado1); //Atribuindo valor à variável estado1.
        printf("\n\n"); // Pulando linha para deixar a tela mais limpa.

        //INSERINDO DADOS DO CÓDIGO DA CARTA

        printf("Digite uma letra de 'A' a 'H' seguido de um número de '01' ao '04'. Ex (A01, B03):\n");
        scanf("%s", &codigoCarta1);
        printf("\n\n");// Pulando linha para deixar a tela mais limpa.

        //INSERINDO DADOS DO NOME DA CIDADE;

        getchar(); //// Limpar o buffer do caractere de nova linha
        printf("Digite o nome da cidade: \n");
        scanf("%[^\n]s", nomeCidade1);
        printf("\n\n");// Pulando linha para deixar a tela mais limpa.

        // INSERINDO OS DADOS DA QUANTIDADE DE HABITANTES

        printf("Digite o número de habitantes da cidade: \n");
        scanf("%d", &populacao1);
        printf("\n\n");// Pulando linha para deixar a tela mais limpa.

        //INSERINDO OS DADOS DA AREA

        printf("Digite o o tamanho em Km2 da cidade: \n");
        scanf("%f", &area1);
        printf("\n\n");// Pulando linha para deixar a tela mais limpa.

        //INSERINDO OS DADOS DO PIB

        printf("Digite o PIB da cidade em Bilhões de reais: \n");
        scanf("%f", &pib1);
        printf("\n\n");// Pulando linha para deixar a tela mais limpa.

        //INSERINDO A QUANTIDADE DE PONTOS TURÍSTICOS

        printf("Digite a quantidade de pontos turísticos da cidade: \n");
        scanf("%d", &pontosTuristicos1);
        printf("\n\n");// Pulando linha para deixar a tela mais limpa.

        //PRIMEIRA CARTA CADASTRADA.

        printf("Primeira carta cadastrada com sucesso. Insira os dados da segunda carta:\n\n");

        //********************************DADOS DA SEGUNDA CARTA****************************************

        //INSERINDO DADOS DO ESTADO
        getchar(); //// Limpar o buffer do caractere de nova linha
        printf("Digite o nome do estado:\n");
        scanf("%[^\n]s", estado2);
        printf("\n\n"); // Pulando linha para deixar a tela mais limpa.

        //INSERINDO DADOS DO CÓDIGO DA CARTA

        printf("Digite uma letra de 'A' a 'H' seguido de um número de '01' ao '04'. Ex (A01, B03):\n");
        scanf("%s", &codigoCarta2);
        printf("\n\n");// Pulando linha para deixar a tela mais limpa.

        //INSERINDO DADOS DO NOME DA CIDADE;

        getchar(); //// Limpar o buffer do caractere de nova linha
        printf("Digite o nome da cidade: \n");
        scanf("%[^\n]s", &nomeCidade2);
        printf("\n\n");// Pulando linha para deixar a tela mais limpa.

        // INSERINDO OS DADOS DA QUANTIDADE DE HABITANTES

        printf("Digite o número de habitantes da cidade: \n");
        scanf("%d", &populacao2);
        printf("\n\n");// Pulando linha para deixar a tela mais limpa.

        //INSERINDO OS DADOS DA AREA

        printf("Digite o o tamanho em Km2 da cidade: \n");
        scanf("%f", &area2);
        printf("\n\n");// Pulando linha para deixar a tela mais limpa.

        //INSERINDO OS DADOS DO PIB

        printf("Digite o PIB da cidade em Bilhões de reais: \n");
        scanf("%f", &pib2);
        printf("\n\n");// Pulando linha para deixar a tela mais limpa.

        //INSERINDO A QUANTIDADE DE PONTOS TURÍSTICOS

        printf("Digite a quantidade de pontos turísticos da cidade: \n");
        scanf("%d", &pontosTuristicos2);
        printf("\n\n");// Pulando linha para deixar a tela mais limpa.

        //SEGUNDA CARTA CADASTRADA.

    }

    //CALCULO DA DENSIDADE POPULACIONAL E DO PIB PER CAPITA.

    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    percap1 = (float) (pib1*1000000000) / populacao1; //Foi utilizado a conversão da unidade para bilhões.
    percap2 = (float) (pib2*1000000000) / populacao2; //Foi utilizado a conversão da unidade para bilhões.

    //**********************************************MENU****************************************************

    atributo1= 0;
    atributo2= 0;

    printf ("Escolha um dos atributos a ser comparado:\n\n");
    printf ("1. População;\n");
    printf ("2. Área;\n");
    printf ("3. PIB;\n");
    printf ("4. Número de pontos turísticos;\n");
    printf ("5. Densidade demográfica;\n");
    scanf("%d", &atributo1);
    printf("\n\n");

    // Escolha do segundo atributo.

    printf("escolha o segundo atributo a ser comparado:\n\n");

    // Lógica para não ser escolhido o mesmo atributo pelo usuário.

    printf(atributo1 == 1 ? "\n" : "1. População;\n");
    printf(atributo1 == 2 ? "\n" : "2. Área;\n");
    printf(atributo1 == 3 ? "\n" : "3. PIB;\n");
    printf(atributo1 == 4 ? "\n" : "4. Número de pontos turísticos;\n");
    printf(atributo1 == 5 ? "\n" : "5. Densidade demográfica;\n");

    getchar(); //Limpar buffer
    scanf("%d", &atributo2);
    printf("\n\n");

    //LÓGICA MENU

    int menu;

    atributo1 = atributo1*10;
    menu = atributo1 + atributo2;

    /*DESTA FORMA O PRIMEIRO ATRIBUTO ESCOLHIDO SEMPRE FICARÁ NA PRIMEIRA CASA DECIMAL E O SEGUNDO ATRIBUTO ESCOLHIDO
    SEMPRE ESTARÁ NA SEGUNDA CASA DECIMAL ESCOLHIDA.*/

    switch(menu)
    {
    case 12:  //ESTA LÓGICA PERMITE QUE A ORDEM DOS ATRIBUTOS ESCOLHIDOS PELO USUÁRIO NÃO ALTERE O RESULTADO.
    case 21:  //ATRIBUTO POPULAÇÃO E AREA;
        //SOMA DOS ATRIBUTOS
        resultado1 = (float) populacao1 + area1;
        resultado2 = (float) populacao2 + area2;

        // FOI UTILIZADO O "\T" PARA IDENTAR O TEXTO NA IMPRESSÃO E FICAR MAIS FÁCIL
        // PARA VISUZALIZAR OS VALORES E COMPARAR AS CARTAS.
        printf ("***************************COMPARAÇÃO DAS CARTAS***************************\n\n\n");
        //EXIBIÇÃO CARTA 01;

        printf("Carta 1:\n");
        printf("Estado: %s \n", estado1);
        printf("Código: %s\n", codigoCarta1);
        printf("Nome da cidade: %s\n", nomeCidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f\n", area1);
        printf("Valor da carta: %.2f\n", resultado1);
        printf("\n\n\n");

        //EXIBIÇÃO CARTA 02;

        printf("Carta 2:\n");
        printf("Estado: %s \n", estado2);
        printf("Código: %s\n", codigoCarta2);
        printf("Nome da cidade: %s\n", nomeCidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f\n", area2);
        printf("Valor da carta: %.2f\n", resultado2);
        printf("\n\n\n");

        // LÓGICA PARA MOSTRAR QUAL CARTA VENCEDORA OU SE DEU EMPATE.

        if (resultado1 > resultado2)
        {
            printf("Carta %s venceu", codigoCarta1);
        }
        else
        {
            if(resultado2 > resultado1)
            {
                printf("Carta %s venceu", codigoCarta2);
            }
            else
            {
                printf("O resultado das comparações foi EMPATE;");
            }
        }

        break;

    case 13:  //ATRIBUTO POPULAÇÃO E PIB
    case 31:
        //SOMA DOS ATRIBUTOS
        resultado1 = (float) populacao1 + pib1;
        resultado2 = (float) populacao2 + pib2;

        //EXIBIÇÃO CARTA 01
        printf("Carta 1:\n");
        printf("Estado: %s \n", estado1);
        printf("Código: %s\n", codigoCarta1);
        printf("Nome da cidade: %s\n", nomeCidade1);
        printf("População: %d\n", populacao1);
        printf("PIB: %.2f\n", pib1);
        printf("Valor da carta: %.2f\n", resultado1);
        printf("\n\n\n");

        //EXIBIÇÃO CARTA 02;

        printf("Carta 2:\n");
        printf("Estado: %s \n", estado2);
        printf("Código: %s\n", codigoCarta2);
        printf("Nome da cidade: %s\n", nomeCidade2);
        printf("População: %d\n", populacao2);
        printf("PIB: %.2f\n", pib2);
        printf("Valor da carta: %.2f\n", resultado2);
        printf("\n\n\n");


        // LÓGICA PARA MOSTRAR QUAL CARTA VENCEDORA OU SE DEU EMPATE.

        if (resultado1 > resultado2)
        {
            printf("Carta %s venceu", codigoCarta1);
        }
        else
        {
            if(resultado2 > resultado1)
            {
                printf("Carta %s venceu", codigoCarta2);
            }
            else
            {
                printf("O resultado das comparações foi EMPATE;");
            }
        }

        break;
    case 14:       //ATRIBUTO POPULAÇÃO E PONTOS TURÍSTICOS
    case 41:


        //SOMA DOS ATRIBUTOS
        resultado1 = (float) populacao1 + pontosTuristicos1;
        resultado2 = (float) populacao2 + pontosTuristicos2;

        //EXIBIÇÃO CARTA 01
        printf("Carta 1:\n");
        printf("Estado: %s \n", estado1);
        printf("Código: %s\n", codigoCarta1);
        printf("Nome da cidade: %s\n", nomeCidade1);
        printf("População: %d\n", populacao1);
        printf("Pontos turísticos: %d\n", pontosTuristicos1);
        printf("Valor da carta: %.2f\n", resultado1);
        printf("\n\n\n");

        //EXIBIÇÃO CARTA 02;

        printf("Carta 2:\n");
        printf("Estado: %s \n", estado2);
        printf("Código: %s\n", codigoCarta2);
        printf("Nome da cidade: %s\n", nomeCidade2);
        printf("População: %d\n", populacao2);
        printf("Pontos turísticos: %d\n", pontosTuristicos1);
        printf("Valor da carta: %.2f\n", resultado2);
        printf("\n\n\n");

        // LÓGICA PARA MOSTRAR QUAL CARTA VENCEDORA OU SE DEU EMPATE.

        if (resultado1 > resultado2)
        {
            printf("Carta %s venceu", codigoCarta1);
        }
        else
        {
            if(resultado2 > resultado1)
            {
                printf("Carta %s venceu", codigoCarta2);
            }
            else
            {
                printf("O resultado das comparações foi EMPATE;");
            }
        }

        break;
    case 15:                    //ATRIBUTOS POPULAÇÃO E DENSIDADE DEMOGRÁFICA
    case 51:

        //SUBTRAÇÃO DOS ATRIBUTOS
        resultado1 = (float) populacao1 - densidade1;
        resultado2 = (float) populacao2 - densidade2;

        //EXIBIÇÃO CARTA 01
        printf("Carta 1:\n");
        printf("Estado: %s \n", estado1);
        printf("Código: %s\n", codigoCarta1);
        printf("Nome da cidade: %s\n", nomeCidade1);
        printf("População: %d\n", populacao1);
        printf("Densidade demográfica: %.2f\n", densidade1);
        printf("Valor da carta: %.2f\n", resultado1);
        printf("\n\n\n");

        //EXIBIÇÃO CARTA 02;

        printf("Carta 2:\n");
        printf("Estado: %s \n", estado2);
        printf("Código: %s\n", codigoCarta2);
        printf("Nome da cidade: %s\n", nomeCidade2);
        printf("População: %d\n", populacao2);
        printf("Densidade demográfica: %.2f\n", densidade2);
        printf("Valor da carta: %.2f\n", resultado2);
        printf("\n\n\n");

        // LÓGICA PARA MOSTRAR QUAL CARTA VENCEDORA OU SE DEU EMPATE.

        if (resultado1 > resultado2)
        {
            printf("Carta %s venceu", codigoCarta1);
        }
        else
        {
            if(resultado2 > resultado1)
            {
                printf("Carta %s venceu", codigoCarta2);
            }
            else
            {
                printf("O resultado das comparações foi EMPATE;");
            }
        }

        break;

    case 23:                //ATRIBUTOS AREA E PIB
    case 32:

        //SOMA DOS ATRIBUTOS
        resultado1 = (float) pib1 + area1;
        resultado2 = (float) pib2 + area2;

        //EXIBIÇÃO CARTA 01
        printf("Carta 1:\n");
        printf("Estado: %s \n", estado1);
        printf("Código: %s\n", codigoCarta1);
        printf("Nome da cidade: %s\n", nomeCidade1);
        printf("Área: %.2f\n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Valor da carta: %.2f\n", resultado1);
        printf("\n\n\n");

        //EXIBIÇÃO CARTA 02;

        printf("Carta 2:\n");
        printf("Estado: %s \n", estado2);
        printf("Código: %s\n", codigoCarta2);
        printf("Nome da cidade: %s\n", nomeCidade2);
        printf("Área: %.2f\n", area2);
        printf("PIB: %.2f\n", pib2);
        printf("Valor da carta: %.2f\n", resultado2);
        printf("\n\n\n");
        // LÓGICA PARA MOSTRAR QUAL CARTA VENCEDORA OU SE DEU EMPATE.

        if (resultado1 > resultado2)
        {
            printf("Carta %s venceu", codigoCarta1);
        }
        else
        {
            if(resultado2 > resultado1)
            {
                printf("Carta %s venceu", codigoCarta2);
            }
            else
            {
                printf("O resultado das comparações foi EMPATE;");
            }
        }

        break;

    case 24:            // ATRIBUTOS AREA E PONTOS TURISTICOS
    case 42:

        //SOMA DOS ATRIBUTOS
        resultado1 = (float) pontosTuristicos1 + area1;
        resultado2 = (float) pontosTuristicos2 + area2;

        //EXIBIÇÃO CARTA 01
        printf("Carta 1:\n");
        printf("Estado: %s \n", estado1);
        printf("Código: %s\n", codigoCarta1);
        printf("Nome da cidade: %s\n", nomeCidade1);
        printf("Área: %.2f\n", area1);
        printf("Pontos turísticos: %d\n", pontosTuristicos1);
        printf("Valor da carta: %.2f\n", resultado1);
        printf("\n\n\n");

        //EXIBIÇÃO CARTA 02;

        printf("Carta 2:\n");
        printf("Estado: %s \n", estado2);
        printf("Código: %s\n", codigoCarta2);
        printf("Nome da cidade: %s\n", nomeCidade2);
        printf("Área: %.2f\n", area2);
        printf("Pontos turísticos: %d\n", pontosTuristicos2);
        printf("Valor da carta: %.2f\n", resultado2);
        printf("\n\n\n");

        // LÓGICA PARA MOSTRAR QUAL CARTA VENCEDORA OU SE DEU EMPATE.

        if (resultado1 > resultado2)
        {
            printf("Carta %s venceu", codigoCarta1);
        }
        else
        {
            if(resultado2 > resultado1)
            {
                printf("Carta %s venceu", codigoCarta2);
            }
            else
            {
                printf("O resultado das comparações foi EMPATE;");
            }
        }

        break;

    case 25:            //ATRIBUTOS AREA E DENSIDADE DEMOGRÁFICA
    case 52:

        //SUBTRAÇÃO DOS ATRIBUTOS
        resultado1 = (float) area1 - densidade1;
        resultado2 = (float) area2 - densidade2;

        //EXIBIÇÃO CARTA 01
        printf("Carta 1:\n");
        printf("Estado: %s \n", estado1);
        printf("Código: %s\n", codigoCarta1);
        printf("Nome da cidade: %s\n", nomeCidade1);
        printf("Área: %.2f\n", area1);
        printf("Densidade demográfica: %.2f\n", densidade1);
        printf("Valor da carta: %.2f\n", resultado1);
        printf("\n\n\n");

        //EXIBIÇÃO CARTA 02;

        printf("Carta 2:\n");
        printf("Estado: %s \n", estado2);
        printf("Código: %s\n", codigoCarta2);
        printf("Nome da cidade: %s\n", nomeCidade2);
        printf("Área: %.2f\n", area2);
        printf("Densidade demográfica: %.2f\n", densidade2);
        printf("Valor da carta: %.2f\n", resultado2);
        printf("\n\n\n");

        // LÓGICA PARA MOSTRAR QUAL CARTA VENCEDORA OU SE DEU EMPATE.

        if (resultado1 > resultado2)
        {
            printf("Carta %s venceu", codigoCarta1);
        }
        else
        {
            if(resultado2 > resultado1)
            {
                printf("Carta %s venceu", codigoCarta2);
            }
            else
            {
                printf("O resultado das comparações foi EMPATE;");
            }
        }

        break;

    case 34:            //ATRIBUTOS PIB E PONTOS TURÍSTICOS
    case 43:

        //SOMA DOS ATRIBUTOS
        resultado1 = (float) pib1 + pontosTuristicos1;
        resultado2 = (float) pib2 + pontosTuristicos2;

        //EXIBIÇÃO CARTA 01
        printf("Carta 1:\n");
        printf("Estado: %s \n", estado1);
        printf("Código: %s\n", codigoCarta1);
        printf("Nome da cidade: %s\n", nomeCidade1);
        printf("PIB: %.2f\n", pib1);
        printf("Pontos turísticos: %d\n", pontosTuristicos1);
        printf("Valor da carta: %.2f\n", resultado1);
        printf("\n\n\n");

        //EXIBIÇÃO CARTA 02;

        printf("Carta 2:\n");
        printf("Estado: %s \n", estado2);
        printf("Código: %s\n", codigoCarta2);
        printf("Nome da cidade: %s\n", nomeCidade2);
        printf("PIB: %.2f\n", pib2);
        printf("Pontos turísticos: %d\n", pontosTuristicos2);
        printf("Valor da carta: %.2f\n", resultado2);
        printf("\n\n\n");

        // LÓGICA PARA MOSTRAR QUAL CARTA VENCEDORA OU SE DEU EMPATE.

        if (resultado1 > resultado2)
        {
            printf("Carta %s venceu", codigoCarta1);
        }
        else
        {
            if(resultado2 > resultado1)
            {
                printf("Carta %s venceu", codigoCarta2);
            }
            else
            {
                printf("O resultado das comparações foi EMPATE;");
            }
        }

        break;

    case 35:        // ATRIBUTOS PIB E DENSIDADE DEMOGRAFICA;
    case 53:

        //SUBTRAÇÃO DOS ATRIBUTOS
        resultado1 = (float) pib1 - densidade1;
        resultado2 = (float) pib2 - densidade2;

        //EXIBIÇÃO CARTA 01
        printf("Carta 1:\n");
        printf("Estado: %s \n", estado1);
        printf("Código: %s\n", codigoCarta1);
        printf("Nome da cidade: %s\n", nomeCidade1);
        printf("PIB: %.2f\n", pib1);
        printf("Densidade demográfica: %.2f\n", densidade1);
        printf("Valor da carta: %.2f\n", resultado1);
        printf("\n\n\n");

        //EXIBIÇÃO CARTA 02;

        printf("Carta 2:\n");
        printf("Estado: %s \n", estado2);
        printf("Código: %s\n", codigoCarta2);
        printf("Nome da cidade: %s\n", nomeCidade2);
        printf("PIB: %.2f\n", pib2);
        printf("Densidade demográfica: %.2f\n", densidade2);
        printf("Valor da carta: %.2f\n", resultado2);
        printf("\n\n\n");

        // LÓGICA PARA MOSTRAR QUAL CARTA VENCEDORA OU SE DEU EMPATE.

        if (resultado1 > resultado2)
        {
            printf("Carta %s venceu", codigoCarta1);
        }
        else
        {
            if(resultado2 > resultado1)
            {
                printf("Carta %s venceu", codigoCarta2);
            }
            else
            {
                printf("O resultado das comparações foi EMPATE;");
            }
        }

        break;

    case 45:            //ATRIBUTOS PONTOS TURÍSTICOS E DENSIDADE DEMOGRÁFICA
    case 54:

        //SUBTRAÇÃO DOS ATRIBUTOS
        resultado1 = (float) pontosTuristicos1 - densidade1;
        resultado2 = (float) pontosTuristicos2 - densidade2;

        //EXIBIÇÃO CARTA 01
        printf("Carta 1:\n");
        printf("Estado: %s \n", estado1);
        printf("Código: %s\n", codigoCarta1);
        printf("Nome da cidade: %s\n", nomeCidade1);
        printf("Pontos turísticos: %d\n", pontosTuristicos1);
        printf("Densidade demográfica: %.2f\n", densidade1);
        printf("Valor da carta: %.2f\n", resultado1);
        printf("\n\n\n");

        //EXIBIÇÃO CARTA 02;

        printf("Carta 2:\n");
        printf("Estado: %s \n", estado2);
        printf("Código: %s\n", codigoCarta2);
        printf("Nome da cidade: %s\n", nomeCidade2);
        printf("Pontos turísticos: %d\n", pontosTuristicos2);
        printf("Densidade demográfica: %.2f\n", densidade2);
        printf("Valor da carta: %.2f\n", resultado2);
        printf("\n\n\n");

        // LÓGICA PARA MOSTRAR QUAL CARTA VENCEDORA OU SE DEU EMPATE.

        if (resultado1 > resultado2)
        {
            printf("Carta %s venceu", codigoCarta1);
        }
        else
        {
            if(resultado2 > resultado1)
            {
                printf("Carta %s venceu", codigoCarta2);
            }
            else
            {
                printf("O resultado das comparações foi EMPATE;");
            }
        }

        break;

    default:
        printf("Opção Inválida");
        break;
    }

    return 0;

}

