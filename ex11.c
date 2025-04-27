#include <stdio.h>
#include <string.h>
#include <unistd.h> // Para usar sleep()

int main() {
    int escolha;
    int respostasCorretas = 0;

    // Introdução estilizada
    printf("\n========================================\n");
    printf("    AVENTURA DO SANJI - ONE PIECE\n");
    printf("========================================\n\n");

    sleep(1);
    printf("Sanji, o cozinheiro dos Piratas do Chapéu de Palha,\n");
    printf("está em uma nova ilha em busca de ingredientes raros!\n\n");
    sleep(2);

    // Primeira escolha
    printf("Na ilha, Sanji encontra dois caminhos:\n");
    printf("1 - Ir para o mercado do porto, onde há cheiros de comida\n");
    printf("2 - Explorar a floresta tropical atrás de ervas raras\n");
    printf("Escolha (1 ou 2): ");
    scanf("%d", &escolha);

    if(escolha == 1) {
        printf("\nSanji vai ao mercado e encontra ingredientes comuns.\n");
        printf("1 - Comprar os ingredientes mesmo assim\n");
        printf("2 - Procurar algo mais especial\n");
        printf("Escolha (1 ou 2): ");
        scanf("%d", &escolha);

        if(escolha == 1) {
            printf("\nSanji prepara uma refeição decente, mas nada extraordinário.\n");
            printf("Fim da aventura. Nada digno do futuro Rei dos Cozinheiros!\n");
            return 0;
        } else {
            printf("\nSanji decide buscar ingredientes melhores e ouve falar\n");
            printf("de um peixe lendário nas redondezas!\n");
            respostasCorretas++;
        }
    } else {
        printf("\nSanji encontra uma plantação de especiarias raras!\n");
        printf("Mas precisa lidar com guardiões da floresta.\n");
        respostasCorretas++;
    }

    // Segunda escolha
    printf("\nSanji encontra um rio com peixes exóticos:\n");
    printf("1 - Tentar pescar com suas habilidades culinárias\n");
    printf("2 - Usar Diable Jambe para pescar rapidamente\n");
    printf("Escolha (1 ou 2): ");
    scanf("%d", &escolha);

    if(escolha == 1) {
        printf("\nSanji pega o lendário 'Peixe-Azul Celeste' com técnica perfeita!\n");
        respostasCorretas++;
    } else {
        printf("\nO ataque assusta os peixes e afeta o ecossistema!\n");
        printf("Robin fica decepcionada com sua falta de cuidado.\n");
        printf("Fim da aventura. Sanji perde pontos com a tripulação.\n");
        return 0;
    }

    // Terceira escolha
    printf("\nApós pescar, Sanji ouve gritos de uma mulher:\n");
    printf("1 - Correr imediatamente para ajudar\n");
    printf("2 - Primeiro guardar os ingredientes com cuidado\n");
    printf("Escolha (1 ou 2): ");
    scanf("%d", &escolha);

    if(escolha == 1) {
        printf("\nSanji salva uma bela chef sendo atacada por piratas!\n");
        printf("Ela se revela a Chef Marina, famosa na Grand Line!\n");
        respostasCorretas++;
    } else {
        printf("\nAo priorizar os ingredientes, a mulher desaparece!\n");
        printf("Era uma armadilha da Baroque Works!\n");
        printf("Fim da aventura. Sanji cai em uma emboscada!\n");
        return 0;
    }

    // Quarta escolha
    printf("\nA Chef Marina oferece um desafio culinário:\n");
    printf("\"Cozinhe algo que represente seus sonhos!\"\n");
    printf("1 - Preparar seu All Blue especial\n");
    printf("2 - Fazer um prato que Nami e Robin adorariam\n");
    printf("Escolha (1 ou 2): ");
    scanf("%d", &escolha);

    if(escolha == 1) {
        printf("\nMarina se emociona: \"Você tem o coração de um verdadeiro cozinheiro!\"\n");
        respostasCorretas++;
    } else {
        printf("\n\"Priorizar mulheres em vez de seu sonho?\", diz Marina decepcionada.\n");
        printf("Fim da aventura. Sanji perde a chance de aprender técnicas novas.\n");
        return 0;
    }

    // Final baseado nas escolhas
    if(respostasCorretas >= 4) {
        printf("\n========================================\n");
        printf("   ★ SANJI CONQUISTA INGREDIENTES LENDÁRIOS! ★\n");
        printf("========================================\n\n");
        printf("Marina se junta a você e ensina técnicas secretas!\n");
        printf("Zoro admite (relutantemente) que a comida está incrível.\n");
        printf("Luffy: \"SANJI! ISSO TÁ MUITO BOM! QUERO MAIS!\"\n");
        printf("\nSanji completa mais uma etapa em direção ao All Blue!\n");
    }

    return 0;
}
