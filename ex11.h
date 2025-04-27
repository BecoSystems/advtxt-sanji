/*****************************************************************************
 *   exN.c                                    Version 20250427.140000        *
 *                                                                           *
 *   Aventura interativa baseada em One Piece                                *
 *   Copyright (C) 2025    Ruben Carlo Benante                               *
 *****************************************************************************/

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "exN.h"

/* ------------------------------------------------------------------------- */
/* Local function prototypes */
void aventura_sanji(void);

/* ------------------------------------------------------------------------- */
/**
 * \brief Inicializa o programa
 */
void exN_init(void) {
    IFDEBUG("Inicializando variáveis e ambiente...");
    /* Aqui poderiam ser colocadas inicializações futuras */
}

/* ------------------------------------------------------------------------- */
/**
 * \brief Exibe informações de ajuda
 */
void help(void) {
    printf("Uso: ./exN [opções]\n");
    printf("Simula a aventura do Sanji em busca de ingredientes raros.\n");
    printf("Opções:\n");
    printf("  -h    Exibe esta ajuda\n");
    printf("  -v    Mostra a versão do programa\n");
}

/* ------------------------------------------------------------------------- */
/**
 * \brief Exibe informações de copyright
 */
void copyr(void) {
    printf("Aventura do Sanji - Copyright (C) 2025\n");
    printf("Adaptado por ChatGPT com base no template de Ruben Carlo Benante\n");
    printf("Distribuído sob a Licença Pública Geral GNU v2\n");
}

/* ------------------------------------------------------------------------- */
/**
 * \brief Função principal
 */
int main(int argc, char *argv[]) {
    exN_init();

    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "-h")) {
            help();
            return 0;
        } else if (!strcmp(argv[i], "-v")) {
            printf("Versão: %s\n", VERSION);
            return 0;
        }
    }

    aventura_sanji();
    return 0;
}

/* ------------------------------------------------------------------------- */
/**
 * \brief Função principal da história interativa de Sanji
 */
void aventura_sanji(void) {
    int escolha;
    int respostasCorretas = 0;

    printf("\n========================================\n");
    printf("    AVENTURA DO SANJI - ONE PIECE\n");
    printf("========================================\n\n");

    sleep(1);
    printf("Sanji, o cozinheiro dos Piratas do Chapéu de Palha,\n");
    printf("está em uma nova ilha em busca de ingredientes raros!\n\n");
    sleep(2);

    /* Primeira escolha */
    printf("Sanji encontra dois ingredientes promissores:\n");
    printf("1 - Cogumelos bioluminescentes\n");
    printf("2 - Frutas do tamanho de melões com casca espinhosa\n");
    printf("Escolha (1 ou 2): ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("\nOs cogumelos são raros e perfeitos para molhos!\n");
        printf("Ao coletá-los, Sanji ouve um barulho:\n");
        printf("1 - Investigar a origem do som\n");
        printf("2 - Continuar coletando rapidamente\n");
        printf("Escolha (1 ou 2): ");
        scanf("%d", &escolha);

        if (escolha == 1) {
            printf("\nEra um cozinheiro ferido que compartilha uma receita secreta!\n");
            respostasCorretas++;
        } else {
            printf("\nEra uma armadilha da Marinha! Sanji é capturado.\n");
            printf("Fim da aventura. Luffy terá que resgatá-lo!\n");
            return;
        }
    } else {
        printf("\nAs frutas são explosivas! Sanji quase se machuca.\n");
        printf("Fim da aventura. Zoro ri da sua desventura.\n");
        return;
    }

    /* Segunda parte */
    printf("\nNo caminho de volta, Sanji vê dois utensílios:\n");
    printf("1 - Uma frigideira de aço lendário\n");
    printf("2 - Um chapéu de chef antigo\n");
    printf("Escolha (1 ou 2): ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("\nA frigideira pertenceu ao Chef Zeff! Item valioso!\n");
        printf("Após esse achado, Sanji deve:\n");
        printf("1 - Testar imediatamente a frigideira\n");
        printf("2 - Levar para o navio com cuidado\n");
        printf("Escolha (1 ou 2): ");
        scanf("%d", &escolha);

        if (escolha == 2) {
            printf("\nSanji preserva o artefato corretamente!\n");
            respostasCorretas++;
        } else {
            printf("\nA frigideira quebra ao ser usada sem preparo!\n");
            printf("Fim da aventura. Zeff ficaria decepcionado.\n");
            return;
        }
    } else {
        printf("\nO chapéu estava infestado de aranhas venenosas!\n");
        printf("Fim da aventura. Sanji passa mal e perde os ingredientes.\n");
        return;
    }

    /* Final */
    if (respostasCorretas >= 2) {
        printf("\n========================================\n");
        printf("   ★ MISSÃO CULINÁRIA BEM-SUCEDIDA! ★\n");
        printf("========================================\n\n");
        printf("Sanji retorna ao Thousand Sunny com:\n");
        printf("- Cogumelos bioluminescentes raros\n");
        printf("- Receita secreta do cozinheiro\n");
        printf("- Frigideira lendária do Chef Zeff\n\n");
        printf("Luffy: \"SANJI! FAZ UM BANQUETE!\"\n");
        printf("Zoro: \"Até que enfim ele serve pra algo...\"\n");
        printf("Nami: \"Vendemos algum desses itens?\" *sorrindo*\n");
    }
}

