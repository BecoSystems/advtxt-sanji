#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {
    int escolha;
    int respostasCorretas = 0;

    printf("\n========================================\n");
    printf("    AVENTURA DO SANJI - ONE PIECE\n");
    printf("========================================\n\n");

    sleep(1);
    printf("Sanji, o cozinheiro dos Piratas do Chapéu de Palha,\n");
    printf("está em uma nova ilha em busca de ingredientes raros!\n\n");
    sleep(2);

    // 1° ESCOLHA - OBJETOS
    printf("Sanji encontra dois ingredientes promissores:\n");
    printf("1 - Cogumelos bioluminescentes\n");
    printf("2 - Frutas do tamanho de melões com casca espinhosa\n");
    printf("Escolha (1 ou 2): ");
    scanf("%d", &escolha);

    if(escolha == 1) {
        printf("\nOs cogumelos são raros e perfeitos para molhos!\n");

        // 2° ESCOLHA - AÇÃO (VERBO)
        printf("Ao coletá-los, Sanji ouve um barulho:\n");
        printf("1 - Investigar a origem do som\n");
        printf("2 - Continuar coletando rapidamente\n");
        printf("Escolha (1 ou 2): ");
        scanf("%d", &escolha);

        if(escolha == 1) {
            printf("\nEra um cozinheiro ferido que compartilha uma receita secreta!\n");
            respostasCorretas++;
        } else {
            printf("\nEra uma armadilha da Marinha! Sanji é capturado.\n");
            printf("Fim da aventura. Luffy terá que resgatá-lo!\n");
            return 0;
        }
    } else {
        printf("\nAs frutas são explosivas! Sanji quase se machuca.\n");
        printf("Fim da aventura. Zoro ri da sua desventura.\n");
        return 0;
    }

    // 3° ESCOLHA - OBJETOS
    printf("\nNo caminho de volta, Sanji vê dois utensílios:\n");
    printf("1 - Uma frigideira de aço lendário\n");
    printf("2 - Um chapéu de chef antigo\n");
    printf("Escolha (1 ou 2): ");
    scanf("%d", &escolha);

    if(escolha == 1) {
        printf("\nA frigideira pertenceu ao Chef Zeff! Item valioso!\n");

        // 4° ESCOLHA - AÇÃO (VERBO)
        printf("Após esse achado, Sanji deve:\n");
        printf("1 - Testar imediatamente a frigideira\n");
        printf("2 - Levar para o navio com cuidado\n");
        printf("Escolha (1 ou 2): ");
        scanf("%d", &escolha);

        if(escolha == 2) {
            printf("\nSanji preserva o artefato corretamente!\n");
            respostasCorretas++;
        } else {
            printf("\nA frigideira quebra ao ser usada sem preparo!\n");
            printf("Fim da aventura. Zeff ficaria decepcionado.\n");
            return 0;
        }
    } else {
        printf("\nO chapéu estava infestado de aranhas venenosas!\n");
        printf("Fim da aventura. Sanji passa mal e perde os ingredientes.\n");
        return 0;
    }

    // FINAL BASEADO NAS ESCOLHAS
    if(respostasCorretas >= 2) {
        printf("\n========================================\n");
        printf("   ★ MISSÃO CULINÁRIA BEM-SUCEDIDA! ★\n");
        printf("========================================\n\n");
        printf("Sanji retorna ao Thousand Sunny com:\n");
        printf("- Cogumelos bioluminescentes raros\n");
        printf("- Receita secreta do cozinheiro\n");
        printf("- Frigideira lendária do Chef Zeff\n\n");
        printf("Luffy: \"SANJI! FAZ UM BANQUETE!\"\n");
        printf("Zoro: \"Até que enfas ele serve pra algo...\"\n");
        printf("Nami: \"Vendemos algum desses itens?\" *sorrindo*\n");
    }

    return 0;
}
