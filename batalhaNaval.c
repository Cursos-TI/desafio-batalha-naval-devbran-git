#include <stdio.h>

int main() {
    int habilidade_cone[3][5];
    int habilidade_cruz[3][5];
    int habilidade_octaedro[3][5];
    int i, j;
    
    printf("========================================\n");
    printf("    BATALHA NAVAL - NIVEL MESTRE\n");
    printf("      HABILIDADES ESPECIAIS\n");
    printf("========================================\n\n");
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            habilidade_cone[i][j] = 0;
            habilidade_cruz[i][j] = 0;
            habilidade_octaedro[i][j] = 0;
        }
    }
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            if (i == 0 && j == 2) {
                habilidade_cone[i][j] = 1;
            }
            if (i == 1 && (j >= 1 && j <= 3)) {
                habilidade_cone[i][j] = 1;
            }
            if (i == 2 && (j >= 0 && j <= 4)) {
                habilidade_cone[i][j] = 1;
            }
        }
    }
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            if (j == 2) {
                habilidade_cruz[i][j] = 1;
            }
            if (i == 1) {
                habilidade_cruz[i][j] = 1;
            }
        }
    }
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            if (i == 0 && j == 2) {
                habilidade_octaedro[i][j] = 1;
            }
            if (i == 1 && (j >= 1 && j <= 3)) {
                habilidade_octaedro[i][j] = 1;
            }
            if (i == 2 && j == 2) {
                habilidade_octaedro[i][j] = 1;
            }
        }
    }
    
    printf("Habilidade: CONE\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", habilidade_cone[i][j]);
        }
        printf("\n");
    }
    
    printf("\nHabilidade: CRUZ\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", habilidade_cruz[i][j]);
        }
        printf("\n");
    }
    
    printf("\nHabilidade: OCTAEDRO\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", habilidade_octaedro[i][j]);
        }
        printf("\n");
    }
    
    printf("\n========================================\n");
    printf("   HABILIDADES ESPECIAIS CONCLUIDAS\n");
    printf("========================================\n");
    
    return 0;
}
